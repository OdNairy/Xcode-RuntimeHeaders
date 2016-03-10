//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDebugBarContentProvider.h"

#import "DVTDelayedMenuButtonDelegate.h"
#import "NSMenuDelegate.h"

@class DVTDelayedMenuButton, DVTObservingToken, DVTStepperTextField, IDEPlaygroundDocument, IDEPlaygroundEditor, NSMenuItem, NSSlider, NSString, NSView;

@interface IDEPlaygroundsDebugBarContentProvider : IDEDebugBarContentProvider <DVTDelayedMenuButtonDelegate, NSMenuDelegate>
{
    DVTDelayedMenuButton *_runStopDelayedMenuButton;
    NSSlider *_globalTimeSlider;
    DVTStepperTextField *_timeTextField;
    NSMenuItem *_automaticMenuItem;
    NSMenuItem *_manualMenuItem;
    NSView *_edgeToRunModeSpacer;
    NSView *_runModeToSliderSpacer;
    NSView *_sliderTimeFieldSpacer;
    NSView *_textFieldEdgeSpacer;
    DVTObservingToken *_playgroundDocumentObserver;
    DVTObservingToken *_playgroundExecutingObserver;
    DVTObservingToken *_playgroundExecuteOnSourceChangesObserver;
    DVTObservingToken *_playgroundTimelineScrubberEnabledObserver;
}

+ (id)keyPathsForValuesAffectingTimelineSrubberValue;
+ (id)keyPathsForValuesAffectingTimelineScrubberMaxValue;
+ (id)keyPathsForValuesAffectingTimelineScrubberMinValue;
+ (id)keyPathsForValuesAffectingTimelineScrubberShouldUseDefaultValues;
+ (id)keyPathsForValuesAffectingTimelineScrubberShouldBeEnabled;
+ (id)keyPathsForValuesAffectingPlaygroundDocument;
- (void).cxx_destruct;
- (void)_updatePlaygroundTimelineScrubberEnabledObservation;
- (void)_updatePlaygroundExecuteOnSourceChangesObservation;
- (void)_updatePlaygroundDocumentExecutionObservation;
- (void)_reinstallDebugBarControlViews;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)globalTimeSliderAction:(id)arg1;
- (id)delayedMenuButton:(id)arg1 willSetCurrentMenuItem:(id)arg2;
- (void)_runStopButtonAction:(id)arg1;
- (void)_updateRunModeMenuItems;
- (void)_updateRunButton;
- (void)menuWillOpen:(id)arg1;
- (BOOL)prefersDebugBarToAlwaysBeShown;
@property double timelineSrubberValue;
@property(readonly) double timelineScrubberMaxValue;
@property(readonly) double timelineScrubberMinValue;
@property(readonly) BOOL timelineScrubberShouldUseDefaultValues;
@property(readonly) BOOL timelineScrubberShouldBeEnabled;
@property(readonly) IDEPlaygroundDocument *playgroundDocument;
@property(readonly) IDEPlaygroundEditor *playgroundEditor;
- (id)_createSpacerView:(double)arg1;
- (id)_createTimeTextField;
- (id)_createTimeScrubber;
- (id)_createRunStopDelayedMenuButton;
- (BOOL)validateMenuItem:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

