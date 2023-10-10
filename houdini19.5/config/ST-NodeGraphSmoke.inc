
#include "NodeGraphCommon.inc"

#define GREY(g) g g g
#define BLACK                       GREY(0)
#define WHITE                       GREY(1)

#define RED                         1 0 0
#define GREEN                       0 1 0
#define BLUE                        0 0 1
#define CYAN                        0 1 1
#define YELLOW                      1 1 0
#define MAGENTA                     1 0 1

#define PINK                        1 0.8 0.8
#define MINT                        0.8 1 0.8
#define LTBLUE                      0.5 0.5 1
#define LTYELLOW                    1 1 0.5
#define ORANGE                      1 0.5 0
#define BROWN			    #8C 62 38

PaletteBackground:		GREY(0.15)
PaletteSelected:		YELLOW
ShapePaletteShape:		GREY(0.8)

BackgroundImageLocate:		WHITE
BackgroundImageBorder:		YELLOW
BackgroundImageBrightness:	YELLOW
BackgroundImageLink:		GREY(0.8)

GraphOverlayLeftText:		0.2 0.9 0.9
GraphOverlayCenterText:		0.7 0.7 0.7
GraphOverlayRightText:		WHITE

GraphBackground:		GREY(0.19)
GraphOverviewBackground:	GREY(0.10)
GraphOverviewViewRegion:	0.5 0.3 0.5
GraphOverviewBorder:		BLACK
GraphPromptText:		GREY(0.8)
GraphGridLines:			GREY(0.25)
GraphGridPoints:		GREY(0.4)

GraphNameText:			GREY(0.8)
GraphNodeTypeText:		GREY(0.4)
GraphCommentText:		#6DB4BD
GraphDescriptiveNameText:	#76A8E1
GraphContextOptionDepsText:	#6DB4BD
GraphLopLastModifiedPrimText:	#6DB4BD
GraphNetworkBoxText:		WHITE
GraphNetworkBoxTextDark:	BLACK
GraphNetworkBoxNameText:	#76A8E1
GraphIndirectText:		WHITE
GraphIndirectTextDark:		BLACK

GraphItemBorder:		BLACK
GraphMinimizeButton:		GREY(0.8)

GraphTemplateFlag:		#DD7DD7
GraphSelectableTemplateFlag:	#B151BB
GraphBypassFlag:		#E7CD2F
GraphRenderFlag:		#A779FF
GraphDisplayFlag:		#308DFF
GraphOutputFlag:		0.75 0.4 0.0
GraphSelectableFlag:		#ABEA21
GraphExportFlag:		#FFA600
GraphHiddenFlag:		#90BECD
GraphAudioFlag:			0.0 0.5 0.5
GraphThumbnailFlag:		0.35 0.6 0.2
GraphLockFlag:			#FF 33 00
GraphSoftLockFlag:		#C4 E3 61 
GraphDebugFlag:			#6CC6B2
GraphMaterialFlag:		0.75 0.4 0.0
GraphDisplayAndRenderFlag:	0.00 0.68 0.94
GraphDisplayAndOutputFlag:	0.75 0.45 0.36
GraphFilterFlag:		#55FFC1

GraphDisplayHighlight:		#44679A
GraphExportHighlight:		#734670
GraphRenderHighlight:		#9273CB
GraphOutputHighlight:		#6B5634
GraphTemplateHighlight:		#734670
GraphFilterHighlight:		#298966

GraphDopObjectData:		0.65	0.65	0.65
GraphDopData:			0.50	0.80	0.50
GraphDopRelData:		0.20	0.60	0.20
GraphDopSolverData:		0.7	0.5	0.9
GraphDopAnyData:		0.9	0.9	0.9
GraphSopHeightfield:		#25aa8e
GraphSopConstraints:		#D879D8

GraphConnector:			GREY(0.70)
GraphConnectorLabel:		GREY(0.70)
GraphConnectorError:		#CE5E5E
GraphCopMaskInput:		0.50 0.80 0.50
GraphWire:			#5F 91 CC
GraphWireError:			RED
GraphWireLoopBack:		0.3 0.3 1.0
GraphWireSelection:		YELLOW
GraphWireNodeSelection:		YELLOW
GraphWireLongFaded:		0.5 0.5 0.5
GraphWireLongerFaded:		0.5 0.5 0.5
GraphWireStub:			GREY(0.70)
GraphWireStubSelection:		YELLOW
GraphWireCut:			RED
GraphWireCutPath:		0.95 0.3 0.0 
GraphSpareWire:			#5F 31 CC

GraphDependency:		#9A6955
GraphDependencyEndAffector:	#668E4A
GraphDependencyExternalIn:	GREY(0.8)
GraphDependencyExternalOut:	GREY(0.8)

GraphPickFill:			0.9 0.9 0.9
GraphPreSelection:		0.75 0.86 1.0
GraphItemCurrent:		#FFD400
GraphItemCurrentNonSelected:	#C89C9C
GraphItemSelection:		#EEF81C
GraphItemSelectionContrast:	BLACK
GraphItemContentsSelection:	#6E780C
GraphSnapLine:			#5C704D

GraphFlyoutBackgroundFlagOn:	BLACK
GraphFlyoutBackgroundFlagOff:	BLACK
GraphFlyoutEdgeFlagOff:		GREY(0.3)
GraphFlyoutInfo:		GREY(0.1)
GraphFlyoutWarning:		0.2 0.2 0.0
GraphFlyoutError:		0.2 0.0 0.0

GraphDotPinAccent:		GREY(0.3)

GraphCopPreviewBackground:	GREY(0.1)
GraphCopBottomButtonEnabled:	GREY(0.1)

GraphVopConnectorGroupName:	WHITE
GraphVopConnectorBackground:	GREY(0.25)
GraphVopBottomButtonEnabled:	GREY(0.1)
GraphVopBottomButtonDisabled:	GREY(0.6)

GraphShopConnectorBackground:	GREY(0.1)

GraphSubnetShadow1:		GREY(0.12)
GraphSubnetShadowBlend1:	1
GraphSubnetShadow2:		GREY(0.17)
GraphSubnetShadowBlend2:	1

GraphErrorBadgeDot:		1.00 0.00 0.00
GraphWarningBadgeDot:		0.77 0.60 0.04
GraphCommentBadgeDot:		0.15 0.67 0.64
GraphNodeLockedBadgeDot:	1.00 0.35 0.43
GraphNodeUnloadBadgeDot:	0.60 0.65 0.73
GraphNodeHasDataBadgeDot:	0.45 0.75 0.45
GraphNeedsCookBadgeDot:		0.97 0.91 0.11
GraphHdaLockedBadgeDot:		0.43 0.47 0.48
GraphHdaUnlockedBadgeDot:	0.98 0.49 0.55
GraphTimeDependentBadgeDot:	0.72 0.91 0.53
GraphVexCachedBadgeDot:		#FF5AD2
GraphVexCachableBadgeDot:	#AA3E8C
GraphNotCompilableBadgeDot:	#E5B985
GraphConstraintsBadgeDot:	#97C473
GraphKinematicsBadgeDot:	#FF9370
GraphHasTakeDataBadgeDot:	#979797
GraphNodeUnloadBadgeDot:        #D19F9F
GraphNodeHasDataBadgeDot:       #9FABD1

GraphPdgProgressOutline:	WHITE
GraphPdgProgressPrecook:	#324D59
GraphPdgProgressCooking:	#B8E986
GraphPdgProgressCooked:		#4D623F
GraphPdgProgressWarning:	#EBF802
GraphPdgProgressError:		#FF3300
GraphPdgProgressIncomplete: #75876A

GraphPdgProgressErrorCircle: #D0021B
GraphPdgProgressErrorFill:  #730000
GraphPdgProgressNormalFill:  #232323

GraphPdgSummaryBackground:  GREY(0.18)
GraphPdgSummaryFilterOn:    #FFD42A
GraphPdgSummaryWorkItemCooked:		#73945D
GraphPdgSummaryWorkItemCooking:		#B8E986
GraphPdgSummaryWorkItemWaiting:		#879889
GraphPdgSummaryWorkItemUncooked:	GREY(0.5)
GraphPdgSummaryWorkItemFailed:		#EE5A6C
GraphPdgSummaryWorkItemCancelled:	#EBB502

GraphTaskGraphBackground:			GREY(0.1)
GraphTaskGraphBorder:				GREY(0.7)
GraphTaskGraphSeeMore:				GREY(0.9)
GraphTaskGraphWorkItemCooked:		#4D623F
GraphTaskGraphWorkItemCooking:		#B8E986
GraphTaskGraphWorkItemWaiting:		#879889
GraphTaskGraphWorkItemUncooked:		GREY(0.5)
GraphTaskGraphWorkItemFailed:		#FF3300
GraphTaskGraphWorkItemCancelled:	#EBB502
GraphTaskGraphWorkItemSelected:		#FFD42A
GraphTaskGraphWorkItemAncestor:		#99FF79
GraphTaskGraphWorkItemDescendant:	#2AFFCB
GraphTaskGraphNormalWire:			GREY(0.9)
GraphTaskGraphMappedWire:			#80FFA2
GraphTaskGraphIndirectWire:			#D9DD70

GraphTaskGraphWorkItemPerfFast:     #009166
GraphTaskGraphWorkItemPerfMed:      #f6ff00
GraphTaskGraphWorkItemPerfSlow:     #ff9000
