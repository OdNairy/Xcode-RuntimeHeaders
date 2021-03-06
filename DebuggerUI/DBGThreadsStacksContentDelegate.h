//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEDebugNavigableContentDelegate.h"

@class DBGDebugSession, DBGGaugeCPUTrayCell, DBGGaugeMemoryTrayCell, DBGProcessNavigableItem, DBGViewDebuggerAdditionUIController, DVTObservingToken, DVTStackBacktrace, IDEDebugNavigator, IDEGaugeDocumentLocation, IDENavigableItem, IDENavigatorFilterControlBar, IDENavigatorOutlineView, IDEStackFrame, IDEThread, IDEWorkspaceTabController, NSArray, NSMenuItem, NSMutableSet, NSSet, NSString, NSView, XRMemoryGraphDebuggerAdditionUIController;

@interface DBGThreadsStacksContentDelegate : NSObject <IDEDebugNavigableContentDelegate, DVTInvalidation>
{
    NSString *_associatedProcessUUID;
    IDENavigatorOutlineView *_outlineView;
    DBGViewDebuggerAdditionUIController *_viewDebuggingUIController;
    XRMemoryGraphDebuggerAdditionUIController *_memoryGraphDebuggingUIController;
    IDEGaugeDocumentLocation *_cpuGaugeDocLocation;
    IDEGaugeDocumentLocation *_memoryGaugeDocLocation;
    DBGGaugeCPUTrayCell *_cpuTrayCell;
    DBGGaugeMemoryTrayCell *_memTrayCell;
    NSArray *_trayCells;
    int _navigatorContentMode;
    NSMenuItem *_threadMenuItem;
    IDEThread *_currentThreadForFutureSelection;
    IDEStackFrame *_currentStackFrameForFutureSelection;
    unsigned long long _compressionValue;
    BOOL _isInShouldInvalidateProcessItem;
    BOOL _ignoreStateForDebugNavigator;
    NSMutableSet *_expandedItemsForFilterString;
    NSSet *_expandedItemTokensBeforeFiltering;
    BOOL _hasFilterString;
    BOOL _updatingForFilterString;
    NSView *_filterViewContainer;
    IDENavigatorFilterControlBar *_CPUDebugFilterControl;
    IDENavigatorFilterControlBar *_viewDebugFilterControl;
    IDENavigatorFilterControlBar *_memoryGraphDebugFilterControl;
    DVTObservingToken *_coalescedStateObservingToken;
    DVTObservingToken *_threadsObservingToken;
    DVTObservingToken *_childItemsObservingToken;
    DVTObservingToken *_autoRefreshStackFramesObservingToken;
    DVTObservingToken *_processControlStateObservingToken;
    DVTObservingToken *_currentStackFrameObservingToken;
    DVTObservingToken *_processNavigableItemObservingToken;
    DVTObservingToken *_memoryDatasForProcessToken;
    DVTObservingToken *_cpuObservingToken;
    DVTObservingToken *_memoryObservingToken;
    DVTObservingToken *_profilingSupportedObservingToken;
    DVTObservingToken *_userHasRequestedViewDebuggingObservingToken;
    id <DVTCancellable> _viewDebuggerAdditionUIControllerObservingToken;
    DVTObservingToken *_userHasRequestedMemoryGraphDebuggingObservingToken;
    id <DVTCancellable> _memoryGraphDebuggingAdditionUIControllerObservingToken;
    DVTObservingToken *_gaugesVisibilityObservingToken;
    BOOL _showsCompressedStackFrames;
    BOOL _showsOnlyInterestingContent;
    BOOL _showsOnlyRunningBlocks;
    DBGDebugSession *_debugSession;
    IDEDebugNavigator *_debugNavigator;
}

+ (id)keyPathsForValuesAffectingProcessNavigableItem;
+ (void)initialize;
@property(nonatomic) BOOL showsOnlyRunningBlocks; // @synthesize showsOnlyRunningBlocks=_showsOnlyRunningBlocks;
@property(nonatomic) BOOL showsOnlyInterestingContent; // @synthesize showsOnlyInterestingContent=_showsOnlyInterestingContent;
@property(nonatomic) BOOL showsCompressedStackFrames; // @synthesize showsCompressedStackFrames=_showsCompressedStackFrames;
@property(retain) IDEDebugNavigator *debugNavigator; // @synthesize debugNavigator=_debugNavigator;
@property(retain) DBGDebugSession *debugSession; // @synthesize debugSession=_debugSession;
@property(readonly) NSString *associatedProcessUUID; // @synthesize associatedProcessUUID=_associatedProcessUUID;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setStoredNavigatorContentMode:(id)arg1;
- (id)storedNavigatorContentMode;
- (void)setStoredCompressionValue:(id)arg1;
- (id)storedCompressionValue;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)debugNavigator:(id)arg1 updateProcessActionPopUpButton:(id)arg2;
- (void)_updateForNewCompressionValue;
- (void)_suspendContexMenuSelectedItems;
- (void)_resumeContexMenuSelectedItems;
- (void)contextualMenuNeedsUpdate:(id)arg1;
- (BOOL)validateUserInterfaceAction:(SEL)arg1 forRepresentedObject:(id)arg2;
- (BOOL)validateUserInterfaceAction:(SEL)arg1;
- (id)representedObjectsToReveal;
- (id)pasteboardStringForRepresentedObject:(id)arg1;
- (void)handleUserDirectDeleteRepresentedObject:(id)arg1;
- (BOOL)shouldHandleUserDirectMoveUpOrDown:(BOOL)arg1 forRepresentedObject:(id)arg2 newRow:(long long *)arg3;
- (void)_appendDisplayStringForCopiedOrDraggedStackFrame:(id)arg1 toString:(id)arg2;
- (void)_updateForNewShowsOnlyRunningBlocks;
- (void)_updateForNewShowsOnlyInterestingContent;
- (void)_recordPersistenceStateChangesIfNecessary;
- (void)_updateForNewNavigatorContentMode;
- (void)_navigatorContentModeMenuItemSelected:(id)arg1;
- (id)_currentTabController;
- (void)_shouldInvalidateNowForProcessItem:(id)arg1 analyzingThreads:(id)arg2;
- (void)_expandForFilterStringIfNecessary:(id)arg1;
- (BOOL)_needToAnalyzeFramesInThreads;
- (id)_allExpandableNavigableItemsForItem:(id)arg1;
- (id)expandableItemsForProcessItem:(id)arg1;
- (id)persistentNameForRepresentedObject:(id)arg1;
- (id)tokenForExpandedRepresentedObject:(id)arg1;
- (void)didCollapseForItem:(id)arg1;
- (void)didExpandForItem:(id)arg1;
- (void)willExpandForItem:(id)arg1;
- (id)launchSessionForSelectedRepresentedObject:(id)arg1;
- (id)outputSelectionNavItemForSelectedNavItem:(id)arg1;
- (void)openSelectedRepresentedObject:(id)arg1 withEventType:(unsigned long long)arg2;
- (BOOL)shouldShowOutlineCellForRepresentedObject:(id)arg1;
- (BOOL)shouldSelectItemForRepresentedObject:(id)arg1 withPrevious:(id)arg2 next:(id)arg3;
- (double)heightOfRowForRepresentedObject:(id)arg1;
- (id)trayCellsForProcessHeader;
- (void)_updateLaunchSessionWithSupportedGauges;
- (void)configureMenuForProcessHeaderActionPopUpCell:(id)arg1;
- (id)controllerForQueryingDescendantItem;
- (id)_createMemoryGraphInstanceItemPredicate:(id)arg1;
- (id)_createGaugeLocationItemPredicate;
- (id)_createProcessItemPredicate;
- (id)_createFilterStringPredicate:(id)arg1;
- (void)_updateFilterPredicate;
- (void)updateForNewFilterString:(id)arg1;
- (id)filterView;
- (void)registerTableCellViewsWithOutlineView:(id)arg1;
- (id)_createFocusedTableRowViewRoot:(id)arg1 withOutlineView:(id)arg2;
- (id)_createStackFrameTableRowViewForStackFrame:(id)arg1 withOutlineView:(id)arg2;
- (id)tableRowViewForRepresentedObject:(id)arg1 withOutlineView:(id)arg2;
- (id)tableCellViewForRepresentedObject:(id)arg1 withOutlineView:(id)arg2;
- (id)tableCellViewForTopLevelItem:(id)arg1 withOutlineView:(id)arg2;
- (void)_nextCrashLog:(id)arg1;
- (void)_previousCrashLog:(id)arg1;
- (id)_createCrashLogNavigationButton;
- (id)_createCrashPointTableCellViewForCrashPoint:(id)arg1 withOutlineView:(id)arg2;
- (void)_unfocusHierarchy:(id)arg1;
- (id)_createUnfocusButtonForRoot:(id)arg1;
- (id)_createFocusedTableCellViewForRoot:(id)arg1 withOutlineView:(id)arg2;
- (id)_createCompressedTableCellViewWithOutlineView:(id)arg1;
- (id)_createStackFrameTableCellViewForStackFrame:(id)arg1 withOutlineView:(id)arg2;
- (id)_nonSymbolTextColor;
- (id)_createMemoryDataCellViewForMemoryData:(id)arg1 withOutlineView:(id)arg2;
- (id)_createMemoryDataGroupHeaderTableCellViewForMemoryDataProcessWrapper:(id)arg1 withOutlineView:(id)arg2;
- (id)_createThreadHeaderTableCellViewForThread:(id)arg1 withOutlineView:(id)arg2;
- (id)_createQueueHeaderTableCellViewWithOutlineView:(id)arg1;
- (void)willDisplayCell:(id)arg1 forRepresentedObject:(id)arg2 item:(id)arg3;
- (void)_expandItemsToDefaultStateStartingAt:(id)arg1;
- (long long)_depthOfItem:(id)arg1 limitedTo:(long long)arg2;
- (void)_handleProcessChildItemsChanged;
- (void)debugNavigatorViewWillUninstall;
- (void)_unbindMemoryGraphToggles;
- (void)_unbindViewDebuggerToggles;
- (void)_cancelObservingTokensAddedDuringInstall;
- (void)_setCurrentFrameIndicatorForStackFrame:(id)arg1 visible:(BOOL)arg2;
- (void)debugNavigatorViewDidInstall;
- (void)_memoryDatasForProcessDidChange:(id)arg1;
- (BOOL)_supportsMemoryGraphDebugging;
- (id)_memoryGraphDebuggerAddition;
- (BOOL)_isMemoryGraphDebugging;
- (BOOL)_supportsViewDebugging;
- (id)_viewDebuggerAddition;
- (BOOL)_isViewDebugging;
- (BOOL)_isCPUDebugging;
- (void)_handleCurrentStackFrameChange:(id)arg1;
- (BOOL)_handleSettingCurrentStackFrame;
- (void)_handleThreadsAutoRefreshStackFramesDone;
- (BOOL)_handleSettingCurrentStackFrame:(id)arg1 thread:(id)arg2;
- (void)_expandMemoryDatumForThreadItem:(id)arg1;
- (void)_ensureItemAndAllChildrenExpandedAndRestoreSelection:(id)arg1 scrollToSelection:(BOOL)arg2;
@property(readonly) IDEWorkspaceTabController *workspaceTabController;
@property(readonly) DBGProcessNavigableItem *processNavigableItem;
- (id)_allThreadItemsForParentItem:(id)arg1;
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

