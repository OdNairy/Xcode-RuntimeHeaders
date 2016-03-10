//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import "DVTOutlineViewDelegate.h"
#import "DVTTableRowViewMouseInsideDelegate.h"
#import "IDERefactoringExpressionSource.h"
#import "IDETestingSelection.h"
#import "NSMenuDelegate.h"
#import "NSOutlineViewDelegate.h"

@class IDENavigatorOutlineView, IDESelection, IDEWorkspaceTabController, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDETestNavigator : IDEOutlineBasedNavigator <DVTTableRowViewMouseInsideDelegate, NSOutlineViewDelegate, NSMenuDelegate, IDETestingSelection, IDERefactoringExpressionSource, DVTOutlineViewDelegate>
{
    NSDictionary *_previouslyRestoredStateDictionary;
    BOOL _restoringState;
    NSMutableSet *_expandedItems;
    NSDictionary *_expandedItemNamesBeforeFiltering;
    NSMutableSet *_collapsedItems;
    NSDictionary *_collapsedItemNamesBeforeFiltering;
    NSMutableArray *_stateChangeObservingTokens;
    NSString *_testNamePatternString;
    BOOL _mouseIsWithinStatusRect;
    long long _rowForWhichRunWasPressed;
    BOOL _showFailingTestsOnly;
    BOOL _showSchemeTestablesOnly;
    BOOL _isRunningTests;
    long long _loadingProgress;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
@property BOOL isRunningTests; // @synthesize isRunningTests=_isRunningTests;
@property(retain, nonatomic) NSString *testNamePatternString; // @synthesize testNamePatternString=_testNamePatternString;
@property(nonatomic) BOOL showSchemeTestablesOnly; // @synthesize showSchemeTestablesOnly=_showSchemeTestablesOnly;
@property(nonatomic) BOOL showFailingTestsOnly; // @synthesize showFailingTestsOnly=_showFailingTestsOnly;
@property(readonly) long long loadingProgress; // @synthesize loadingProgress=_loadingProgress;
- (void).cxx_destruct;
- (void)tableRowView:(id)arg1 mouseInside:(BOOL)arg2;
- (void)_handleRunTestButtonPressed:(id)arg1;
- (void)_updateStatusViewForTableCellView:(id)arg1;
- (void)_configureStandardTableViewCell:(id)arg1 toNavItemsRepresentedObject:(id)arg2;
- (id)_tableCellViewForTestNavItem:(id)arg1;
- (id)_tableCellViewForTestableNavItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)_summaryOfTestable:(id)arg1;
- (int)_countOfTestsFor:(id)arg1 excluded:(int *)arg2 failed:(int *)arg3 inSchemeAction:(id)arg4;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (void)_updateFilterButtonMenu:(id)arg1;
- (id)selectedTestable;
- (void)menuNeedsUpdate:(id)arg1;
- (id)_contextForTestingHelper;
- (id)selectedTestsAndTestables;
- (id)testingExpressionUsingContextMenu:(BOOL)arg1;
- (id)refactoringExpressionUsingContextMenu:(BOOL)arg1;
- (void)_updateFilterPredicate;
- (void)_updateTableCellViewsUIState:(id)arg1;
- (void)_updateTableCellViewsUIStateForNavItem:(id)arg1;
- (void)_updateSchemeFilter;
- (void)setFilterPredicate:(id)arg1;
- (id)filterDefinitionIdentifier;
- (void)focusedEditorDidSelectItem:(id)arg1;
- (void)revealTestsAndTestables:(id)arg1;
- (void)setVisibleRectString:(id)arg1;
- (id)visibleRectString;
- (id)_selectedItemsAsNameTree;
- (void)_setSelectedItemsFromNameTree:(id)arg1;
- (void)_setExpandedItems:(id)arg1;
- (void)_setCollapsedItems:(id)arg1;
- (void)_expandAllEnabledTestables;
- (unsigned long long)_itemDepth:(id)arg1;
- (id)_itemsBeforeFilteringAsNameTreeIn:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (BOOL)_restoreExpandedAndCollapsedItemsIfStateExists;
- (BOOL)isLoadingComplete;
- (void)configureStateSavingObservers;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)_itemHasSubTests:(id)arg1;
- (id)_localizedString:(id)arg1;
- (void)_updateEnablednessForTableCellView:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)_updateEmptyContentPlaceholders;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)domainIdentifier;

// Remaining properties
@property(copy) NSSet *collapsedItems; // @dynamic collapsedItems;
@property(readonly, copy) IDESelection *contextMenuSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableCollapsedItems; // @dynamic mutableCollapsedItems;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(retain) IDENavigatorOutlineView *outlineView; // @dynamic outlineView;
@property(readonly, copy) IDESelection *outputSelection;
@property(readonly) Class superclass;
@property(readonly, nonatomic) IDEWorkspaceTabController *workspaceTabController;

@end

