/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBPrimarySceneObject-Protocol.h"
#import "NSCoding-Protocol.h"

@class IBSimulatedMetricsContainer, NSArray, NSString, NSView;

@interface IBAbstractViewController : NSObject <IBPrimarySceneObject, NSCoding>
{
}

@property(copy, nonatomic) IBSimulatedMetricsContainer *inheritedSimulatedMetrics;
@property(copy) NSArray *storyboardSegueTemplates;
@property(copy) NSString *explicitStoryboardIdentifier;
- (void)setNibName:(id)arg1;
- (id)nibName;
@property(retain, nonatomic) NSView *view;
- (struct CGSize)effectiveSimulatedViewSize;
- (id)effectiveStoryboardIdentifierPrefix;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ibShortDisplayName;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewDetailWithSegue:(id)arg2;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewMasterWithSegue:(id)arg2;
- (BOOL)ibIsValidPushReceiver;
- (BOOL)ibInspectedIsNotInStoryboard;
- (BOOL)ibInspectedIsInStoryboard;
- (BOOL)ibSegueTemplatesAreTopLevel;
- (void)ibResizeToEffectiveSimulatedSizeForSceneTreeDragImageNode;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (BOOL)ibSupportsMultipleSeguesFromTrigger:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibStoryboardPrepareForSeparatingChild:(id)arg1 intoCompilationUnit:(id)arg2;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (struct CGSize)effectiveSimulatedContentSize;
- (id)ibEditorViewWithSuggestedSize:(struct CGSize)arg1 forDocument:(id)arg2;
- (void)ibWillRemoveFromDocument:(id)arg1 previouslyMemberOfGroup:(id)arg2;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibDidBecomeControllerForCompilationGroup;
- (void)ibAddStoryboardSegueTemplate:(id)arg1;
- (void)ibWillResignSourceControllerForSegue:(id)arg1;
- (void)ibDidBecomeSourceControllerForSegue:(id)arg1;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (void)ibEffectiveSimulatedMetricsDidChange;
- (id)ibImageForOwnedScene;
- (id)ibEffectiveStoryboardIdentifier;
- (void)ibVerifySimulatedMetricsWithDocument:(id)arg1;
- (id)ibExplanatoryTextForEditor;
- (id)ibSubtitleForEditor;
- (id)ibTitleForEditor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
