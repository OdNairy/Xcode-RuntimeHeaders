//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTKPTrigger.h>

@class DTKPCPU, DTKPCPUCounterAllocator;

@interface DTKPTriggerTime : DTKPTrigger
{
    int _timerID;
    DTKPCPU *_cpu;
    DTKPCPUCounterAllocator *_counterAllocator;
    _Bool _mustUnforceCounters;
    BOOL _profileEveryThread;
    int _pid;
    unsigned long long _sampleRate;
}

+ (void)initialize;
@property(nonatomic) BOOL profileEveryThread; // @synthesize profileEveryThread=_profileEveryThread;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;
- (int)stop:(id *)arg1;
- (int)start:(id *)arg1;
- (int)_configureTimer:(unsigned int)arg1 actionID:(unsigned int)arg2 period:(unsigned long long)arg3 userData:(unsigned int)arg4;
- (void)_timerIDDdealloc:(int)arg1;
- (int)_timerIDAlloc;
- (int)stopHardwareCounters:(id *)arg1;
- (int)startHardwareCounters:(id *)arg1;
- (unsigned long long)pmcEventCount;
- (int)addPMCEventNamed:(id)arg1 error:(id *)arg2;
- (unsigned long long)_recordConfigWordsIntoBuffer:(unsigned long long *)arg1;
- (id)init;

@end
