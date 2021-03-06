//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSet.h"

@class NSMutableDictionary, NSMutableSet;

@interface XCPropertyConditionSet : NSSet
{
    NSMutableSet *_conditionSet;
    NSMutableDictionary *_flavorToConditionDict;
    unsigned long long _hashValue;
    unsigned long long _precedence;
}

+ (id)setWithConditionSubscripts:(id)arg1;
+ (id)setWithSet:(id)arg1;
+ (id)setWithObject:(id)arg1;
+ (id)setWithArray:(id)arg1;
+ (id)set;
- (id)description;
- (long long)compare:(id)arg1;
- (BOOL)matchesConditionSet:(id)arg1;
- (id)subscriptRepresentation;
- (unsigned long long)precedence;
- (id)conditionForFlavor:(id)arg1;
- (id)flavors;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)isEqualToSet:(id)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)anyObject;
- (id)allObjects;
- (id)objectEnumerator;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithConditionSubscripts:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;
- (id)initWithSet:(id)arg1;
- (id)initWithSetNoCopy:(id)arg1;

@end

