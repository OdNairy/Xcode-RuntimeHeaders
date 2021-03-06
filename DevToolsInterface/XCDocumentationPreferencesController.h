//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSButton, NSMutableArray, NSPopUpButton, NSString, NSTextField, NSView, NSWindow, WebPreferences, XCDocSetOutlineViewController;

@interface XCDocumentationPreferencesController : PBXPreferencesPaneModule
{
    XCDocSetOutlineViewController *_docSetOutlineViewController;
    NSPopUpButton *_minimumFontSizeControl;
    NSTextField *_noUpdatesAvailableMessage;
    NSButton *_checkAndInstallNowButton;
    BOOL _oneShotUpdateCheckInProgress;
    WebPreferences *_webPreferences;
    NSMutableArray *_validFontSizes;
    BOOL _subscriptionURLIsValid;
    NSWindow *_subscriptionWindow;
    NSTextField *_subscriptionTextField;
    NSButton *_validateAddSubscriptionButton;
    NSString *_subscriptionTextFieldString;
    NSView *_researchAssistantPrefsPlaceholder;
}

+ (int)validFontSizeForSize:(int)arg1;
+ (void)initialize;
@property(nonatomic) BOOL oneShotUpdateCheckInProgress; // @synthesize oneShotUpdateCheckInProgress=_oneShotUpdateCheckInProgress;
@property(retain, nonatomic) NSMutableArray *validFontSizes; // @synthesize validFontSizes=_validFontSizes;
@property(nonatomic) BOOL subscriptionURLIsValid; // @synthesize subscriptionURLIsValid=_subscriptionURLIsValid;
@property(retain, nonatomic) WebPreferences *webPreferences; // @synthesize webPreferences=_webPreferences;
- (void)resetSliceDefaults:(id)arg1;
- (void)_downloadDidAbort:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (void)startDownloadForDocSetUpdate:(id)arg1;
- (void)_startDownloadForDocSetUpdates:(id)arg1;
- (void)debug_printSubscriptionState:(id)arg1;
- (void)checkForAndInstallUpdatesNow:(id)arg1;
- (void)_displayNoUpdatesAvailableMessage;
- (void)_unhideNoUpdatesAvailableMessage;
- (void)_hideNoUpdatesAvailableMessage;
- (void)_notifyUpdateCheckDidStart;
- (void)_notifyUpdateCheckDidFinish;
- (void)toggleAutoCheckForAndInstallUpdates:(id)arg1;
- (void)_refreshAllDidFinish:(id)arg1;
- (void)docPreferencesDidChange:(id)arg1;
- (void)showSubscriptionSheet:(id)arg1;
- (void)subscriptionSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)endSubscriptionSheet:(id)arg1;
- (void)setSubscriptionTextFieldString:(id)arg1;
- (id)subscriptionTextFieldString;
- (void)addSubscription:(id)arg1;
- (void)showSubscriptionError:(id)arg1;
- (void)_scrollPublisherToVisible:(id)arg1;
- (void)_docSetGroupItemsRemoved:(id)arg1;
- (void)_docSetGroupItemsAdded:(id)arg1;
- (void)_subscriptionBadFeedURLSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)subscriptionCancelAction:(id)arg1;
- (void)showHelp:(id)arg1;
- (void)replaceObjectInValidFontSizesAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeObjectFromValidFontSizesAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inValidFontSizesAtIndex:(unsigned int)arg2;
- (void)getValidFontSizes:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectInValidFontSizesAtIndex:(unsigned int)arg1;
- (unsigned int)countOfValidFontSizes;
- (void)setIndexOfSelectedMinimumFontSize:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long indexOfSelectedMinimumFontSize;
- (unsigned long long)minimumFontSize;
- (void)setMinimumFontSize:(unsigned long long)arg1;
- (void)minimumFontSizeEnabledAction:(id)arg1;
- (void)moduleWasInstalled;
- (void)_performanceMeasurementWithState:(int)arg1 comment:(id)arg2;
- (void)moduleWillBeRemoved;
- (struct CGSize)minModuleSize;
- (id)moduleNibName;
- (void)dealloc;
- (void)_setUpMinimumFontSizeArray;
- (void)_initWebPreferences;
- (void)_initRAPreferences;
- (void)_setUpPreferencesController;

@end

