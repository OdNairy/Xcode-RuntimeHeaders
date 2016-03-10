//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAbstractConnectionEndPointHandler.h>

@class NSObject<IBIDEAutolayoutItem>;

@interface IBConstraintEndPointHandler : IBAbstractConnectionEndPointHandler
{
    NSObject<IBIDEAutolayoutItem> *_fromItem;
    NSObject<IBIDEAutolayoutItem> *_toItem;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (void)setIncludeCenteringConstraintsForUsingCurrentConstants:(BOOL)arg1;
+ (BOOL)includeCenteringConstraintsForUsingCurrentConstants;
+ (void)setThresholdForUsingCurrentConstantForAlignmentConstraints:(id)arg1;
+ (id)thresholdForUsingCurrentConstantForAlignmentConstraints;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *toItem; // @synthesize toItem=_toItem;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *fromItem; // @synthesize fromItem=_fromItem;
- (void).cxx_destruct;
- (id)constraintsForConnectingFromObject:(id)arg1;
- (void)_addAspectRatioConstraintsToContext:(id)arg1;
- (void)_addEqualSizeConstraintsToContext:(id)arg1;
- (void)_addSiblingAlignmentConstraintsToContext:(id)arg1;
- (void)__addSiblingAlignmentConstraintMenuItemToContext:(id)arg1 attribute:(unsigned long long)arg2 overriddingTitle:(id)arg3 isAlternateItem:(BOOL)arg4 automaticallyAddCurrentConstantAlternateItem:(BOOL)arg5;
- (void)_addAncestorCenterAlignmentConstraintsToContext:(id)arg1;
- (void)__addAncestorCenterAlignmentConstraintMenuItemToContext:(id)arg1 attribute:(unsigned long long)arg2;
- (void)_addAncestorSpacingConstraintsToContext:(id)arg1;
- (void)__addAncestorSpacingConstraintToContext:(id)arg1 forAttribute:(unsigned long long)arg2;
- (void)___addAncestorSpacingConstraintToContext:(id)arg1 forAttribute:(unsigned long long)arg2 ofEffectiveAncestorTargetedItem:(id)arg3;
- (void)___addAncestorSpacingConstraintToContext:(id)arg1 forAttribute:(unsigned long long)arg2 effectiveAncestor:(id)arg3 effectiveDescendant:(id)arg4 onlyAddSingleItemAndAddAsAlternateOnly:(BOOL)arg5;
- (void)_addExplicitSizeConstraintsToContext:(id)arg1;
- (void)_addSiblingSpacingConstraintsToContext:(id)arg1;
- (id)_connectionContextForPossibleConstraints;
- (CDStruct_92d5623e)_computeLineOrientation;
- (id)initWithDocument:(id)arg1 fromItem:(id)arg2 atPoint:(struct CGPoint)arg3 toItem:(id)arg4 atPoint:(struct CGPoint)arg5;

@end

