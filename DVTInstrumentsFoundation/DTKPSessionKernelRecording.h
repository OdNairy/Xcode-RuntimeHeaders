//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTKPSession.h>

#import "DTKPSessionRecordable.h"

@class DTKPTriggerKDebug, DTKPTriggerPMI, DTKPTriggerTime, NSObject<OS_dispatch_semaphore>, NSString;

@interface DTKPSessionKernelRecording : DTKPSession <DTKPSessionRecordable>
{
    NSObject<OS_dispatch_semaphore> *_stopSemaphore;
    DTKPTriggerKDebug *_triggerKDebug;
    DTKPTriggerPMI *_triggerPMI;
    DTKPTriggerTime *_triggerTime;
    struct SessionCallbackState _callback;
    struct kperf_buf *kperfBuffer;
    BOOL _hasPMI;
    BOOL _hasPMCs;
    BOOL _hasTimer;
    unsigned char _collectionMode;
    unsigned char _recordingPriority;
    unsigned long long _bufferSize;
}

+ (int)blessPid:(int)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) unsigned char recordingPriority; // @synthesize recordingPriority=_recordingPriority;
@property(nonatomic) unsigned char collectionMode; // @synthesize collectionMode=_collectionMode;
- (void).cxx_destruct;
- (int)setReasons:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)callbackForReason:(unsigned int)arg1 error:(id *)arg2;
- (int)_flushRecordsFromSourceLocked;
- (int)_returnKernelBuffer:(void *)arg1;
- (int)_getKernelBuffer:(void **)arg1 bufferSize:(unsigned long long *)arg2 more:(_Bool *)arg3;
- (BOOL)isPaused;
- (BOOL)isActive;
- (int)_finishedRecordingLocked:(id *)arg1;
- (int)stop:(id *)arg1;
- (int)resume:(id *)arg1;
- (int)pause:(id *)arg1;
- (int)start:(id *)arg1;
- (int)_configureSettingsForKDebug:(_Bool)arg1 callstacks:(_Bool)arg2 contextSwitch:(_Bool)arg3;
- (int)_setSessionConfigLocked:(BOOL)arg1;
- (id)triggerTime;
- (id)triggerPMI;
- (id)triggerKDebug;
- (int)setTriggerTime:(id)arg1 error:(id *)arg2;
- (int)setTriggerPMI:(id)arg1 error:(id *)arg2;
- (int)setTriggerKDebug:(id)arg1 error:(id *)arg2;
- (int)_clearActiveSession;
- (int)_setActiveSession;
- (void)dealloc;
- (id)initAsFileBackedWithDirectory:(id)arg1 retainFiles:(BOOL)arg2 error:(id *)arg3;
- (id)initAsMemoryBackedWithError:(id *)arg1;
- (BOOL)_commonInit;
- (int)_callbackThreadInit;
- (int)_startCallbackThread;
- (void)_callbackShutdown;
- (void)_callbackStop;
- (void *)callbackThread;
- (void)_callbackThreadActive;
- (void)callbackThreadAlertForReason:(unsigned int)arg1;
- (void)callbackThreadNotify:(int)arg1;
- (void)callbackThreadNotifyLocked:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

