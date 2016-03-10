//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayerHostingView.h"

#import "DVTInvalidation.h"
#import "IDEActivityPopUpContentLayerControllerDelegate.h"

@class DVTDelayedInvocation, DVTStackBacktrace, IDEActivityPopUpContentLayerController, IDEActivityPopUpWindowController, NSString;

@interface IDEActivityPopUpContentView : DVTLayerHostingView <IDEActivityPopUpContentLayerControllerDelegate, DVTInvalidation>
{
    IDEActivityPopUpContentLayerController *_contentController;
    IDEActivityPopUpWindowController *_popUpController;
    DVTDelayedInvocation *_heightInvocation;
    BOOL _setUp;
    double _spaceNeededForActionIndicator;
}

+ (void)initialize;
@property(nonatomic) double spaceNeededForActionIndicator; // @synthesize spaceNeededForActionIndicator=_spaceNeededForActionIndicator;
@property(readonly) IDEActivityPopUpWindowController *popUpController; // @synthesize popUpController=_popUpController;
- (void).cxx_destruct;
- (void)animateToBoundsHeight:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)animateCloseToFinalBoundsHeight:(double)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)animateOpenToPreferredHeightFromBoundsHeight:(double)arg1;
- (id)rootLayer;
- (void)popUpContentLayerController:(id)arg1 didChangePreferredHeightTo:(double)arg2;
- (void)popUpContentLayerController:(id)arg1 displayedReportCountDidChangeTo:(unsigned long long)arg2;
- (void)doneButtonWasClickedInPopUpContentLayerController:(id)arg1;
@property(readonly) double preferredHeight;
- (double)contentHeightForBoundsHeight:(double)arg1;
- (double)boundsHeightForContentHeight:(double)arg1;
@property(readonly) CDStruct_bf6d4a14 contentInset;
- (void)primitiveInvalidate;
- (void)viewDidMoveToWindow;
- (id)initWithPopUpController:(id)arg1 initialDataSource:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

