//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"

@class NSDictionary, NSSet, NSString;

@interface IBAutolayoutStatus : NSObject <IBBinaryArchiving>
{
    NSDictionary *_ambiguousViewsToAmbiguityGroups;
    NSDictionary *_lazyConflictingConstraintsToConflictingConstraintSets;
    NSSet *_lazyAllConflictingConstraintAbstractions;
    NSSet *_viewsAffectedByConflictingConstraintsSet;
    NSDictionary *_viewsToLayoutFrames;
    NSSet *_lazyMisplacedOnlyStatusSet;
    NSSet *_conflictingConstraintSets;
    NSSet *_ambiguousViewStatusGroups;
    NSDictionary *_misplacedViewsToMisplacementStatus;
    NSSet *_objects;
}

@property(readonly, nonatomic) NSSet *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSDictionary *viewsToLayoutFrames; // @synthesize viewsToLayoutFrames=_viewsToLayoutFrames;
@property(readonly, nonatomic) NSDictionary *misplacedViewsToMisplacementStatus; // @synthesize misplacedViewsToMisplacementStatus=_misplacedViewsToMisplacementStatus;
@property(readonly, nonatomic) NSSet *ambiguousViewStatusGroups; // @synthesize ambiguousViewStatusGroups=_ambiguousViewStatusGroups;
@property(readonly, nonatomic) NSSet *conflictingConstraintSets; // @synthesize conflictingConstraintSets=_conflictingConstraintSets;
- (void).cxx_destruct;
- (BOOL)containsAnyReferenceToObject:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)enumerateMisplacedViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAmbiguousViewsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSSet *misplacedOnlyStatusSet; // @synthesize misplacedOnlyStatusSet=_lazyMisplacedOnlyStatusSet;
- (BOOL)isViewMisplaced:(id)arg1;
- (BOOL)isViewUninitialized:(id)arg1;
- (BOOL)isViewAmbiguous:(id)arg1;
- (BOOL)isViewAffectedByConflictingConstraints:(id)arg1;
- (void)enumerateAmbiguityGroupsForView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)misplacementStatusForView:(id)arg1;
- (id)ambiguityStatusForView:(id)arg1;
- (struct CGRect)layoutFrameForView:(id)arg1;
- (BOOL)hasLayoutFrameForView:(id)arg1;
- (id)conflictingConstraintSetForConstraint:(id)arg1;
- (BOOL)isConflictingConstraintAbstraction:(id)arg1;
- (BOOL)isConflictingConstraint:(id)arg1;
@property(readonly, nonatomic) BOOL hasIssues;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAutolayoutStatus:(id)arg1;
- (BOOL)isEqualToAutolayoutStatus:(id)arg1 ignoring:(unsigned long long)arg2;
@property(readonly) unsigned long long hash;
- (id)statusByUnioningWithStatuses:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithConflictingConstraintSets:(id)arg1 ambiguousViewStatusGroups:(id)arg2 misplacedViewsToMisplacementStatus:(id)arg3 viewsToLayoutFrames:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

