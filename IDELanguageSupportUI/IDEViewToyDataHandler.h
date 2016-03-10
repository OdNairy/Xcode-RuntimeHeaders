//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEPlaygroundDataHandler.h"

@class NSString;

@interface IDEViewToyDataHandler : NSObject <IDEPlaygroundDataHandler>
{
    struct CGImage *_placeholderImage;
}

- (struct CGImage *)placeholderImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGImage *)_newImageFromDeviceScreenForViewRect:(struct CGRect)arg1 framebufferCaptureProvider:(id)arg2;
- (BOOL)handleData:(id)arg1 metaData:(id)arg2 version:(unsigned long long)arg3 executionParameters:(id)arg4 resultDate:(id)arg5 error:(id *)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

