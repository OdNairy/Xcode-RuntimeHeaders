//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

#import "DVTFirstResponderShowingView.h"
#import "IBKeyEquivalentTrackingDelegate.h"

@class DVTFirstResponderDrawingStrategy, IBImageButton, IBKeyEquivalent, NSMenu, NSString;

@interface IBKeyEquivalentEntryField : DVTLayoutView_ML <IBKeyEquivalentTrackingDelegate, DVTFirstResponderShowingView>
{
    IBKeyEquivalent *keyEquivalent;
    unsigned long long allowableModifiers;
    DVTFirstResponderDrawingStrategy *firstResponderDrawingStrategy;
    BOOL showsFirstResponder;
    NSMenu *alternatesMenu;
    IBImageButton *alternatesButton;
    IBImageButton *clearButton;
    BOOL inMixedState;
    NSString *customEmptyPlaceholderString;
    BOOL usesBezeledStyle;
    long long backgroundStyle;
    id _target;
    SEL _action;
}

@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle;
@property(nonatomic) BOOL usesBezeledStyle; // @synthesize usesBezeledStyle;
@property(copy, nonatomic) NSString *customEmptyPlaceholderString; // @synthesize customEmptyPlaceholderString;
@property unsigned long long allowableModifiers; // @synthesize allowableModifiers;
@property(copy, nonatomic) IBKeyEquivalent *keyEquivalent; // @synthesize keyEquivalent;
@property(nonatomic) BOOL showsFirstResponder; // @synthesize showsFirstResponder;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (id)attributes;
- (id)alternateButtonImageForState:(unsigned long long)arg1;
- (id)clearButtonImageForState:(unsigned long long)arg1;
- (void)invalidateDrawing;
- (void)rerenderImages;
- (void)showMultipleValues;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)clearKeyEquivalent:(id)arg1;
- (void)chooseAlternate:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)startTrackingWithKeyEvent:(id)arg1;
- (void)reflectKeyEquivalentTracking:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)selectFollowingKeyView;
- (void)layoutBottomUp;
- (struct CGRect)alternateButtonFrame;
- (struct CGRect)clearButtonFrame;
- (BOOL)hasKeyEquivalent;
- (void)setAlternateKeyEquivalents:(id)arg1;
- (id)alternateKeyEquivalents;
- (id)font;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

