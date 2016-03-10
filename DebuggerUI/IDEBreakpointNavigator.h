//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEOutlineBasedNavigator.h"

#import "IDEBreakpointNavigatorModelObserver.h"
#import "IDEBreakpointObserver.h"
#import "NSMenuDelegate.h"
#import "NSOutlineViewDelegate.h"

@class DVTObservingToken, IDEBreakpointIcon, IDEBreakpointManager, IDEBreakpointNavigatorModel, NSArray, NSMenu, NSMutableSet, NSPasteboard, NSString;

@interface IDEBreakpointNavigator : IDEOutlineBasedNavigator <IDEBreakpointObserver, IDEBreakpointNavigatorModelObserver, NSOutlineViewDelegate, NSMenuDelegate>
{
    NSMutableSet *_collapsedItems;
    NSMutableSet *_collapsedItemsBeforeFiltering;
    IDEBreakpointNavigatorModel *_model;
    BOOL _restoringState;
    IDEBreakpointIcon *_breakpointIcon;
    DVTObservingToken *_selectedObjectsListToken;
    NSArray *_draggedItems;
    NSPasteboard *_draggedPasteboard;
    BOOL _enabledBreakpointsFilteringEnabled;
    IDEBreakpointManager *_breakpointManager;
    NSString *_filterString;
    NSMenu *_addBreakpointMenu;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
@property(retain) NSMenu *addBreakpointMenu; // @synthesize addBreakpointMenu=_addBreakpointMenu;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(nonatomic) BOOL enabledBreakpointsFilteringEnabled; // @synthesize enabledBreakpointsFilteringEnabled=_enabledBreakpointsFilteringEnabled;
@property(retain, nonatomic) IDEBreakpointManager *breakpointManager; // @synthesize breakpointManager=_breakpointManager;
- (void).cxx_destruct;
- (id)_collapsedItemsAsNameTree;
- (void)_setCollapsedItemsFromNameTree:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)_stateChanged;
- (void)deleteSelectedItems:(id)arg1;
- (void)createAndEditBreakpointOfClass:(Class)arg1;
- (void)_createBreakpoint:(id)arg1;
- (void)_showBreakpointEditorForNavigableItem:(id)arg1;
- (void)_selectBreakpointAndShowBreakpointEditor:(id)arg1;
- (BOOL)_navigableItemRepresentsEditableBreakpoint:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)shouldOpenNavigableItem:(id)arg1 eventType:(unsigned long long)arg2;
- (void)_addMenuItemToMenu:(id)arg1 forBucket:(id)arg2;
- (void)_addMoveMenuToMenu:(id)arg1 rightClickedItems:(id)arg2 plural:(BOOL)arg3;
- (void)_addDeleteMenuItemToMenu:(id)arg1 plural:(BOOL)arg2;
- (void)_editRightClickedBreakpoint:(id)arg1;
- (void)_addEditMenuItemToMenu:(id)arg1 itemToEdit:(id)arg2;
- (void)_shareOrUnshareBreakpoints:(id)arg1;
- (void)_addShareOrUnshareMenuItemToMenu:(id)arg1 rightClickedItems:(id)arg2 plural:(BOOL)arg3;
- (void)_enableOrDisableBreakpoints:(id)arg1;
- (void)_addEnableOrDisableMenuItemToMenu:(id)arg1 rightClickedItems:(id)arg2 plural:(BOOL)arg3;
- (BOOL)_canEditRightClickedItems:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (unsigned long long)_itemDepth:(id)arg1;
- (void)_setCollapsedItems:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)outlineView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)willForgetNavigableItems:(id)arg1;
- (void)_bindImageAndTitleOfTableViewCell:(id)arg1 toNavItemsRepresentedObject:(id)arg2;
- (id)_tableCellViewForFileBreakpointGroupNavItem:(id)arg1;
- (id)_tableCellViewForBreakpointGroupNavItem:(id)arg1;
- (void)_breakpointButtonClicked:(id)arg1;
- (id)_tableCellViewForBreakpointNavItem:(id)arg1;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (id)_nonWatchpointItems:(id)arg1;
- (void)_moveBreakpointsForNavigableItems:(id)arg1 toBucket:(id)arg2;
- (void)_moveRightClickedBreakpointsToBucket:(id)arg1;
- (void)breakpointWasRemoved:(id)arg1;
- (void)breakpointWasAdded:(id)arg1;
- (void)breakpointLocationsAdded:(id)arg1 removed:(id)arg2;
- (void)_clearDraggedItems;
- (void)_selectItemNearDeletedItemIndex:(long long)arg1 parentItem:(id)arg2;
- (long long)_smallestRowIndexOfNavigableItemInArray:(id)arg1;
- (void)_deleteBreakpointsForNavigableItems:(id)arg1;
- (void)_deleteDraggedItems;
- (void)_deleteRightClickedItems;
- (void)_deleteSelectedItems;
- (void)_repaintRowForBreakpoint:(id)arg1;
- (BOOL)_isItemExpandedIncludingParents:(id)arg1;
- (void)_expandNavigableItemForBreakpointIfItemAndAncestorsAreNotInCollapsedSet:(id)arg1;
- (void)_pushSelection;
- (void)_revealNavigableItems:(id)arg1;
- (id)_createEnablementFilterPredicate;
- (id)_createFilterStringPredicate;
- (void)_clearFilter;
- (void)_updateFilterPredicate;
- (id)_breakpointsForNavigableItems:(id)arg1;
- (id)_breakpointsForNavigableItem:(id)arg1;
- (void)setRootNavigableItem:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)filterButtonMenu;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterDefinitionIdentifier;
- (id)domainIdentifier;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

