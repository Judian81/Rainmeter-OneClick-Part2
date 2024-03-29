; Menu Meters ~ Large Icons
;----------------------------------------------------
; Meter Styles
;----------------------------------------------------
[Variables]
DWidth=70
;(#vSkinWidth#*0.18)
;vSkinScale=1
vFilePathRead1=
vFilePathRead2=
vFilePathRead3=
vFilePathRead4=
vFilePathRead5=
vFilePathRead6=
vFilePathRead7=
vFilePathRead8=

[TextStyle]
FontSize=#TextSize#
FontColor=#TextColor#
AntiAlias=1
;InlineSetting=Weight 600
DynamicVariables=1
Container=ContainerMeter

[IconStyle]
X=r
Y=r
W=(#DWidth#*#vSkinScale#)
H=(#DWidth#*#vSkinScale#)
AntiAlias=1
DynamicVariables=1
Container=ContainerMeter

[HighlightStyle]
SolidColor=0,0,0,1
X=(-#DWidth#/3*#vSkinScale#)R
Y=(-#DWidth#*#vSkinScale#)r
W=([Index1Icon:W])
H=([Index1Icon:H])
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor "#HighlightColor#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor "0,0,0,1"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=ContainerMeter

[InfoStyle]
X=(#DWidth#/2*#vSkinScale#)r
Y=R
Text="%1"
FontSize=(floor(#TextSize#-2))
StringAlign=Center
ClipString=1
W=((#DWidth#*1.18)*#vSkinScale#)
H=(34*#vSkinScale#)
AutoScale=1
AntiAlias=1
DynamicVariables=1
Container=ContainerMeter
;SolidColor=255,0,255

;----------------------------------------------------
; Content Meters
;----------------------------------------------------

;/////////////////thumbnails;/////////////////
[mThumbnailPath]
Measure=String
String=[mPath]
RegExpSubstitute=1
Substitute=":":""
DynamicVariables=1
;/////////////////thumbnails;/////////////////

[Index1]
Meter=Image
MeterStyle=HighlightStyle
Group=Index1
;X=(36*#vSkinScale#)
;Y=(68*#vSkinScale#)
X=(26*#vSkinScale#)
Y=(68*#vSkinScale#)
LeftMouseDoubleClickAction=[!CommandMeasure mIndex1Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index1Icon]
Meter=Image
ImageName="[QuoteText1]"
OnUpdateAction=[!SetVariable "vFilePathRead1" "#CURRENTPATH#\AddOn\Temp\[mThumbnailPath][mIndex1Name].png.txt"]
MeterStyle=IconStyle
X=(26*#vSkinScale#)
Y=(68*#vSkinScale#)
Group=Index1
PreserveAspectRatio=1
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex1Name" "ContextMenu"]

[Index1Info]
Meter=String
MeasureName=mIndex1Name
MeterStyle=TextStyle | InfoStyle
Group=Index1

[Index2]
Meter=Image
MeterStyle=HighlightStyle
Group=Index2
LeftMouseDoubleClickAction=[!CommandMeasure mIndex2Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index2Icon]
Meter=Image
ImageName="[QuoteText2]"
OnUpdateAction=[!SetVariable "vFilePathRead2" "#CURRENTPATH#\AddOn\Temp\[mThumbnailPath][mIndex2Name].png.txt"]
MeterStyle=IconStyle
Group=Index2
PreserveAspectRatio=1
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex2Name" "ContextMenu"]

[Index2Info]
Meter=String
MeasureName=mIndex2Name
MeterStyle=TextStyle | InfoStyle
Group=Index2

[Index3]
Meter=Image
MeterStyle=HighlightStyle
Group=Index3
LeftMouseDoubleClickAction=[!CommandMeasure mIndex3Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index3Icon]
Meter=Image
ImageName="[QuoteText3]"
OnUpdateAction=[!SetVariable "vFilePathRead3" "#CURRENTPATH#\AddOn\Temp\[mThumbnailPath][mIndex3Name].png.txt"]
MeterStyle=IconStyle
Group=Index3
PreserveAspectRatio=1
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex3Name" "ContextMenu"]

[Index3Info]
Meter=String
MeasureName=mIndex3Name
MeterStyle=TextStyle | InfoStyle
Group=Index3

[Index4]
Meter=Image
MeterStyle=HighlightStyle
Group=Index4
LeftMouseDoubleClickAction=[!CommandMeasure mIndex4Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
DynamicVariables=1

[Index4Icon]
Meter=Image
ImageName="[QuoteText4]"
OnUpdateAction=[!SetVariable "vFilePathRead4" "#CURRENTPATH#\AddOn\Temp\[mThumbnailPath][mIndex4Name].png.txt"]
MeterStyle=IconStyle
Group=Index4
PreserveAspectRatio=1
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex4Name" "ContextMenu"]
DynamicVariables=1

[Index4Info]
Meter=String
MeasureName=mIndex4Name
MeterStyle=TextStyle | InfoStyle
Group=Index4

[Index5]
Meter=Image
MeterStyle=HighlightStyle
Group=Index5
X=(26*#vSkinScale#)
Y=(175*#vSkinScale#)
LeftMouseDoubleClickAction=[!CommandMeasure mIndex5Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index5Icon]
Meter=Image
ImageName="[QuoteText5]"
OnUpdateAction=[!SetVariable "vFilePathRead5" "#CURRENTPATH#\AddOn\Temp\\[mThumbnailPath][mIndex5Name].png.txt"]
MeterStyle=IconStyle
Group=Index5
PreserveAspectRatio=1
X=(26*#vSkinScale#)
Y=(175*#vSkinScale#)
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex5Name" "ContextMenu"]

[Index5Info]
Meter=String
MeasureName=mIndex5Name
MeterStyle=TextStyle | InfoStyle
Group=Index5

[Index6]
Meter=Image
MeterStyle=HighlightStyle
Group=Index6
LeftMouseDoubleClickAction=[!CommandMeasure mIndex6Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index6Icon]
Meter=Image
ImageName="[QuoteText6]"
OnUpdateAction=[!SetVariable "vFilePathRead6" "#CURRENTPATH#\AddOn\Temp\[mThumbnailPath][mIndex6Name].png.txt"]
MeterStyle=IconStyle
Group=Index6
PreserveAspectRatio=1
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex6Name" "ContextMenu"]

[Index6Info]
Meter=String
MeasureName=mIndex6Name
MeterStyle=TextStyle | InfoStyle
Group=Index6

[Index7]
Meter=Image
MeterStyle=HighlightStyle
Group=Index7
LeftMouseDoubleClickAction=[!CommandMeasure mIndex7Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index7Icon]
Meter=Image
ImageName="[QuoteText7]"
OnUpdateAction=[!SetVariable "vFilePathRead7" "#CURRENTPATH#\AddOn\Temp\[mThumbnailPath][mIndex7Name].png.txt"]
MeterStyle=IconStyle
Group=Index7
PreserveAspectRatio=1
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex7Name" "ContextMenu"]

[Index7Info]
Meter=String
MeasureName=mIndex7Name
MeterStyle=TextStyle | InfoStyle
Group=Index7

[Index8]
Meter=Image
MeterStyle=HighlightStyle
Group=Index8
LeftMouseDoubleClickAction=[!CommandMeasure mIndex8Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]

[Index8Icon]
Meter=Image
ImageName="[QuoteText8]"
OnUpdateAction=[!SetVariable "vFilePathRead8" "#CURRENTPATH#\AddOn\Temp\[mThumbnailPath][mIndex8Name].png.txt"]
MeterStyle=IconStyle
Group=Index8
PreserveAspectRatio=1
RightMouseUpAction=[!DisableMouseAction Background "MouseLeaveAction"][!CommandMeasure "mIndex8Name" "ContextMenu"]

[Index8Info]
Meter=String
MeasureName=mIndex8Name
MeterStyle=TextStyle | InfoStyle
Group=Index8

[QuoteText1]
Measure=Plugin
Plugin=QuotePlugin
PathName="#vFilePathRead1#"
Subfolders=0
DynamicVariables=1

[QuoteText2]
Measure=Plugin
Plugin=QuotePlugin
PathName="#vFilePathRead2#"
Subfolders=0
DynamicVariables=1

[QuoteText3]
Measure=Plugin
Plugin=QuotePlugin
PathName="#vFilePathRead3#"
Subfolders=0
DynamicVariables=1

[QuoteText4]
Measure=Plugin
Plugin=QuotePlugin
PathName="#vFilePathRead4#"
Subfolders=0
DynamicVariables=1

[QuoteText5]
Measure=Plugin
Plugin=QuotePlugin
PathName="#vFilePathRead5#"
Subfolders=0
DynamicVariables=1

[QuoteText6]
Measure=Plugin
Plugin=QuotePlugin
PathName="#vFilePathRead6#"
Subfolders=0
DynamicVariables=1

[QuoteText7]
Measure=Plugin
Plugin=QuotePlugin
PathName="#vFilePathRead7#"
Subfolders=0
DynamicVariables=1

[QuoteText8]
Measure=Plugin
Plugin=QuotePlugin
PathName="#vFilePathRead8#"
Subfolders=0
DynamicVariables=1
