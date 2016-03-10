//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

#import "IBConnectionPredecessorViewDelegate.h"

@class DVTStackView_ML, IBConnectionInterfaceStyle, IBImageButton, NSMutableArray, NSString, NSTextField, NSView, NSWindow;

@interface IBConnectionPrototypeView : DVTLayoutView_ML <IBConnectionPredecessorViewDelegate>
{
    IBConnectionInterfaceStyle *connectionInterfaceStyle;
    IBImageButton *connectionWell;
    DVTStackView_ML *predecessorStack;
    NSTextField *titleField;
    NSMutableArray *predecessorViews;
    BOOL allowsNewConnections;
    NSString *warningMessage;
    id mouseObserveringToken;
    NSView *hoverTarget;
    struct CGRect hoverTargetRect;
    NSWindow *observedWindow;
    double titleWidthPercentage;
    id representedObject;
    id <IBConnectionPrototypeViewDelegate> _delegate;
}

+ (id)defaultTitleFieldWithInterfaceStyle:(id)arg1;
@property(nonatomic) __weak id <IBConnectionPrototypeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSTextField *titleField; // @synthesize titleField;
@property(copy, nonatomic) NSString *warningMessage; // @synthesize warningMessage;
@property(nonatomic) double titleWidthPercentage; // @synthesize titleWidthPercentage;
@property(nonatomic) BOOL allowsNewConnections; // @synthesize allowsNewConnections;
@property(retain) id representedObject; // @synthesize representedObject;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveLinkBubbleStrokeColor;
- (id)effectiveLinkBubbleFillColor;
- (id)rolledOverLinkBubbleFillColor;
- (id)bubblePath;
- (void)updateConnectionWellImages;
- (void)connectionWellDragged:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)conditionallyRegisterForMouseMovedEventsWithWindow:(id)arg1;
- (void)mouseMoved:(struct CGPoint)arg1 buttonStates:(unsigned long long)arg2;
- (void)connectionPredecessorViewHandleDisconnect:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)titleFieldFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)connectionWellFrame;
- (struct CGRect)connectionWellFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)predecessorBubbleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleBubbleRectForBounds:(struct CGRect)arg1;
- (double)predecessorBubbleWidthForBounds:(struct CGRect)arg1;
- (double)titleBubbleWidthForBounds:(struct CGRect)arg1;
- (double)bubbleRadius;
- (double)bubbleBottomInset;
- (double)bubbleRightInset;
- (double)bubbleCenterPadding;
- (double)bubbleLeftInset;
- (double)titleBubbleHeight;
- (BOOL)isFlipped;
- (void)setWindowToObserveForClosing:(id)arg1;
- (void)setHoverTarget:(id)arg1;
- (void)pushHoverTargetRect;
- (void)setHoverTargetRect:(struct CGRect)arg1;
- (id)connectionInterfaceStyle;
- (void)setPredecessorDisplayValues:(id)arg1 representedObjects:(id)arg2 andEnabledStates:(id)arg3;
- (id)predecessorDisplayValues;
@property(copy) NSString *title; // @dynamic title;
- (id)initWithFrame:(struct CGRect)arg1 andInterfaceStyle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

