//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSClipView;

@interface PBXTableContainerView : NSView
{
    NSClipView *_contentView;
    NSClipView *_headerClipView;
}

+ (struct CGSize)contentSizeForFrameSize:(struct CGSize)arg1;
+ (struct CGSize)frameSizeForContentSize:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (struct CGSize)contentSize;
- (id)documentView;
- (void)setDocumentView:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)tile;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

