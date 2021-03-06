//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYCaptureFile, DYFunctionPlayer;

@interface DYPlaybackEngine : NSObject
{
    id <DYCaptureStore> _captureStore;
    DYFunctionPlayer *_player;
    DYCaptureFile *_currentFile;
    long long _playerOnce;
    struct dispatch_queue_s *_playbackQueue;
    struct PlaybackEngineDecodeCache *_cache;
    struct __wrap_iter<std::__1::unique_ptr<GPUTools::Playback::FunctionStreamEntry, std::__1::default_delete<GPUTools::Playback::FunctionStreamEntry>>*> _fseIterator;
    unsigned int _functionBatchOffset;
    _Bool _active;
    unsigned int _targetFunctionIndex;
    unsigned int _loopCount;
    unsigned int _currentFunctionIndex;
}

@property(readonly, nonatomic) unsigned int currentFunctionIndex; // @synthesize currentFunctionIndex=_currentFunctionIndex;
@property(nonatomic) unsigned int loopCount; // @synthesize loopCount=_loopCount;
@property(nonatomic) unsigned int targetFunctionIndex; // @synthesize targetFunctionIndex=_targetFunctionIndex;
@property(readonly, nonatomic) DYCaptureFile *currentFile; // @synthesize currentFile=_currentFile;
@property(readonly, retain, nonatomic) id <DYCaptureStore> captureStore; // @synthesize captureStore=_captureStore;
- (id).cxx_construct;
- (BOOL)shouldPerformPlaybackLoopIteration:(unsigned int)arg1;
- (void)performPlaybackLoopIterationPostCaptureActions:(unsigned int)arg1;
- (void)performPlaybackLoopIterationPreCaptureActions:(unsigned int)arg1;
- (id)playback;
- (id)playbackToFunction:(unsigned int)arg1;
- (void)onPlaybackRequestCompleted;
- (void)onPlaybackRequestStart;
- (void)_performPlaybackRequest:(unsigned int)arg1;
- (void)_executeFunctionStreamEntriesPerformingLoopIterationActions:(_Bool)arg1 iteration:(unsigned int)arg2;
- (void)_executeDeltaFSEs;
- (_Bool)_executeFSE:(struct FunctionStreamEntry *)arg1;
- (_Bool)_executeFunctionStream:(struct FunctionStreamEntry *)arg1;
- (_Bool)_executeDFS:(struct FunctionStreamEntry *)arg1;
- (_Bool)_executeFunctions:(struct CoreFunction *)arg1 count:(unsigned long long)arg2;
- (void)_addPointerDataSizeMapToPlayer;
- (void)_allocateAndFillDataCache;
@property(readonly, retain, nonatomic) DYFunctionPlayer *player; // @dynamic player;
- (void)setWireframeLineWidth:(float)arg1;
- (id)newFunctionPlayer;
- (void)dealloc;
- (id)initWithCaptureStore:(id)arg1;
- (id)init;

@end

