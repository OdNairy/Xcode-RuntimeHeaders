//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

@class NSArray, NSMutableArray, NSView, XCSIntegration, XCSIntegrationIssues, XCSUIIntegrationSummaryViewController, _XCSUIIssueSelectionManager, _XCSUIIssuesSummaryView;

@interface XCSUIIntegrationSummaryIssuesViewController : DVTViewController
{
    NSMutableArray *_showMoreRows;
    NSView *_lozengeView;
    _XCSUIIssueSelectionManager *_selectionManager;
    XCSIntegration *_integration;
    XCSIntegrationIssues *_integrationIssues;
    CDUnknownBlockType _viewSizeChangedCallback;
    CDUnknownBlockType _detailsViewSelectionChangedCallback;
    CDUnknownBlockType _detailsViewDoubleClickCallback;
    XCSUIIntegrationSummaryViewController *_summaryViewController;
    double _requiredHeight;
    NSArray *_issueSections;
    _XCSUIIssuesSummaryView *_issuesSummaryView;
}

@property __weak _XCSUIIssuesSummaryView *issuesSummaryView; // @synthesize issuesSummaryView=_issuesSummaryView;
@property(copy) NSArray *issueSections; // @synthesize issueSections=_issueSections;
@property double requiredHeight; // @synthesize requiredHeight=_requiredHeight;
@property __weak XCSUIIntegrationSummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(copy) CDUnknownBlockType detailsViewDoubleClickCallback; // @synthesize detailsViewDoubleClickCallback=_detailsViewDoubleClickCallback;
@property(copy) CDUnknownBlockType detailsViewSelectionChangedCallback; // @synthesize detailsViewSelectionChangedCallback=_detailsViewSelectionChangedCallback;
@property(copy) CDUnknownBlockType viewSizeChangedCallback; // @synthesize viewSizeChangedCallback=_viewSizeChangedCallback;
@property(retain, nonatomic) XCSIntegrationIssues *integrationIssues; // @synthesize integrationIssues=_integrationIssues;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)triggerErrorFixIt:(id)arg1;
- (void)deviceFailureFixIt:(id)arg1;
- (void)scmFailureFixIt:(id)arg1;
- (void)calculateRequiredHeight;
- (void)showMoreIssuesInSection:(id)arg1;
- (void)refreshIssuesView;
- (void)populateIssueSectionView:(id)arg1 withSection:(id)arg2;
- (void)populateIssueView:(id)arg1 withIssue:(id)arg2 issueIndex:(unsigned long long)arg3;
- (void)refreshIssueGroups;
- (void)refreshUI;
- (void)loadView;

@end

