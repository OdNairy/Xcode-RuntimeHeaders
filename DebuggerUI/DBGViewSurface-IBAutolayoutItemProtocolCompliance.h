//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBGViewSurface.h"

#import "IBAutolayoutItem.h"

@class NSArray, NSObject<IBAutolayoutItem>, NSSet, NSString;

@interface DBGViewSurface (IBAutolayoutItemProtocolCompliance) <IBAutolayoutItem>
@property(readonly, nonatomic) BOOL ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
@property(nonatomic) BOOL ibExternalTranslatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(nonatomic) struct CGRect ibLayoutFrame;
@property(readonly, nonatomic) double ibShadowedFirstBaselineOffsetFromTop;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) CDStruct_d2b197d1 ibLayoutInset;
@property(nonatomic) BOOL translatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) NSArray *subviews;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (id)ibNextAncestorItemForFindingReferencingConstraintsInLayoutInfo:(id)arg1;
- (void)ibInvalidateAutoresizingMaskConstraints;
- (void)setNeedsUpdateConstraints;
- (void)ibDidCreateRuntimeConstraint:(id)arg1 referencingItem:(id)arg2 context:(id)arg3;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(id)arg4;
- (unsigned long long)ibAmbiguityStatusForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (BOOL)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (BOOL)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (unsigned long long)ibAllowedSiblingEdgesForGuidesToSelectedItems:(id)arg1;
- (BOOL)ibAllowsSiblingGuidesToSelectedItems:(id)arg1 ofType:(long long)arg2;
- (BOOL)ibShouldConsiderGuidesToEdgeWithAttribute:(unsigned long long)arg1 fromEdgeWithAttribute:(unsigned long long)arg2 ofSelectedItems:(id)arg3;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
- (void)exerciseAmbiguityInLayout;
- (id)constraintsAffectingLayoutForOrientation:(unsigned long long)arg1;
- (BOOL)ib_hasAmbiguousLayout;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentCompressionResistancePriorityForOrientation:(unsigned long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentHuggingPriorityForOrientation:(unsigned long long)arg1;
- (void)removeConstraints:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)addConstraints:(id)arg1;
- (void)addConstraint:(id)arg1;
@property(readonly, nonatomic) NSArray *constraints;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 fromView:(struct NSView *)arg2;
- (CDUnion_42e99c75)convertKnobPosition:(CDUnion_42e99c75)arg1 toView:(struct NSView *)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 fromView:(struct NSView *)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 toView:(struct NSView *)arg2;
- (CDStruct_d2b197d1)convertInset:(CDStruct_d2b197d1)arg1 fromView:(struct NSView *)arg2;
- (CDStruct_d2b197d1)convertInset:(CDStruct_d2b197d1)arg1 toView:(struct NSView *)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(struct NSView *)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(struct NSView *)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 fromView:(struct NSView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(struct NSView *)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 fromItem:(id)arg2;
- (CDUnion_42e99c75)ib_convertKnobPosition:(CDUnion_42e99c75)arg1 toItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 fromItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 toItem:(id)arg2;
- (CDStruct_d2b197d1)ib_convertInset:(CDStruct_d2b197d1)arg1 fromItem:(id)arg2;
- (CDStruct_d2b197d1)ib_convertInset:(CDStruct_d2b197d1)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 fromItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 toItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 fromItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 fromItem:(id)arg2;
- (id)ibEffectiveRootCoordinateSystemForConversions;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1;
- (BOOL)ibSupportsLayoutMargins;
- (struct _IBEdgeInsets)ibLayoutMargins;
- (BOOL)ibSupportsFirstBaseline;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_42e99c75)arg2;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(id)arg2;
- (void)addSubview:(id)arg1;
- (void)removeFromSuperview;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) long long ibBaselineCount;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 toItem:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toOverlayView:(id)arg2;
- (id)ibEffectiveWindowForConversions;
@property(readonly, nonatomic, getter=isFlipped) BOOL flipped;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;

// Remaining properties
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id window;
@end

