//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTSimpleSerializer.h>

@class NSMutableArray;

@interface DVTSimplePlainTextSerializer : DVTSimpleSerializer
{
    NSMutableArray *_knownClasses;
}

- (void).cxx_destruct;
- (void)encodeObjectList:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeDouble:(double)arg1;
- (void)encodeFloat:(float)arg1;
- (void)encodeInteger:(unsigned long long)arg1;
- (id)init;

@end

