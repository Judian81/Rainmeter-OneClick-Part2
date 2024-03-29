[Variables]
; Set by context menu selection
CustomTitle=0
; Your custom title
MenuTitle=#Path#

; Initial path to parse and display
Path=

; Menu Types via Context menu selection
; Sets value to 'SmallIcons' for Small Icon and Text List
; Sets value to 'TextOnly' for Text Only List
; Sets Value to 'LargeIcons' for Icons Only List
MenuType=LargeIcons

; Theme colors
HeaderColor=130,131,132,255
; Set the border, highlight, light, and dark color to modify appearance
BorderColor=30,32,37,255
HighlightColor=87,93,103,255
;HighlightColor=0,0,0,255
; Used as colors for text and back in Light/Dark themes
LightColor=255,255,255,255
DarkColor=30,32,37,255
; These will be changed by theme selection from the context menu
BackColor=30,32,37,255
BackColor2=67,73,83,255
;TextColor=130,131,132,255
TextColor=183,204,213,230
TextColor2=183,204,213,230

;Dimensions
; Note: Scaling above 3x will require you to modify the [Slider] section Repeat multiplier to the value of 26 times your vSkinScale
; So if your vSkinScale is 4, the Repeat number should be 92
; This will expand the menu down enough to show all items 
;vSkinScale=1
;vSkinWidth=(361*#vSkinScale#)

; Don't edit unless you know what these do
ContainerH=(#vSkinHeight#*#vSkinScale#)
; Stationary :: (280*#vSkinScale#)
; RollDown :: (23*#vSkinScale#)
;TextSize=(12*#vSkinScale#)
TextSize=(10*#vSkinScale#)
U=[!UpdateMeasure Slider][!UpdateMeter *][!Redraw]
Path=C:\Users\John\Favorites\MSN Websites\
