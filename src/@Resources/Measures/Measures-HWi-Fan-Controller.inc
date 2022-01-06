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
[MeasureFANCFan1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan1#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan1#
Group=HWiNFO

[MeasureFANCFan1Color]
Measure=Calc
Formula=MeasureFANCFan1 >= #HiFan1# ? 2 : (MeasureFANCFan1 >= #MedFan1# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan1 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan1 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan1 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan1 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan1 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; Fan 2 rpm
;
[MeasureFANCFan2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan2#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan2#
Group=HWiNFO

[MeasureFANCFan2Color]
Measure=Calc
Formula=MeasureFANCFan2 >= #HiFan2# ? 2 : (MeasureFANCFan2 >= #MedFan2# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan2 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan2 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan2 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan2 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan2 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; Fan 3 rpm
;
[MeasureFANCFan3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan3#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan3#
Group=HWiNFO

[MeasureFANCFan3Color]
Measure=Calc
Formula=MeasureFANCFan3 >= #HiFan3# ? 2 : (MeasureFANCFan3 >= #MedFan3# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan3 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan3 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan3 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan3 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan3 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan3 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan3 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan3 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan3 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; Fan 4 rpm
;
[MeasureFANCFan4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan4#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan4#
Group=HWiNFO

[MeasureFANCFan4Color]
Measure=Calc
Formula=MeasureFANCFan4 >= #HiFan4# ? 2 : (MeasureFANCFan4 >= #MedFan4# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan4 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan4 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan4 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan4 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan4 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan4 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan4 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan4 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan4 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; Fan 5 rpm
;
[MeasureFANCFan5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan5#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan5#
Group=HWiNFO

[MeasureFANCFan5Color]
Measure=Calc
Formula=MeasureFANCFan5 >= #HiFan5# ? 2 : (MeasureFANCFan5 >= #MedFan5# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan5 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan5 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan5 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan5 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan5 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan5 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan5 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan5 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan5 PrimaryColor "#ColorFanLow#,60"][!Redraw]

;------------------------------------------------------------------------------
;
; Fan 6 rpm
;
[MeasureFANCFan6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-FANC-SensorId#
HWiNFOSensorInstance=#HWiNFO-FANC-SensorInstance#
HWiNFOEntryId=#HWiNFO-FANC-Fan6#
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#MaxFan6#
Group=HWiNFO

[MeasureFANCFan6Color]
Measure=Calc
Formula=MeasureFANCFan6 >= #HiFan6# ? 2 : (MeasureFANCFan6 >= #MedFan6# ? 1 : -1)
IfAboveValue=1
ifAboveAction=[!SetOption showBarFan6 BarColor "#ColorFanHi#,#BarColorTransparency#"][!SetOption showLineFan6 LineColor "#ColorFanHi#,180"][!SetOption showHistogramFan6 PrimaryColor "#ColorFanHi#,60"][!Redraw]
IfEqualValue=1
ifEqualAction=[!SetOption showBarFan6 BarColor "#ColorFanMed#,#BarColorTransparency#"][!SetOption showLineFan6 LineColor "#ColorFanMed#,180"][!SetOption showHistogramFan6 PrimaryColor "#ColorFanMed#,60"][!Redraw]
IfBelowValue=0
ifBelowAction=[!SetOption showBarFan6 BarColor "#ColorFanLow#,#BarColorTransparency#"][!SetOption showLineFan6 LineColor "#ColorFanLow#,180"][!SetOption showHistogramFan6 PrimaryColor "#ColorFanLow#,60"][!Redraw]
