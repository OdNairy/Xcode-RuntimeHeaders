//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUTools/DYInOrderInstructionFilesVisitor.h>

__attribute__((visibility("hidden")))
@interface DYPlaybackEngineFSEBuilder : DYInOrderInstructionFilesVisitor
{
    struct PlaybackEngineDecodeCache *_cache;
    id <DYCaptureStore> _store;
    _Bool _buildDecodedFunctionStreams;
}

- (void)performPostCaptureVisitActions;
- (void)performPreCaptureVisitActions;
- (void)performPreVisitActions;
- (void)visitFunctionStreamFile:(id)arg1;
- (void)visitCaptureStore:(id)arg1;
- (id)initWithPlaybackEngineCache:(struct PlaybackEngineDecodeCache *)arg1;
- (id)init;

@end

