/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, NSArray, NSNumber, NSRunLoop, NSString;

@interface DVTDelayedInvocation : NSObject <DVTInvalidation>
{
    id _block;
    NSArray *_runLoopModes;
    NSNumber *_priority;
    NSNumber *_delay;
    NSString *_terminationDisablingReason;
    NSRunLoop *_schedulingRunLoop;
    DVTStackBacktrace *_schedulingBacktrace;
    struct {
        unsigned int scheduledInvocation:1;
        unsigned int invokesIfNeededWhenAppTerminates:1;
        unsigned int disablesSuddenTermination:1;
        unsigned int disablesAutomaticTermination:1;
        unsigned int didDisableSuddenTermination:1;
        unsigned int didDisableAutomaticTermination:1;
        unsigned int invoking:1;
        unsigned int isInvalidated:1;
        unsigned int _reserved:1;
    } _flags;
    void *_keepSelfAliveUntilCancellationRef;
    BOOL _shouldInvokeIfNeededWhenAppTerminates;
}

+ (void)initialize;
+ (id)delayedInvocationWithTerminationDisablingReason:(id)arg1 withBlock:(id)arg2;
@property BOOL shouldInvokeIfNeededWhenAppTerminates; // @synthesize shouldInvokeIfNeededWhenAppTerminates=_shouldInvokeIfNeededWhenAppTerminates;
@property(copy) NSString *terminationDisablingReason; // @synthesize terminationDisablingReason=_terminationDisablingReason;
@property(copy, nonatomic) NSArray *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(copy, nonatomic) NSNumber *delay; // @synthesize delay=_delay;
@property(copy, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (id)description;
- (void)appWillTerminate:(id)arg1;
- (void)invoke;
- (void)cancelScheduledInvocation;
- (void)scheduleInvocation;
- (void)invokeIfNeeded;
- (void)unscheduleInvocation;
- (void)runBlock:(id)arg1;
@property BOOL disablesAutomaticTermination;
@property BOOL disablesSuddenTermination;
- (BOOL)invokesIfNeededWhenAppTerminates;
- (void)setInvokesIfNeededWhenAppTerminates:(BOOL)arg1;
@property(readonly) BOOL isInvoking;
@property(readonly) BOOL hasScheduledInvocation;
- (void)setAutomaticTerminationBlocked:(BOOL)arg1;
- (void)setSuddenTerminationBlocked:(BOOL)arg1;
- (void)primitiveInvalidate;
- (id)initWithBlock:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

