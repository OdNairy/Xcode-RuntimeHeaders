//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "IDECoverageReportFunctionFetcher.h"
#import "XCSBotSupportingEditorHostedViewController.h"
#import "XCSUIIntegrationCoverageViewController.h"

@class IDECoverageReportViewController, NSArray, NSString, XCSBot, XCSBotSupportingEditor, XCSCodeCoverageIntegration, XCSIntegration, XCSUIProgressReplacementView;

@interface XCSUIIntegrationCoverageViewController : DVTViewController <IDECoverageReportFunctionFetcher, XCSBotSupportingEditorHostedViewController, XCSUIIntegrationCoverageViewController>
{
    XCSIntegration *_integration;
    XCSBotSupportingEditor *_botSupportingEditor;
    XCSBot *_bot;
    NSArray *_itemIdentifiersToExpand;
    XCSUIProgressReplacementView *_replacementView;
    XCSCodeCoverageIntegration *_coverageIntegration;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
@property(retain, nonatomic) XCSCodeCoverageIntegration *coverageIntegration; // @synthesize coverageIntegration=_coverageIntegration;
@property __weak XCSUIProgressReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain, nonatomic) NSArray *itemIdentifiersToExpand; // @synthesize itemIdentifiersToExpand=_itemIdentifiersToExpand;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, copy) NSArray *currentSelectedItems;
@property(readonly, copy) NSArray *currentSelectedDocumentLocations;
- (void)fetchCoverageIntegration:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchFunctionsForFile:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)currentlyExpandedCoverageItemIdentifiers;
@property(readonly, nonatomic) IDECoverageReportViewController *installedReportViewController;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

