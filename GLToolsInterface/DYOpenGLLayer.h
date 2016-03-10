//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CAOpenGLLayer.h"

@class NSData;

@interface DYOpenGLLayer : CAOpenGLLayer
{
    struct ImageRenderer _renderer;
    struct ImageInfo _currentImageInfo;
    NSData *_currentImageData;
    BOOL _isRenderbuffer;
    struct dispatch_queue_s *_queue;
    id <DYOpenGLLayerContentProvider> _contentProvider;
    CDUnknownBlockType _postRenderSurfaceBlock;
}

@property(copy) CDUnknownBlockType postRenderSurfaceBlock; // @synthesize postRenderSurfaceBlock=_postRenderSurfaceBlock;
@property(retain, nonatomic) id <DYOpenGLLayerContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)dumpImage:(id)arg1;
- (void)releaseCGLContext:(struct _CGLContextObject *)arg1;
- (struct _CGLPixelFormatObject *)copyCGLPixelFormatForDisplayMask:(unsigned int)arg1;
- (void)drawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (BOOL)canDrawInCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 forLayerTime:(double)arg3 displayTime:(const CDStruct_e50ab651 *)arg4;
- (void)invalidate;
- (struct ImageRenderer *)renderer;
- (id)initWithIdentifer:(id)arg1;

@end

