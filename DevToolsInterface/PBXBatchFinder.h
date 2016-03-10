//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBXTrackableTask.h"
#import "XCReplaceDelegate.h"

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, PBXFindOptionsSet;

@interface PBXBatchFinder : NSObject <PBXTrackableTask, XCReplaceDelegate>
{
    NSString *_findString;
    NSArray *_searchList;
    BOOL _isRunning;
    BOOL _completedNormally;
    BOOL _suspended;
    NSMutableArray *_resultFiles;
    NSMutableDictionary *_results;
    unsigned long long _resultCount;
    BOOL _ignoresCase;
    int _matchStyle;
    NSString *_lastReplaceString;
    unsigned long long _lastSkippedReplaces;
    PBXFindOptionsSet *_findOptionsSet;
    NSDate *_lastNewFindableNoticeDate;
    double _maxWidthForResults;
}

+ (id)taskBadge;
+ (void)_backgroundBatchFinderNotification:(id)arg1;
+ (void)_removeRunningBatchFinder:(id)arg1;
+ (void)_addRunningBatchFinder:(id)arg1;
+ (void)_stopFinding;
+ (void)_startFinding;
+ (BOOL)projectBasedFinder;
+ (id)batchFinderWithSearchList:(id)arg1;
+ (id)batchFinderWithSearchList:(id)arg1 findString:(id)arg2;
@property(nonatomic) double maxWidthForResults; // @synthesize maxWidthForResults=_maxWidthForResults;
- (id)taskBadge;
- (id)taskDescriptionString;
- (id)taskDisplayString;
- (id)taskIdentifier;
- (BOOL)taskCanAutoStopOnProjectClose;
- (BOOL)taskCanBeStoppedManually;
- (BOOL)taskRequiresIntervention;
- (BOOL)taskStopRunning;
- (int)taskProgressType;
- (float)taskPercentComplete;
- (void)postNewFindableNotice:(id)arg1;
- (void)postNewFindableNotice:(id)arg1 forcePost:(BOOL)arg2;
- (void)suspendFindingUntilIndexingComplete:(id)arg1;
- (void)_indexingDidComplete:(id)arg1;
- (void)resume;
- (void)suspend;
- (BOOL)isSuspended;
- (void)replaceFindResults:(id)arg1 withString:(id)arg2;
- (void)_replaceInFileReference:(id)arg1 replaceableResults:(id)arg2 withString:(id)arg3 skippedResults:(unsigned long long *)arg4;
- (id)replacementStringForFoundString:(id)arg1 replaceString:(id)arg2;
- (void)finish;
- (void)reportFindResults:(id)arg1;
- (float)percentageDone;
- (void)doSomeFindingUntilDate:(id)arg1;
- (id)_allResultsForFile:(id)arg1;
- (unsigned long long)currentResultCount;
- (id)currentResultsForFile:(id)arg1;
- (id)currentResultFiles;
- (BOOL)completedNormally;
- (BOOL)isRunning;
- (void)stopFind;
- (void)startFindWithProjectDocument:(id)arg1;
- (id)searchList;
- (id)findOptionsSet;
- (void)setFindOptionsSet:(id)arg1;
- (int)matchStyle;
- (void)setMatchStyle:(int)arg1;
- (BOOL)ignoresCase;
- (void)setIgnoresCase:(BOOL)arg1;
- (unsigned long long)lastSkippedReplaces;
- (id)lastReplaceString;
- (id)findString;
- (void)removeResults;
- (void)dealloc;
- (void)cleanup;
- (id)initWithSearchList:(id)arg1;
- (id)initWithSearchList:(id)arg1 findString:(id)arg2;
- (BOOL)requiresProjectIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

