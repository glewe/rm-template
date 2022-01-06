;==================================================================================================
; Meters-Memory.inc
;
; This file defines the meters for the memory skin (and its variants).
;

;------------------------------------------------------------------------------
;
; RAM
;
[MeterRamTitle]
Meter=String
X=0
Y=#TitleMarginTop#
AntiAlias=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
StringStyle=Bold
Text=#CaptionRAM#

[MeterRamLegendLeft]
MeasureName=MeasureRamTotal
Meter=String
X=0
Y=#LegendMarginTop#
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
StringAlign=Left
Text="Total:  %1B"

[MeterRamLegendRight]
MeasureName=MeasureRamFree
Meter=String
X=#CanvasWidth#
Y=0r
AntiAlias=1
AutoScale=1
FontColor=#FontColor#
FontFace=#FontFace#
FontSize=#FontSize#
Percentual=0
StringAlign=Right
Text="Free:  %1B"

[MeasureRamBar]
MeasureName=MeasureRamUsed
Meter=Bar
X=0
Y=#BarMarginTop#
W=#CanvasWidth#
H=#BarHeight#
BarColor=#BarColor#
SolidColor=#BarColorBgFrom#
SolidColor2=#BarColorBgTo#
BarOrientation=Horizontal

[MeasureRamHistoLine]
MeasureName=MeasureRamUsed
Meter=Line
X=0
Y=#HistoYr#
H=#HistoHeight#
W=#CanvasWidth#
AntiAlias=1
AutoScale=0
Flip=0
LineCount=1
LineColor=#HistoLineColor#

[MeasureRamHistoFill]
MeasureName=MeasureRamUsed
Meter=Histogram
X=0
Y=0r
H=#HistoHeight#
W=#CanvasWidth#
AntiAlias=1
AutoScale=0
Flip=0
PrimaryColor=#HistoFillColor#
