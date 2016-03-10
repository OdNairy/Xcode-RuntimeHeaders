//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDelayedInvocation, DVTNotificationToken, DVTStackBacktrace, IBDocument, IBMutableIdentityDictionary, NSArray, NSDictionary, NSMutableSet, NSString;

@interface IBDocumentIssueGenerator : NSObject <DVTInvalidation>
{
    IBDocument *_document;
    BOOL _allIssuesAreInvalid;
    IBMutableIdentityDictionary *_membersToIssues;
    NSArray *_globalIssues;
    NSMutableSet *_parentsWithPendingChildIssueCalculations;
    NSMutableSet *_membersWithPendingIssueCalculations;
    NSMutableSet *_classNamesWithPendingIssueCalculations;
    DVTDelayedInvocation *_issuesInvocation;
    DVTNotificationToken *_issueSeverityToken;
    BOOL _enabled;
    BOOL _shuttingDown;
}

+ (BOOL)isFineGrainedIssueInvalidationEnabled;
+ (void)initialize;
@property(readonly) IBDocument *document; // @synthesize document=_document;
@property(nonatomic, getter=isShuttingDown) BOOL shuttingDown; // @synthesize shuttingDown=_shuttingDown;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
@property(readonly) NSArray *allWarnings;
@property(readonly) NSArray *globalWarnings;
@property(readonly) NSDictionary *warningsByMember;
- (void)ensureIssuesAreValid;
- (void)validateIssues:(id)arg1;
- (id)aggregateMembersNeedingRefreshedIssues;
- (void)clearPendingIssueCalculationsTables;
- (void)updateIssuesForMembers:(id)arg1;
- (BOOL)updateGlobalIssues;
- (BOOL)effectiveIssuesAreEnabled;
- (void)notifyObservers;
- (void)invalidateIssuesForConnection:(id)arg1;
- (void)invalidateIssuesForClassNamed:(id)arg1;
- (void)invalidateIssuesForChildrenOfObject:(id)arg1;
- (void)invalidateIssuesForObjects:(id)arg1;
- (void)invalidateIssuesForObject:(id)arg1;
- (void)invalidateAllIssues;
- (void)warningSeveritiesDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

