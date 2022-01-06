;==================================================================================================
; Measure-HWi-AIO.inc
;
; This file defines measures of an AIO (All In One CPU Cooler) as reported by HWiNFO.
; Please check the @Resources\HWiNFO.txt file for configuring HWiNFO for your system.
;

;------------------------------------------------------------------------------
;
; Fan 1 rpm
;
[MeasureAIOFan1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-AIO-SensorId#
HWiNFOSensorInstance=#HWiNFO-AIO-SensorInstance#
HWiNFOEntryId=#HWiNFO-AIO-Fan1#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan1#
Group=HWiNFO

[MeasureAIOFan1Color]
Measure=Calc
Formula=MeasureAIOFan1 >= #HiFan1# ? 2 : (MeasureAIOFan1 >= #MedFan1# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan1 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanHi#,#LineColorTransparency#"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanHi#,#HistoColorTransparency#"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan1 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanMed#,#LineColorTransparency#"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanMed#,#HistoColorTransparency#"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan1 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanLow#,#LineColorTransparency#"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanLow#,#HistoColorTransparency#"][!Redraw]

;------------------------------------------------------------------------------
;
; Fan 2 rpm
;
[MeasureAIOFan2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-AIO-SensorId#
HWiNFOSensorInstance=#HWiNFO-AIO-SensorInstance#
HWiNFOEntryId=#HWiNFO-AIO-Fan2#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan2#
Group=HWiNFO

[MeasureAIOFan2Color]
Measure=Calc
Formula=MeasureAIOFan2 >= #HiFan2# ? 2 : (MeasureAIOFan2 >= #MedFan2# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan2 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanHi#,#LineColorTransparency#"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanHi#,#HistoColorTransparency#"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan2 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanMed#,#LineColorTransparency#"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanMed#,#HistoColorTransparency#"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan2 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanLow#,#LineColorTransparency#"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanLow#,#HistoColorTransparency#"][!Redraw]

;------------------------------------------------------------------------------
;
; Pump rpm
;
[MeasureAIOPump]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-AIO-SensorId#
HWiNFOSensorInstance=#HWiNFO-AIO-SensorInstance#
HWiNFOEntryId=#HWiNFO-AIO-CPUPump#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxCPUPump#
Group=HWiNFO

[MeasureAIOPumpColor]
Measure=Calc
Formula=MeasureAIOPump >= #HiCPUPump# ? 2 : (MeasureAIOPump >= #MedCPUPump# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarCPUPump BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineCPUPump LineColor "#ColorFanHi#,#LineColorTransparency#"][!SetOption showHistogramCPUPump PrimaryColor "#ColorFanHi#,#HistoColorTransparency#"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarCPUPump BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineCPUPump LineColor "#ColorFanMed#,#LineColorTransparency#"][!SetOption showHistogramCPUPump PrimaryColor "#ColorFanMed#,#HistoColorTransparency#"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarCPUPump BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineCPUPump LineColor "#ColorFanLow#,#LineColorTransparency#"][!SetOption showHistogramCPUPump PrimaryColor "#ColorFanLow#,#HistoColorTransparency#"][!Redraw]

;------------------------------------------------------------------------------
;
; Pump rpm
;
[MeasureAIOCoolant]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-AIO-SensorId#
HWiNFOSensorInstance=#HWiNFO-AIO-SensorInstance#
HWiNFOEntryId=#HWiNFO-AIO-CPUCoolantTemp#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxCPUCoolant#
Group=HWiNFO

[MeasureAIOCoolantColor]
Measure=Calc
Formula=MeasureAIOCoolant >= #HiCPUCoolant# ? 2 : (MeasureAIOCoolant >= #MedCPUCoolant# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarCPUCoolant BarColor "#ColorTempHi#,#BarColorTransparency#"][!SetOption showLineCPUCoolant LineColor "#ColorTempHi#,#LineColorTransparency#"][!SetOption showHistogramCPUCoolant PrimaryColor "#ColorTempHi#,#HistoColorTransparency#"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarCPUCoolant BarColor "#ColorTempMed#,#BarColorTransparency#"][!SetOption showLineCPUCoolant LineColor "#ColorTempMed#,#LineColorTransparency#"][!SetOption showHistogramCPUCoolant PrimaryColor "#ColorTempMed#,#HistoColorTransparency#"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarCPUCoolant BarColor "#ColorTempLow#,#BarColorTransparency#"][!SetOption showLineCPUCoolant LineColor "#ColorTempLow#,#LineColorTransparency#"][!SetOption showHistogramCPUCoolant PrimaryColor "#ColorTempLow#,#HistoColorTransparency#"][!Redraw]
