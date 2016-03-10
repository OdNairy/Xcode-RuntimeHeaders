//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPURenderJob.h"

@class GPUFramebufferAttachmentInfo;

__attribute__((visibility("hidden")))
@interface GPUGLRenderJob : GPURenderJob
{
    unsigned int _attachment;
    GPUFramebufferAttachmentInfo *_attachmentInfo;
}

@property(retain, nonatomic) GPUFramebufferAttachmentInfo *attachmentInfo; // @synthesize attachmentInfo=_attachmentInfo;
@property(readonly, nonatomic) unsigned int attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (BOOL)showOverlay;
- (void)setRenderingAttributes:(id)arg1;
- (BOOL)isColor;
- (BOOL)flipped;
- (struct CGSize)imageSize;
- (id)displayElementName;
- (BOOL)isStencilDisplayElement;
- (BOOL)isDepthDisplayElement;
- (id)initWithResource:(id)arg1 modelFactory:(id)arg2 attachment:(unsigned int)arg3 overlayResource:(id)arg4 attachmentInfo:(id)arg5;
- (void)resolveWithTraceResourceItem:(id)arg1;

@end

