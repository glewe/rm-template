;==================================================================================================
; Global.inc
;
; This file defines variables that are common to all your skins.
; You can refer to these variables in your skin files by wrapping them into hashes,e.g.
; MyColor=#Magenta#
;

;------------------------------------------------------------------------------
;
[Variables]
;
; Global Colors
;
; This file defines all 139 named web colors for Rainmeter use.
; The colors are clustered by color groups to allow easier selection.
;
; Refer to this page for a visual representation of these colors:
; https://www.rapidtables.com/web/color/html-color-codes.html
;
; You can refer to these colors in Rainmeters skins by wrapping their names in hashes, e.g.
; #Powderblue#
;
; You can also add a transparency to them in Rainmeters skins by adding a corresponding
; opacity value separated by a comma. (255=fully opaque, 0=fully transparent), e.g.
; #Powderblue#,180
;
; You can also define a transparency value as a variable in Rainmeter and add a
; variable accordingly, e.g.
; #Powderblue#,#MyTransparency#
;
;
; Blue Colors
;
Powderblue=176,224,230
Lightblue=173,216,230
Lightskyblue=135,206,250
Skyblue=135,206,235
Deepskyblue=0,191,255
Lightsteelblue=176,196,222
Dodgerblue=30,144,255
Cornflowerblue=100,149,237
Steelblue=70,130,180
Royalblue=65,105,225
Blue=0,0,255
Mediumblue=0,0,205
Darkblue=0,0,139
Navy=0,0,128
Midnightblue=25,25,112
Mediumslateblue=123,104,238
Slateblue=106,90,205
Darkslateblue=72,61,139
;
; Brown Colors
;
Cornsilk=255,248,220
Blanchedalmond=255,235,205
Bisque=255,228,196
Navajowhite=255,222,173
Wheat=245,222,179
Burlywood=222,184,135
Tan=210,180,140
Rosybrown=188,143,143
Sandybrown=244,164,96
Goldenrod=218,165,32
Peru=205,133,63
Chocolate=210,105,30
Saddlebrown=139,69,19
Sienna=160,82,45
Brown=165,42,42
Maroon=128,0,0
;
; Cyan Colors
;
Lightcyan=224,255,255
Cyan=0,255,255
Aqua=0,255,255
Aquamarine=127,255,212
Mediumaquamarine=102,205,170
Paleturquoise=175,238,238
Turquoise=64,224,208
Mediumturquoise=72,209,204
Darkturquoise=0,206,209
Lightseagreen=32,178,170
Cadetblue=95,158,160
Darkcyan=0,139,139
Teal=0,128,128
;
; Gray Colors
;
Gainsboro=220,220,220
Lightgray=211,211,211
Silver=192,192,192
Darkgray=169,169,169
Gray=128,128,128
Dimgray=105,105,105
Lightslategray=119,136,153
Slategray=112,128,144
Darkslategray=47,79,79
Black=0,0,0
;
; Green Colors
;
Lawngreen=124,252,0
Chartreuse=127,255,0
Limegreen=50,205,50
Lime=0.255.0
Forestgreen=34,139,34
Green=0,128,0
Darkgreen=0,100,0
Greenyellow=173,255,47
Yellowgreen=154,205,50
Springgreen=0,255,127
Mediumspringgreen=0,250,154
Lightgreen=144,238,144
Palegreen=152,251,152
Darkseagreen=143,188,143
Mediumseagreen=60,179,113
Seagreen=46,139,87
Olive=128,128,0
Darkolivegreen=85,107,47
Olivedrab=107,142,35
;
; Orange Colors
;
Coral=255,127,80
Tomato=255,99,71
Orangered=255,69,0
Gold=255,215,0
Orange=255,165,0
Darkorange=255,140,0
;
; Pink Colors
;
Pink=255,192,203
Lightpink=255,182,193
Hotpink=255,105,180
Deeppink=255,20,147
Palevioletred=219,112,147
Mediumvioletred=199,21,133
;
; Purple Colors
;
Lavender=230,230,250
Thistle=216,191,216
Plum=221,160,221
Violet=238,130,238
Orchid=218,112,214
Fuchsia=255,0,255
Magenta=255,0,255
Mediumorchid=186,85,211
Mediumpurple=147,112,219
Blueviolet=138,43,226
Darkviolet=148,0,211
Darkorchid=153,50,204
Darkmagenta=139,0,139
Purple=128,0,128
Indigo=75,0,130
;
; Red Colors
;
Lightsalmon=255,160,122
Salmon=250,128,114
Darksalmon=233,150,122
Lightcoral=240,128,128
Indianred=205,92,92
Crimson=220,20,60
Firebrick=178,34,34
Red=255,0,0
Darkred=139,0,0
;
; White Colors
;
White=255,255,255
Snow=255,250,250
Honeydew=240,255,240
Mintcream=245,255,250
Azure=240,255,255
Aliceblue=240,248,255
Ghostwhite=248,248,255
Whitesmoke=245,245,245
Seashell=255,245,238
Beige=245,245,220
Oldlace=253,245,230
Floralwhite=255,250,240
Ivory=255,255,240
Antiquewhite=250,235,215
Linen=250,240,230
Lavenderblush=255,240,245
Mistyrose=255,228,225
;
; Yellow Colors
;
Lightyellow=255,255,224
Lemonchiffon=255,250,205
Lightgoldenrodyellow=250,250,210
Papayawhip=255,239,213
Moccasin=255,228,181
Peachpuff=255,218,185
Palegoldenrod=238,232,170
Khaki=240,230,140
Darkkhaki=189,183,107
Yellow=255,255,0

;------------------------------------------------------------------------------
;
; Global Transparencies
;
; BarColorBgFromTransparency=
; BarColorBgToTransparency=
;    Measure bars allow a gradient background by applying a start to end transparency.
;    The "From" value should be higher than the "To" value.
;
; BarColorTransparency=
;    You can also apply a transparency value to the color of the measured value of a bar.
;
; HistoColorTransparency=
; LineColorTransparency=
;    Measure histograms allow to color the area below the value line differntly from
;    the line itself. This is best done by using the same color with a different transparency.
;    The transparency of the HistoColor should be lower than the one of the HistoLine.
;
; TextTransparency=200
;    You can set a lower transparency for your global text here, e.g. 200.
;
BarColorBgFromTransparency=60
BarColorBgToTransparency=40
BarColorTransparency=180
HistoFillColorTransparency=60
HistoLineColorTransparency=180
TextTransparency=200

;------------------------------------------------------------------------------
;
; Global Font
;
FontColorGlobal=#White#,#TextTransparency#
FontFaceGlobal=Tahoma

;------------------------------------------------------------------------------
;
; Global Bar and Histogram Colors
;
;
; Global Bar Color
;
BarColor=#Red#,#BarColorTransparency#
BarColorBgFrom=#White#,#BarColorBgFromTransparency#
BarColorBgTo=#White#,#BarColorBgToTransparency#

;
; Global Histogram Color
;
HistoColor=#Red#
HistoFillColor=#HistoColor#,#HistoFillColorTransparency#
HistoLineColor=#HistoColor#,#HistoLineColorTransparency#

;------------------------------------------------------------------------------
;
; Other Global Options
;
;    Feel free to add any other global settings to your skin package here.
;


;------------------------------------------------------------------------------
;
; Skin Options
;
;    Feel free to add any other skin specific settings here.

;
; Memory skin options
;
ColorMemory=#Pink#
