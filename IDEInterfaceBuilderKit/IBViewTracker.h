//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBDocument, IBViewEditorCanvasFrameController, NSArray, NSEvent, NSNumber, NSValue, NSView;

@interface IBViewTracker : NSObject
{
    NSEvent *currentResizingEvent;
    CDUnion_31865a80 initialKnob;
    BOOL trackingIsHorzFlipped;
    BOOL trackingIsVertFlipped;
    BOOL showsGuides;
    BOOL snapsToGuides;
    BOOL showsTrackingKnob;
    NSArray *layoutManagers;
    IBViewEditorCanvasFrameController *frameController;
    NSView *trackedView;
    id measurementTarget;
    NSValue *pinnedKnob;
    CDUnknownBlockType willTrackHandler;
    CDUnknownBlockType didTrackHandler;
    NSNumber *forceBoundsIndicatorValue;
}

+ (void)setAppliesAutoResizingRulesWhileResizing:(BOOL)arg1;
+ (BOOL)appliesAutoResizingRulesWhileResizing;
@property(copy) NSNumber *forceBoundsIndicatorValue; // @synthesize forceBoundsIndicatorValue;
@property BOOL showsTrackingKnob; // @synthesize showsTrackingKnob;
@property(copy) CDUnknownBlockType didTrackHandler; // @synthesize didTrackHandler;
@property(copy) CDUnknownBlockType willTrackHandler; // @synthesize willTrackHandler;
@property(copy) NSValue *pinnedKnob; // @synthesize pinnedKnob;
@property BOOL snapsToGuides; // @synthesize snapsToGuides;
@property BOOL showsGuides; // @synthesize showsGuides;
@property(readonly) id measurementTarget; // @synthesize measurementTarget;
@property(readonly) NSView *trackedView; // @synthesize trackedView;
@property(readonly) IBViewEditorCanvasFrameController *frameController; // @synthesize frameController;
@property(copy) NSArray *layoutManagers; // @synthesize layoutManagers;
- (void).cxx_destruct;
- (void)trackWithEvent:(id)arg1;
- (void)clearGuides;
- (void)displayGuides;
- (id)layoutFrameAfterApplyingLayoutGuides:(struct CGRect)arg1;
- (void)placeSubviewInFrame:(struct CGRect)arg1 event:(id)arg2;
- (struct CGRect)snapToGuidedLayoutFrame:(struct CGRect)arg1 originalLayoutFrame:(struct CGRect)arg2;
- (void)resumeAutoResizingSubviews:(id)arg1;
- (id)stopAutoResizingSubviews;
- (BOOL)shouldAutoResizeSubviewsGivenEvent:(id)arg1;
- (BOOL)shouldApplyAutoResizingRulesWhileResizing;
- (void)pushTrackingIndicators;
- (CDUnion_31865a80)effectiveKnobInSpaceOfView:(id)arg1;
- (CDUnion_31865a80)initialKnobInSpaceOfView:(id)arg1;
- (id)canvasView;
- (id)editorCanvasFrame;
- (id)overlayDrawingHandler;
- (id)overlayView;
@property(readonly) IBDocument *document;
- (id)initWithTrackedView:(id)arg1 measurementTarget:(id)arg2 frameController:(id)arg3 knob:(CDUnion_31865a80)arg4;

@end

