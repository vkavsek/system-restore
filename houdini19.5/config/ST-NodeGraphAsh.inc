
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
GraphOverlayCenterText:		WHITE
GraphOverlayRightText:		WHITE

GraphBackground:		GREY(0.62)
GraphOverviewBackground:	GREY (0.5)
GraphOverviewViewRegion:	0.5 0.3 0.5
GraphOverviewBorder:		BLACK
GraphPromptText:		GREY(0.8)
GraphGridLines:			GREY(0.45)
GraphGridPoints:		GREY(0.45)

GraphNameText:			GREY(0.1)
GraphNodeTypeText:		GREY(0.4)
GraphCommentText:		#008899
GraphDescriptiveNameText:	#00428D
GraphContextOptionDepsText:	#1E626B
GraphLopLastModifiedPrimText:	#1E626B
GraphNetworkBoxText:		WHITE
GraphNetworkBoxTextDark:	BLACK
GraphNetworkBoxNameText:	#275E9C
GraphIndirectText:		WHITE
GraphIndirectTextDark:		BLACK

GraphItemBorder:		BLACK
GraphMinimizeButton:		GREY(0.2)

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

GraphDopObjectData:		0.35	0.35	0.35
GraphDopData:			0.10 	0.55	0.10
GraphDopRelData:		0.10	0.33	0.10
GraphDopSolverData:		0.45	0.21	0.7
GraphDopAnyData:		0.9	0.9	0.9
GraphSopHeightfield:		0     0.5     0.4
GraphSopConstraints:		0.75	0.37	0.01

GraphConnector:			GREY(0.85)
GraphConnectorLabel:		GREY(0.70)
GraphConnectorError:		#A61717
GraphCopMaskInput:		#1D5C1D
GraphWire:			#19489A
GraphWireError:			RED
GraphWireLoopBack:		0.3 0.3 1.0
GraphWireSelection:		YELLOW
GraphWireNodeSelection:		0 0.9 0
GraphWireLongFaded:		GREY(0.1)
GraphWireLongerFaded:	GREY(0.3)
GraphWireStub:			GREY(0.3)
GraphWireStubSelection:		YELLOW
GraphWireCut:			RED
GraphWireCutPath:		0.95 0.3 0.0 
GraphSpareWire:			#5F 31 CC

GraphDependency:		#BB2F54
GraphDependencyEndAffector:	#4C7C2B
GraphDependencyExternalIn:	GREY(0.2)
GraphDependencyExternalOut:	GREY(0.2)

GraphPickFill:			0.9 0.9 0.9
GraphPreSelection:		0.75 0.86 1.0
GraphItemCurrent:		#FFD400
GraphItemCurrentNonSelected:	#AF5D5D
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

GraphVopConnectorGroupName:	GREY(0.1)
GraphVopConnectorBackground:	GREY(0.87)
GraphVopBottomButtonEnabled:	GREY(0.1)
GraphVopBottomButtonDisabled:	GREY(0.4)

GraphShopConnectorBackground:	GREY(0.87)

GraphSubnetShadow1:		GREY(0.43)
GraphSubnetShadowBlend1:	1
GraphSubnetShadow2:		GREY(0.55)
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
GraphPdgProgressCooked:		#4D8C2f
GraphPdgProgressWarning:	#EBF802
GraphPdgProgressError:		WHITE
GraphPdgProgressIncomplete: #5D8642

GraphPdgProgressErrorCircle: #D0021B
GraphPdgProgressErrorFill:  #730000
GraphPdgProgressNormalFill:  #232323

GraphPdgSummaryBackground:  GREY(0.1)
GraphPdgSummaryFilterOn:    #FFD42A
GraphPdgSummaryWorkItemCooked:		GREY(0.9)
GraphPdgSummaryWorkItemCooking:		GREY(0.45)
GraphTaskGraphWorkItemWaiting:		GREY(0.45)
GraphPdgSummaryWorkItemUncooked:	GREY(0.45)
GraphPdgSummaryWorkItemFailed:		#FF0000
GraphPdgSummaryWorkItemCancelled:	#EBB502

GraphTaskGraphBackground:			GREY(0.1)
GraphTaskGraphBorder:				GREY(0.7)
GraphTaskGraphSeeMore:				GREY(0.9)
GraphTaskGraphWorkItemCooked:		GREY(0.9)
GraphTaskGraphWorkItemCooking:		GREY(0.45)
GraphTaskGraphWorkItemWaiting:		GREY(0.45)
GraphTaskGraphWorkItemUncooked:		GREY(0.45)
GraphTaskGraphWorkItemFailed:		#FF0000
GraphTaskGraphWorkItemCancelled:	#EBB502
GraphTaskGraphWorkItemSelected:		#FFD42A
GraphTaskGraphWorkItemAncestor:		#99FF79
GraphTaskGraphWorkItemDescendant:	#2AFFCB
GraphTaskGraphNormalWire:			GREY(0.9)
GraphTaskGraphMappedWire:			#80FFA2
GraphTaskGraphIndirectWire:			#D9DD70

GraphTaskGraphWorkItemPerfFast:     #316D09
GraphTaskGraphWorkItemPerfMed:      #E89904
GraphTaskGraphWorkItemPerfSlow:     #FF0909
