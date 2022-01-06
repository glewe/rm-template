;==================================================================================================
; Measure-Temp.inc
;
; This file defines measures of temperature readings as reported by HWiNFO.
; Please check the @Resources\HWiNFO.txt file for configuring HWiNFO for your system.
;

;------------------------------------------------------------------------------
;
; System Temperature
;
[MeasureSYSTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=#HWiNFO-MOBO-SensorInstance#
HWiNFOEntryId=#HWiNFO-MOBO-SysTemp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxSYS#
Group=HWiNFO

[MeasureSYSTempColor]
Measure=Calc
Formula=MeasureSYSTemp >= #HiSYS# ? 2 : (MeasureSYSTemp >= #MedSYS# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarSYS BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineSYS LineColor "#ColorTempHi#,180"][!SetOption showHistogramSYS PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarSYS BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineSYS LineColor "#ColorTempMed#,180"][!SetOption showHistogramSYS PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarSYS BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineSYS LineColor "#ColorTempLow#,180"][!SetOption showHistogramSYS PrimaryColor "#ColorTempLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; GPU Temperature
;
[MeasureGPUTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-GPU0-SensorId#
HWiNFOSensorInstance=#HWiNFO-GPU0-SensorInstance#
HWiNFOEntryId=#HWiNFO-GPU0-Temp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxGPU#
Group=HWiNFO

[MeasureGPUTempColor]
Measure=Calc
Formula=MeasureGPUTemp >= #HiGPU# ? 2 : (MeasureGPUTemp >= #MedGPU# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarGPU BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineGPU LineColor "#ColorTempHi#,180"][!SetOption showHistogramGPU PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarGPU BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineGPU LineColor "#ColorTempMed#,180"][!SetOption showHistogramGPU PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarGPU BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineGPU LineColor "#ColorTempLow#,180"][!SetOption showHistogramGPU PrimaryColor "#ColorTempLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; CPU Temperature
;
[MeasureCPUTemp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-MOBO-SensorId#
HWiNFOSensorInstance=#HWiNFO-MOBO-SensorInstance#
;HWiNFOEntryId=#HWiNFO-MOBO-CPUTemp#
HWiNFOEntryId=#HWiNFO-MOBO-CPUPackageTemp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxCPU#
Group=HWiNFO

[MeasureCPUTempColor]
Measure=Calc
Formula=MeasureCPUTemp >= #HiCPU# ? 2 : (MeasureCPUTemp >= #MedCPU# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarCPU BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineCPU LineColor "#ColorTempHi#,180"][!SetOption showHistogramCPU PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarCPU BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineCPU LineColor "#ColorTempMed#,180"][!SetOption showHistogramCPU PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarCPU BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineCPU LineColor "#ColorTempLow#,180"][!SetOption showHistogramCPU PrimaryColor "#ColorTempLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; HD0 Temperature
;
[MeasureHD0Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SSD0-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD0-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD0-Temp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxHD#
Group=HWiNFO

[MeasureHD0Color]
Measure=Calc
Formula=MeasureHD0Temp >= #HiCore# ? 2 : (MeasureHD0Temp >= #MedCore# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarHD0 BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineHD0 LineColor "#ColorTempHi#,180"][!SetOption showHistogramHD0 PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarHD0 BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineHD0 LineColor "#ColorTempMed#,180"][!SetOption showHistogramHD0 PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarHD0 BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineHD0 LineColor "#ColorTempLow#,180"][!SetOption showHistogramHD0 PrimaryColor "#ColorTempLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; HD1 Temperature
;
[MeasureHD1Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-SSD1-SensorId#
HWiNFOSensorInstance=#HWiNFO-SSD1-SensorInstance#
HWiNFOEntryId=#HWiNFO-SSD1-Temp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxHD#
Group=HWiNFO

[MeasureHD1Color]
Measure=Calc
Formula=MeasureHD1Temp >= #HiCore# ? 2 : (MeasureHD1Temp >= #MedCore# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarHD1 BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineHD1 LineColor "#ColorTempHi#,180"][!SetOption showHistogramHD1 PrimaryColor "#ColorTempHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarHD1 BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineHD1 LineColor "#ColorTempMed#,180"][!SetOption showHistogramHD1 PrimaryColor "#ColorTempMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarHD1 BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineHD1 LineColor "#ColorTempLow#,180"][!SetOption showHistogramHD1 PrimaryColor "#ColorTempLow#,60"][!Redraw]
