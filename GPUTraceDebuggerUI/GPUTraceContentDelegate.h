//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEDebugNavigableContentDelegate.h"

@class DVTGradientImageButton, DVTStackBacktrace, GPUDebuggingAdditionUIController, GPUNavigatorStatusCell, GPUSharedTabUIState, IDEDebugNavigator, IDENavigableItem, IDENavigatorDataCell, IDENavigatorOutlineView, NSMenuItem, NSSlider, NSString, NSView;

__attribute__((visibility("hidden")))
@interface GPUTraceContentDelegate : NSObject <IDEDebugNavigableContentDelegate, DVTInvalidation>
{
    IDEDebugNavigator *_debugNavigator;
    int _navigatorMode;
    int _navigatorProgramSortMode;
    GPUDebuggingAdditionUIController *_debuggingAdditionUIController;
    GPUSharedTabUIState *_sharedUIStateObj;
    IDENavigatorOutlineView *_outlineView;
    IDENavigatorDataCell *_subtitleCell;
    GPUNavigatorStatusCell *_subtitleStatusCell;
    NSMenuItem *_traceItemMenuItem;
    unsigned long long _compressionValue;
    unsigned long long _maxCompressionValue;
    BOOL _ignoreStateForDebugNavigator;
    BOOL _haveRequestedUIController;
    id <DVTCancellable> _uiControllerObserver;
    id <DVTCancellable> _buttonBindingToken;
    BOOL _showOnlyInterestingContent;
    NSView *_localFilterView;
    DVTGradientImageButton *_showOnlyInterestingContentButton;
    DVTGradientImageButton *_autoCompressMaxButton;
    NSSlider *_autoCompressSlider;
    DVTGradientImageButton *_autoCompressMinButton;
}

+ (void)initialize;
@property(nonatomic) BOOL showOnlyInterestingContent; // @synthesize showOnlyInterestingContent=_showOnlyInterestingContent;
@property(readonly) IDEDebugNavigator *debugNavigator; // @synthesize debugNavigator=_debugNavigator;
@property __weak DVTGradientImageButton *autoCompressMinButton; // @synthesize autoCompressMinButton=_autoCompressMinButton;
@property __weak NSSlider *autoCompressSlider; // @synthesize autoCompressSlider=_autoCompressSlider;
@property __weak DVTGradientImageButton *autoCompressMaxButton; // @synthesize autoCompressMaxButton=_autoCompressMaxButton;
@property __weak DVTGradientImageButton *showOnlyInterestingContentButton; // @synthesize showOnlyInterestingContentButton=_showOnlyInterestingContentButton;
@property(retain) NSView *localFilterView; // @synthesize localFilterView=_localFilterView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setStoredCompressionValue:(id)arg1;
- (id)storedCompressionValue;
- (void)setProgramSortMode:(id)arg1;
- (id)storedProgramSortMode;
- (void)setDisplayableCallOrProgramMode:(id)arg1;
- (id)storedDisplayableCallOrProgramMode;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_updateForNewCompressionValue;
- (void)_updateForNewProgramSortMode:(int)arg1;
- (void)_recordPersistenceStateChangesIfNecessary;
- (void)_updateForNewNavigatorContentMode;
- (void)_updateForNewNavigatorMode:(id)arg1;
- (void)configureMenuForProcessHeaderActionPopUpCell:(id)arg1;
- (void)_threadContextuallyClicked;
- (void)contextualMenuNeedsUpdate:(id)arg1;
- (void)_showAllIssues:(id)arg1;
- (void)_showCrucialOrImportantIssuesImportantIssues:(id)arg1;
- (void)_showCrucialIssues:(id)arg1;
- (void)_setProgramSortByCost:(id)arg1;
- (void)_setProgramSortByProgram:(id)arg1;
- (void)_setProgramMetricsAsPercentage:(id)arg1;
- (void)_setProgramMetricsAsTime:(id)arg1;
- (void)_setShowShaderProfilingInFrameNavigator:(id)arg1;
- (void)_setHideShaderProfilingInFrameNavigator:(id)arg1;
- (void)_setShowGroupMarkerCalls:(id)arg1;
- (void)_setHideGroupMarkerCalls:(id)arg1;
- (void)_setShowEmptyMarkerGroups:(id)arg1;
- (void)_setHideEmptyMarkerGroups:(id)arg1;
- (void)_setTextModeCompact:(id)arg1;
- (void)_setTextModeVerbose:(id)arg1;
- (void)_refreshNavigator;
- (BOOL)shouldExpandItemAsResultOfOptionClick:(id)arg1 clickedItem:(id)arg2;
- (BOOL)validateUserInterfaceAction:(SEL)arg1 forRepresentedObject:(id)arg2;
- (BOOL)validateUserInterfaceAction:(SEL)arg1;
- (id)representedObjectsToReveal;
- (id)pasteboardStringForRepresentedObject:(id)arg1;
- (void)_appendDisplayStringForCopiedOrDraggedGroupItem:(id)arg1 toString:(id)arg2 level:(unsigned int)arg3;
- (BOOL)shouldHandleUserDirectMoveUpOrDown:(BOOL)arg1 forRepresentedObject:(id)arg2 newRow:(long long *)arg3;
- (void)_updateForNewShowOnlyInterestingContent;
- (void)didCollapseForItem:(id)arg1;
- (void)didExpandForItem:(id)arg1;
- (void)willExpandForItem:(id)arg1;
- (id)expandableItemsForProcessItem:(id)arg1;
- (id)tokenForExpandedRepresentedObject:(id)arg1;
- (id)launchSessionForSelectedRepresentedObject:(id)arg1;
- (void)openSelectedRepresentedObject:(id)arg1 withEventType:(unsigned long long)arg2;
- (BOOL)shouldSelectItemForRepresentedObject:(id)arg1 withPrevious:(id)arg2 next:(id)arg3;
- (double)heightOfRowForRepresentedObject:(id)arg1;
- (id)filterView;
- (void)registerTableCellViewsWithOutlineView:(id)arg1;
- (id)tableCellViewForRepresentedObject:(id)arg1 withOutlineView:(id)arg2;
- (id)compressedTableCellViewWithOutlineView:(id)arg1;
- (id)relatedDisplayablesTableCellViewWithOutlineView:(id)arg1;
- (id)commandEncoderHeaderTableCellViewWithOutlineView:(id)arg1;
- (id)commandBufferHeaderTableCellViewWithOutlineView:(id)arg1;
- (id)contextHeaderTableCellViewWithOutlineView:(id)arg1;
- (id)standardOneLineTableCellViewForIdentifier:(id)arg1 withOutlineView:(id)arg2;
- (id)displayableProgramOrShaderTableCellViewWithOutlineView:(id)arg1;
- (id)displayableItemTableCellViewWithOutlineView:(id)arg1;
- (void)addSubtitleStatusViewToTableCellView:(id)arg1;
- (void)addSeverityStatusViewToTableCellView:(id)arg1;
- (id)markerGroupTableCellViewWithOutlineView:(id)arg1;
- (void)willDisplayCell:(id)arg1 forRepresentedObject:(id)arg2 item:(id)arg3;
- (void)updateForNewFilterString:(id)arg1;
- (void)_navigatorFirstShownWithNoSelectedItems:(id)arg1;
- (void)debugNavigatorViewWillUninstall;
- (void)_handleDebuggingAdditionUIControllerCreated:(id)arg1;
- (void)debugNavigatorViewDidInstall;
@property(readonly) NSString *associatedProcessUUID;
- (id)processNavigableItem;
- (void)autoCompressStackFrames:(id)arg1;
- (id)workspaceTabController;
@property(readonly) IDENavigableItem *rootNavigableItem;
- (id)initWithTopNavigableModel:(id)arg1 debugNavigator:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

