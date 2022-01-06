;==================================================================================================
; Normal.inc
;
; This file defines sizes and positions for the "normal" sized skins of your package.
; It makes sense to define these in a separate file and only once if you have several skins that 
; use the same visual layout.
;

[Variables]

;
; Sizes
;
CanvasWidth=170
CanvasHeight=50
BarHeight=6
HistoHeight=40

;
; Margins
;
TitleMarginTop=0r
LegendMarginTop=20r
BarMarginTop=(#HistoHeight#+14)r
HistoYr=(-#HistoHeight#)r

;
; Font size
;
FontSize=8
