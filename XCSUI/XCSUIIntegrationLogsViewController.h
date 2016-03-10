//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "IDELogViewControllerDelegate.h"
#import "XCSBotSupportingEditorHostedViewController.h"
#import "XCSUIBotLogEditorScopeBarDelegate.h"

@class DVTScopeBarsManager, DVTStackView_ML, IDESchemeActionsInvocationRecord, NSArray, NSMenuItem, NSMutableArray, NSOperationQueue, NSProgressIndicator, NSScrollView, NSString, NSTextField, NSTextView, NSView, XCSBot, XCSBotSupportingEditor, XCSIntegration, XCSUIBotLogScopeBar;

@interface XCSUIIntegrationLogsViewController : DVTViewController <XCSUIBotLogEditorScopeBarDelegate, IDELogViewControllerDelegate, XCSBotSupportingEditorHostedViewController>
{
    BOOL _hasLoadedLogs;
    CDUnknownBlockType _logsDidLoadBlock;
    NSOperationQueue *_scmLogsDownloadQueue;
    NSMenuItem *_loadingMenuItem;
    NSMenuItem *_integrationMenuItem;
    NSArray *_beforeTriggersLogMenuItems;
    NSMenuItem *_rawBuildLogMenuItem;
    NSMenuItem *_sourceControlLogMenuItem;
    NSArray *_afterTriggersLogMenuItems;
    NSMenuItem *_rawServiceLogMenuItem;
    NSArray *_currentSelectedDocumentLocations;
    XCSIntegration *_integration;
    XCSBot *_bot;
    XCSBotSupportingEditor *_botSupportingEditor;
    NSTextView *_textView;
    NSView *_scopeBarsBaseView;
    NSScrollView *_stackViewScrollView;
    DVTStackView_ML *_stackView;
    DVTScopeBarsManager *_scopeBarsManager;
    XCSUIBotLogScopeBar *_scopeBar;
    NSMutableArray *_logViewControllers;
    NSMutableArray *_textViewDicts;
    NSView *_progressLoadingView;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressTextField;
    NSView *_scopeBarScrollViewHostView;
    IDESchemeActionsInvocationRecord *_schemeActionsInvRecord;
    NSArray *_triggerBeforeLogs;
    NSArray *_triggerAfterLogs;
    NSString *_internalBuildServiceDebugLog;
    NSString *_internalRawBuildLog;
    NSString *_internalSourceControlLog;
    NSScrollView *_rawLogScrollView;
    NSTextView *_rawLogTextView;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property NSTextView *rawLogTextView; // @synthesize rawLogTextView=_rawLogTextView;
@property __weak NSScrollView *rawLogScrollView; // @synthesize rawLogScrollView=_rawLogScrollView;
@property(copy) NSString *internalSourceControlLog; // @synthesize internalSourceControlLog=_internalSourceControlLog;
@property(copy) NSString *internalRawBuildLog; // @synthesize internalRawBuildLog=_internalRawBuildLog;
@property(copy) NSString *internalBuildServiceDebugLog; // @synthesize internalBuildServiceDebugLog=_internalBuildServiceDebugLog;
@property(copy) NSArray *triggerAfterLogs; // @synthesize triggerAfterLogs=_triggerAfterLogs;
@property(copy) NSArray *triggerBeforeLogs; // @synthesize triggerBeforeLogs=_triggerBeforeLogs;
@property(retain) IDESchemeActionsInvocationRecord *schemeActionsInvRecord; // @synthesize schemeActionsInvRecord=_schemeActionsInvRecord;
@property __weak NSView *scopeBarScrollViewHostView; // @synthesize scopeBarScrollViewHostView=_scopeBarScrollViewHostView;
@property __weak NSTextField *progressTextField; // @synthesize progressTextField=_progressTextField;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property __weak NSView *progressLoadingView; // @synthesize progressLoadingView=_progressLoadingView;
@property(retain) NSMutableArray *textViewDicts; // @synthesize textViewDicts=_textViewDicts;
@property(retain) NSMutableArray *logViewControllers; // @synthesize logViewControllers=_logViewControllers;
@property(retain) XCSUIBotLogScopeBar *scopeBar; // @synthesize scopeBar=_scopeBar;
@property(retain) DVTScopeBarsManager *scopeBarsManager; // @synthesize scopeBarsManager=_scopeBarsManager;
@property __weak DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property __weak NSScrollView *stackViewScrollView; // @synthesize stackViewScrollView=_stackViewScrollView;
@property __weak NSView *scopeBarsBaseView; // @synthesize scopeBarsBaseView=_scopeBarsBaseView;
@property NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) XCSBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)logViewController:(id)arg1 selectedIndexPathsDidChange:(id)arg2;
- (id)logViewController:(id)arg1 replacementDocumentLocationForOriginalDocumentLocation:(id)arg2;
- (id)addLogViewControllerWithLog:(id)arg1 title:(id)arg2;
- (void)_formatTextView:(id)arg1;
- (id)addLozengeTextFieldWithString:(id)arg1;
- (void)selectedLogChanged:(id)arg1;
- (void)loadRawTextLog:(id)arg1;
- (void)loadSchemeActionActivityViews:(id)arg1;
- (void)reorderMenuItems;
- (id)addLogMenuItemWithString:(id)arg1 representedObject:(id)arg2;
- (void)showRawTextLog:(id)arg1;
- (id)_disclosureView;
- (void)configureTextView:(id)arg1;
- (id)integrationForLogDownloading;
- (void)logEditorScopeBar:(id)arg1 searchTextChanged:(id)arg2;
- (void)logEditorScopeBar:(id)arg1 showAllResultsChanged:(BOOL)arg2;
- (void)logEditorScopeBar:(id)arg1 stateChanged:(int)arg2;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, copy) NSArray *currentSelectedItems;
@property(readonly, copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
- (void)primitiveInvalidate;
- (void)_updateViewControllers;
- (void)_loadBuildLogView;
- (void)_resetViews;
- (void)loadView;
- (void)_fetchOtherAssets;
- (void)downloadLogs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

