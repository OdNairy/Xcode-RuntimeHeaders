//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface DVTServicesDeserializationContext : NSObject
{
    NSMutableArray *_typeStack;
    NSMutableArray *_keyStack;
}

- (void).cxx_destruct;
- (id)errorForInvalidData;
- (id)errorForUnexpectedClass:(Class)arg1 expectedClass:(Class)arg2;
- (id)errorForMissingValueForKey:(id)arg1;
- (id)_typeBacktraceDescription;
- (void)unpackKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)deserializeType:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

