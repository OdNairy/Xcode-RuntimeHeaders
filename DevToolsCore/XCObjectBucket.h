//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXProjectItem.h>

@class NSMutableArray, NSString;

@interface XCObjectBucket : PBXProjectItem
{
    NSMutableArray *_objects;
    NSString *_name;
}

+ (id)archivableRelationships;
+ (id)archivableAttributes;
- (BOOL)isAncestorOf:(id)arg1;
- (void)flattenIntoArray:(id)arg1;
- (id)asFlattenedArray;
- (id)objects;
- (void)setObjects:(id)arg1;
- (BOOL)findAndRemoveObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)name;
- (void)setName:(id)arg1;

@end

