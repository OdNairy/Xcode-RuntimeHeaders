//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "DVTReplacementViewDelegate.h"
#import "IDEFilterControlBarTarget.h"
#import "IDENavigableItemCoordinatorDelegate.h"

@class DVTNotificationToken, IDENavigableItem, IDENavigableItemAsyncFilteringCoordinator, NSMenu, NSMutableDictionary, NSPredicate, NSString, NSView;

@interface IDENavigator : IDEViewController <IDENavigableItemCoordinatorDelegate, IDEFilterControlBarTarget, DVTReplacementViewDelegate>
{
    BOOL _usesManualNavigableItemCoordinatorManagement;
    DVTNotificationToken *_willForgetNavigableItemsNotificationToken;
    BOOL _filteringEnabled;
    BOOL _wantsCachedNavigableItemCoordinator;
    BOOL _wantsUniquingNavigableItemCoordinator;
    IDENavigableItem *_rootNavigableItem;
    IDENavigableItemAsyncFilteringCoordinator *_navigableItemCoordinator;
    NSPredicate *_filterPredicate;
    NSMutableDictionary *_cachedStateForParentViewController;
    NSView *__primaryFilterControl;
}

+ (id)keyPathsForValuesAffectingFilterProgress;
+ (BOOL)automaticallyNotifiesObserversOfRootNavigableItem;
+ (void)initialize;
@property(retain) NSView *_primaryFilterControl; // @synthesize _primaryFilterControl=__primaryFilterControl;
@property BOOL wantsUniquingNavigableItemCoordinator; // @synthesize wantsUniquingNavigableItemCoordinator=_wantsUniquingNavigableItemCoordinator;
@property BOOL wantsCachedNavigableItemCoordinator; // @synthesize wantsCachedNavigableItemCoordinator=_wantsCachedNavigableItemCoordinator;
@property __weak NSMutableDictionary *cachedStateForParentViewController; // @synthesize cachedStateForParentViewController=_cachedStateForParentViewController;
@property(nonatomic, getter=isFilteringEnabled) BOOL filteringEnabled; // @synthesize filteringEnabled=_filteringEnabled;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, nonatomic) IDENavigableItemAsyncFilteringCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
@property(retain, nonatomic) IDENavigableItem *rootNavigableItem; // @synthesize rootNavigableItem=_rootNavigableItem;
- (void).cxx_destruct;
- (void)willForgetNavigableItems:(id)arg1;
- (void)_navigableItemCoordinatorWillForgetNavigableItems:(id)arg1;
- (void)focusedEditorDidSelectItem:(id)arg1;
- (id)navigableItemsForArchivedNavigableItems:(id)arg1;
- (void)revealArchivedNavigableItems:(id)arg1;
- (void)_revealNavigableItems:(id)arg1;
@property(readonly) long long filterProgress;
@property(readonly) NSString *filterDefinitionIdentifier;
- (BOOL)canBecomeMainViewController;
- (void)primitiveInvalidate;
- (BOOL)makePrimaryFilterControlKey;
@property(readonly) NSString *filterButtonAccessibilityDescription;
@property(readonly) NSString *filterButtonToolTip;
@property(readonly) NSMenu *filterButtonMenu;
@property(readonly) NSString *domainIdentifier;
- (void)_removeNavigableItemCoordinator;
- (void)_setNewNavigableItemCoordinator;
- (void)_setRequiresManualNavigableItemCoordinatorManagement;
- (void)_setNavigableItemCoordinator:(id)arg1;
- (void)setOutputSelection:(id)arg1;
- (void)updateBoundSelection;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)_createNavigableItemCoordinator;
- (void)loadView;
- (void)updateBoundContent;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

