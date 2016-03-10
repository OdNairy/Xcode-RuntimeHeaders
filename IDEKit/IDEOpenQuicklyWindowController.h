//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "IDEOpenQuicklyQueryDelegate.h"
#import "NSTableViewDelegate.h"
#import "NSWindowDelegate.h"

@class DVTSearchField, IDEOpenQuicklyQuery, IDEOpenQuicklyTableView, IDEWorkspaceTabController, NSArray, NSArrayController, NSImageView, NSMutableArray, NSString;

@interface IDEOpenQuicklyWindowController : NSWindowController <IDEOpenQuicklyQueryDelegate, NSTableViewDelegate, NSWindowDelegate>
{
    DVTSearchField *_searchField;
    NSArrayController *_arrayController;
    IDEOpenQuicklyTableView *_tableView;
    NSImageView *_separatorView;
    NSMutableArray *_bindingTokens;
    IDEWorkspaceTabController *_workspaceTabController;
    IDEOpenQuicklyQuery *_query;
    NSArray *_oldSelection;
    id <DVTCancellable> _appActionsMonitor;
    id _eventMonitor;
    id _notificationTokenWillResignActive;
    id _notificationTokenWillHide;
    id _notificationTokenActiveSpaceChanged;
    BOOL _scoped;
    BOOL _windowClosed;
    BOOL _waitingForBetterResults;
    BOOL _disableSelectionSave;
}

+ (id)openQuicklyWindowController;
+ (void)initialize;
@property BOOL windowClosed; // @synthesize windowClosed=_windowClosed;
@property(retain) IDEOpenQuicklyQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)tableDoubleClickAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)okAction:(id)arg1;
- (void)searchAction:(id)arg1;
- (void)_openSelectedMatch;
- (void)windowDidResignKey:(id)arg1;
- (void)_applicationWillDispatchAction:(SEL)arg1 fromSender:(id)arg2;
- (void)beginOpeningQuicklyWithQueryString:(id)arg1;
- (void)beginOpeningQuicklyScoped:(BOOL)arg1;
- (void)_beginOpeningQuicklyWithQueryString:(id)arg1 scoped:(BOOL)arg2;
- (void)_configureWindowForRunningScoped;
- (void)_openMatch:(id)arg1;
- (void)_openLocation:(id)arg1;
- (BOOL)_workspace:(id)arg1 containsContainerWithFilePath:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)_updateQueryString:(id)arg1 updateInterface:(BOOL)arg2;
- (void)openQuicklyQueryDidUpdate:(id)arg1;
- (void)openQuicklyQueryWillUpdate:(id)arg1;
- (void)_resizeView;
- (void)_captureQueryString;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)windowWillClose:(id)arg1;
- (void)awakeFromNib;
- (id)_activeWorkspaceWindowController;
- (id)_openWindowTerminationDisablingReason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

