//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import "NSMenuDelegate.h"

@class DVTObservingToken, DVTScopeBarView, DVTScrollView, IDELogNavigatorRootItem, NSButton, NSDictionary, NSImage, NSMapTable, NSMutableArray, NSMutableSet, NSPredicate, NSSet, NSString;

@interface IDELogNavigator : IDEOutlineBasedNavigator <NSMenuDelegate>
{
    NSImage *_buildIconImage;
    NSMutableSet *_expandedItems;
    NSMutableArray *_stateChangeObservingTokens;
    BOOL _restoringState;
    BOOL _keepSelectionWhenRestoringState;
    BOOL _workspaceBotFilteringAllowed;
    BOOL _workspaceBotFilteringEnabled;
    DVTObservingToken *_outlineViewExpandingObserverToken;
    DVTObservingToken *_botWorkspaceFilterAllowedObservingToken;
    DVTObservingToken *_botWorkspaceFilterObservingToken;
    NSMapTable *_weakExecutionNavigablesToStrongObservingTokens;
    NSMapTable *_weakBotNavigablesToStrongObserverTokens;
    NSMapTable *_strongBotsOrIntegrationsToStatusObservers;
    BOOL _recentsOnlyFilteringEnabled;
    BOOL _groupByTime;
    NSPredicate *_groupingPredicate;
    DVTScopeBarView *_scopeBarView;
    NSString *_filterPatternString;
    IDELogNavigatorRootItem *_rootItem;
    NSDictionary *_stateSavingSelectedObjects;
    DVTObservingToken *_serverManagerObservingToken;
    NSMutableArray *_serverObservingTokens;
    NSMutableArray *_botsToDelete;
    NSMutableSet *_mutableCollapsedItemIdentifiers;
    NSMutableSet *_mutableExpandedItemIdentifiers;
    NSButton *_byGroupedButton;
    NSButton *_byTimeButton;
    DVTScrollView *_logNavigatorScrollView;
}

+ (id)imageForTypeIdentifier:(id)arg1;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingWorkspaceBotFilteringEnabled;
+ (void)initialize;
@property __weak DVTScrollView *logNavigatorScrollView; // @synthesize logNavigatorScrollView=_logNavigatorScrollView;
@property(nonatomic) BOOL groupByTime; // @synthesize groupByTime=_groupByTime;
@property(retain, nonatomic) NSButton *byTimeButton; // @synthesize byTimeButton=_byTimeButton;
@property(retain, nonatomic) NSButton *byGroupedButton; // @synthesize byGroupedButton=_byGroupedButton;
@property(readonly, copy) NSMutableSet *mutableExpandedItemIdentifiers; // @synthesize mutableExpandedItemIdentifiers=_mutableExpandedItemIdentifiers;
@property(readonly, copy) NSMutableSet *mutableCollapsedItemIdentifiers; // @synthesize mutableCollapsedItemIdentifiers=_mutableCollapsedItemIdentifiers;
@property(retain, nonatomic) NSMutableArray *botsToDelete; // @synthesize botsToDelete=_botsToDelete;
@property(retain, nonatomic) NSMutableArray *serverObservingTokens; // @synthesize serverObservingTokens=_serverObservingTokens;
@property(retain, nonatomic) DVTObservingToken *serverManagerObservingToken; // @synthesize serverManagerObservingToken=_serverManagerObservingToken;
@property(copy) NSDictionary *stateSavingSelectedObjects; // @synthesize stateSavingSelectedObjects=_stateSavingSelectedObjects;
@property(retain) IDELogNavigatorRootItem *rootItem; // @synthesize rootItem=_rootItem;
@property(nonatomic) BOOL recentsOnlyFilteringEnabled; // @synthesize recentsOnlyFilteringEnabled=_recentsOnlyFilteringEnabled;
@property(copy, nonatomic) NSString *filterPatternString; // @synthesize filterPatternString=_filterPatternString;
@property(retain) DVTScopeBarView *scopeBarView; // @synthesize scopeBarView=_scopeBarView;
@property(copy) NSPredicate *groupingPredicate; // @synthesize groupingPredicate=_groupingPredicate;
- (void).cxx_destruct;
- (void)revealNavigableItems:(id)arg1 loadEditor:(BOOL)arg2;
- (void)_teardownTableCellView:(id)arg1;
- (void)willForgetNavigableItems:(id)arg1;
- (void)outlineView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)_updateBorOrIntegrationsStatusViewStatus:(id)arg1 usingBotOrIntegrationNavigableItem:(id)arg2;
- (void)_updateStatusViewForBotOrIntegrationNavigableItem:(id)arg1;
- (id)_imageForLogRecord:(id)arg1;
- (id)_addStatusViewIfNecessary:(id)arg1 statusImageKeyPathOrNil:(id)arg2;
- (void)_configureStandardTableViewCell:(id)arg1 toNavItemsRepresentedObject:(id)arg2;
- (id)_tableCellViewForLoadMoreNavItem:(id)arg1;
- (id)_tableCellViewForLogRecordNavItem:(id)arg1;
- (id)_tableCellViewForLogHeaderNavItem:(id)arg1;
- (id)_tableCellViewForBotIntegrationNavItem:(id)arg1;
- (void)_updateVisibilityOfStatusView:(id)arg1 forBotNavItem:(id)arg2;
- (id)_tableCellViewForBotNavItem:(id)arg1;
- (id)_tableCellViewForBotServiceNavItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (void)_updateVisibilityOfStatusViewIfNecessary:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)_compositedImageForIntegrationStatus:(unsigned long long)arg1;
- (void)setOutputSelection:(id)arg1;
- (void)setSelectedObjects:(id)arg1;
@property(copy) NSString *visibleRectString;
- (void)_revealNavigableItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_configureStateSavingObservers;
- (id)filterDefinitionIdentifier;
- (void)_clearFilterPredicate;
@property(nonatomic) BOOL workspaceBotFilteringEnabled;
@property(nonatomic) BOOL workspaceBotFilteringAllowed;
- (void)updateFilterPredicate;
- (id)_localLogRecords;
- (id)_recentLogRecords;
- (BOOL)_isFiltered;
- (void)setFilteringEnabled:(BOOL)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)_synchronizeFilteringWithOutlineView;
- (id)filterButtonMenu;
- (void)menuCmd_viewIntegrationInBrowser:(id)arg1;
- (void)menuCmd_viewBotInBrowser:(id)arg1;
- (void)menuCmd_deleteIntegration:(id)arg1;
- (void)menuCmd_cancelIntegration:(id)arg1;
- (void)menuCmd_cleanAndIntegrate:(id)arg1;
- (void)menuCmd_integrate:(id)arg1;
- (void)_deleteAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)menuCmd_deleteBot:(id)arg1;
- (void)menuCmd_editBot:(id)arg1;
- (void)menuCmd_createBot:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)selectedRepresentedNavigableObjects;
- (void)menuWillOpen:(id)arg1;
- (BOOL)_canUserCreateAndDeleteBotsOnServiceForBotOrIntegration:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)setRootNavigableItem:(id)arg1;
- (id)findLogInItem:(id)arg1 equalTo:(id)arg2;
- (id)_recursiveFindNavigableItemForRepresentedObject:(id)arg1 fromNavigableItem:(id)arg2;
- (void)updateByGroupAction:(id)arg1;
- (void)updateByTimeAction:(id)arg1;
- (void)loadView;
- (void)_expandLogItems;
- (id)dvtExtraBindings;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (id)domainIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(readonly) Class superclass;

@end

