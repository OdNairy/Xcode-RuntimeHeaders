//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableRowView.h"

@class NSTrackingArea;

@interface DVTCrashLogTableRowView : NSTableRowView
{
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
    BOOL _drawCrashingThreadHighlight;
    BOOL _drawBottomSeparator;
    BOOL _drawDashedSeparator;
    BOOL _isLastChildRowInParent;
}

+ (id)_consecutiveThreadLineSeparatorColor;
+ (id)_nonConsecutiveDashedThreadLineSeparatorColor;
+ (id)_crashingThreadHighlightColor;
+ (double)lastChildRowHeightAdjustment;
@property(nonatomic) BOOL isLastChildRowInParent; // @synthesize isLastChildRowInParent=_isLastChildRowInParent;
@property(nonatomic) BOOL drawDashedSeparator; // @synthesize drawDashedSeparator=_drawDashedSeparator;
@property(nonatomic) BOOL drawBottomSeparator; // @synthesize drawBottomSeparator=_drawBottomSeparator;
@property(nonatomic) BOOL drawCrashingThreadHighlight; // @synthesize drawCrashingThreadHighlight=_drawCrashingThreadHighlight;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)ensureTrackingArea;
- (BOOL)mouseInside;
- (void)setMouseInside:(BOOL)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (id)_dashColor;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (long long)selectionHighlightStyle;

@end

