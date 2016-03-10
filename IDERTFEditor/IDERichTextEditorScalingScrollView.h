//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

@class NSPopUpButton;

@interface IDERichTextEditorScalingScrollView : NSScrollView
{
    NSPopUpButton *_scalePopUpButton;
    double scaleFactor;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (void)setScaleFactor:(double)arg1 adjustPopup:(BOOL)arg2;
- (void)setScaleFactor:(double)arg1;
- (double)scaleFactor;
- (void)scalePopUpAction:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)tile;
- (void)makeScalePopUpButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

