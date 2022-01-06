;==================================================================================================
; Measure-GPU-0.inc
;
; This file defines measures of the first GPU (0) as reported by HWiNFO.
; Please check the @Resources\HWiNFO.txt file for configuring HWiNFO for your system.
;

;------------------------------------------------------------------------------
;
; GPU Name
;
[MeasureGPU0Name]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOType=SensorName
RegExpSubstitute=1
Substitute="^(.*]: )":"","(:.*)$":"","\(R\)":"","®":"","\(TM\)":"","\(tm\)":"","™":"","NVIDIA ":"","ATI/AMD ":"","AMD ":"","Intel ":"","Qualcomm ":""," GPU":""
UpdateDivider=-1

;------------------------------------------------------------------------------
;
; GPU Clock
;
[MeasureGPU0Clock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Clock#
HWiNFOType=CurrentValue
Group=HWiNFO

;------------------------------------------------------------------------------
;
; GPU Temperature
;
[MeasureGPU0Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxGPUTemp#
Group=HWiNFO

[MeasureGPU0TempColor]
Measure=Calc
Formula=MeasureGPU0Temp >= #HiGPUTemp# ? 2 : (MeasureGPU0Temp >= #MedGPUTemp# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarGPUTemp BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineGPUTemp LineColor "#ColorTempHi#,180"][!SetOption showHistogramGPUTemp PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarGPUTemp BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineGPUTemp LineColor "#ColorTempMed#,180"][!SetOption showHistogramGPUTemp PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarGPUTemp BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineGPUTemp LineColor "#ColorTempLow#,180"][!SetOption showHistogramGPUTemp PrimaryColor "#ColorTempLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; GPU Fan 1 rpm
;
[MeasureGPU0Fan1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-GPUFan1#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxGPUFan#
Group=HWiNFO

;------------------------------------------------------------------------------
;
; GPU Fan 2 rpm
;
[MeasureGPU0Fan2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-GPUFan2#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxGPUFan#
Group=HWiNFO

;------------------------------------------------------------------------------
;
; GPU Fan 1 and 2 average rpm
;
[MeasureGPU0Fan]
Measure=Calc
Formula=((MeasureGPUFan1+MeasureGPUFan2)/2)
MinValue=0
MaxValue=#MaxGPUFan#

[setGPU0FanColor]
Measure=Calc
Formula=MeasureGPUFan >= #HiGPUFan# ? 2 : (MeasureGPUFan >= #MedGPUFan# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarGPUFan BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineGPUFan LineColor "#ColorFanHi#,180"][!SetOption showHistogramGPUFan PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarGPUFan BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineGPUFan LineColor "#ColorFanMed#,180"][!SetOption showHistogramGPUFan PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarGPUFan BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineGPUFan LineColor "#ColorFanLow#,180"][!SetOption showHistogramGPUFan PrimaryColor "#ColorFanLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; GPU Usage
;
[MeasureGPU0Usage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreLoad#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=HWiNFO

;------------------------------------------------------------------------------
;
; GPU Memory Clock
;
[MeasureGPU0MemClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryClock#
HWiNFOType=CurrentValue
Group=HWiNFO

;------------------------------------------------------------------------------
;
; GPU Memory
;
[MeasureGPUMemAlloc]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryAlloc#
HWiNFOType=CurrentValue
Group=HWiNFO

[MeasureGPU0MemoryUsage0]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-MemoryUsage#
HWiNFOType=CurrentValue
Group=HWiNFO

;
; used for GPUs that do NOT have a sensor for percentage of RAM in use (e.g., AMD)
;
[MeasureGPU0MemoryUsage1]
Measure=Calc
Formula=MeasureGPUMemAlloc / #GPU1-MemoryTotal# * 100
Disabled=(#GPU1-MemoryTotal# = 0)

; 
; calculate percentage of RAM in use
;
[MeasureGPU0MemUsedPercent]
Measure=Calc
Formula=Max(MeasureGPU0MemoryUsage0, MeasureGPU0MemoryUsage1)
MinValue=0
MaxValue=100
IfCondition=MeasureGPU0MemUsedPercent > 0
IfTrueAction=[!EnableMeasure "MeasureGPU0RAMTotal"]
IfFalseAction=[!DisableMeasure "MeasureGPU0RAMTotal"][!SetVariable TextRAMTotal [&LuaScript:FormatNumber(0.0,2,'1k')]]

[MeasureGPU0RAMUsed]
Measure=Calc
Formula=MeasureGPU0MemAlloc * 1024 * 1024
IfCondition=1
IfTrueAction=[!SetVariable TextRAMUsed [&LuaScript:FormatNumber([&MeasureGPU0RAMUsed],4,'1k')]]
OnChangeAction=[!SetVariable TextRAMUsed [&LuaScript:FormatNumber([&MeasureGPU0RAMUsed],4,'1k')]]

[MeasureGPU0RAMTotal]
Measure=Calc
Formula=(#GPU1-MemoryTotal# > 0) ? #GPU1-MemoryTotal# * 1024 * 1024 : MeasureGPU0MemAlloc * 1024 * 1024 * 100 / MeasureGPU0MemUsedPercent
IfCondition=1
IfTrueAction=[!SetVariable TextRAMTotal [&LuaScript:FormatNumber([&MeasureGPU0RAMTotal],2,'1k')]]
OnChangeAction=[!SetVariable TextRAMTotal [&LuaScript:FormatNumber([&MeasureGPU0RAMTotal],2,'1k')]]
Disabled=1

[MeasureGPU0RAMFree]
Measure=Calc
Formula=Max(0, MeasureGPU0RAMTotal - MeasureGPU0RAMUsed)
IfCondition=1
IfTrueAction=[!SetVariable TextRAMFree [&LuaScript:FormatNumber([&MeasureGPU0RAMFree],4,'1k')]]
OnChangeAction=[!SetVariable TextRAMFree [&LuaScript:FormatNumber([&MeasureGPU0RAMFree],4,'1k')]]

;------------------------------------------------------------------------------
;
; GPU Core Voltage
;
[MeasureGPU0CoreVoltage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-CoreVoltage#
HWiNFOType=CurrentValue
Group=HWiNFO
