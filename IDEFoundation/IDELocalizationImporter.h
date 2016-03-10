//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDELocalizationWorkProgress.h"

@class DVTNotificationToken, DVTStackBacktrace, IDELocalizationImporterContext, IDELocalizationStream, NSString;

@interface IDELocalizationImporter : NSObject <IDELocalizationWorkProgress, DVTInvalidation>
{
    IDELocalizationStream *_importWork;
    IDELocalizationImporterContext *_importContext;
    long long _workDone;
    long long _workOutstanding;
    DVTNotificationToken *_localizationPhaseObserver;
    DVTNotificationToken *_localizationWorkItemIncrementObserver;
    DVTNotificationToken *_localizationWorkItemDecrementObserver;
    id <DVTCancellable> _workToken;
    BOOL _complete;
    long long _progress;
    NSString *_phase;
    NSString *_workTitle;
    CDUnknownBlockType _onErrorBlock;
    CDUnknownBlockType _onCompletedBlock;
}

+ (void)initialize;
+ (id)importerFromURL:(id)arg1 container:(id)arg2 sourceLanguage:(id)arg3 allowProjectChanges:(BOOL)arg4 onNeedsReview:(CDUnknownBlockType)arg5;
@property(copy) CDUnknownBlockType onCompletedBlock; // @synthesize onCompletedBlock=_onCompletedBlock;
@property(copy) CDUnknownBlockType onErrorBlock; // @synthesize onErrorBlock=_onErrorBlock;
@property(readonly) NSString *workTitle; // @synthesize workTitle=_workTitle;
@property(retain) NSString *phase; // @synthesize phase=_phase;
@property BOOL complete; // @synthesize complete=_complete;
@property long long progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (void)primitiveInvalidate;
- (id)initWithImportContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

