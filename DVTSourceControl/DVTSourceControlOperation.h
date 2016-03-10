//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "DVTSourceControlCancellable.h"

@class DVTSourceControlManager, DVTSourceControlSystem, NSString;

@interface DVTSourceControlOperation : NSOperation <DVTSourceControlCancellable>
{
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _isCanceled;
    BOOL suppressAuthenticationFailure;
    id context;
    CDUnknownBlockType _operationBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _incrementalLogBlock;
    CDUnknownBlockType _terminationBlock;
    DVTSourceControlManager *_sourceControlManager;
    DVTSourceControlSystem *_system;
}

+ (id)sourceControlOperationStateQueue;
@property(retain) DVTSourceControlSystem *system; // @synthesize system=_system;
@property(retain, nonatomic) DVTSourceControlManager *sourceControlManager; // @synthesize sourceControlManager=_sourceControlManager;
@property(copy) CDUnknownBlockType terminationBlock; // @synthesize terminationBlock=_terminationBlock;
@property(copy) CDUnknownBlockType incrementalLogBlock; // @synthesize incrementalLogBlock=_incrementalLogBlock;
@property(copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property __weak id context; // @synthesize context;
@property BOOL suppressAuthenticationFailure; // @synthesize suppressAuthenticationFailure;
- (void).cxx_destruct;
- (void)cancel;
- (void)finish;
- (void)retry;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)_startOperation;
@property(readonly) NSString *identifier;
- (id)initWithSourceControlManager:(id)arg1 system:(id)arg2 operationBlock:(CDUnknownBlockType)arg3 incrementalLogBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 terminationBlock:(CDUnknownBlockType)arg6;
- (id)initWithSourceControlManager:(id)arg1 system:(id)arg2 operationBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4 terminationBlock:(CDUnknownBlockType)arg5;
- (id)initWithSourceControlManager:(id)arg1 system:(id)arg2 operationBlock:(CDUnknownBlockType)arg3 incrementalLogBlock:(CDUnknownBlockType)arg4 terminationBlock:(CDUnknownBlockType)arg5;
- (id)initWithSourceControlManager:(id)arg1 system:(id)arg2 operationBlock:(CDUnknownBlockType)arg3 terminationBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

