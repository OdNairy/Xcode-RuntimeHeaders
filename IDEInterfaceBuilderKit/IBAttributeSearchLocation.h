//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTPropertyListEncoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface IBAttributeSearchLocation : NSObject <NSCopying, DVTPropertyListEncoding>
{
    long long _offsetFromStart;
    long long _offsetFromEnd;
    NSString *_keyPath;
    NSDictionary *_locationData;
}

@property(readonly, copy, nonatomic) NSDictionary *locationData; // @synthesize locationData=_locationData;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (struct _NSRange)effectiveRangeForAttributeStringValue:(id)arg1;
- (id)locationWithRange:(struct _NSRange)arg1 forStringValue:(id)arg2;
- (id)locationWithZeroLengthAtRangeMax;
- (id)locationWithZeroLengthAtRangeMin;
- (id)locationWithRangeSpanningEntireAttributeStringValue;
- (id)locationWithOffsetFromStart:(long long)arg1 offsetFromEnd:(long long)arg2;
- (long long)compare:(id)arg1;
- (BOOL)hasKnownEnd;
- (BOOL)hasKnownStart;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)awakeWithPropertyList:(id)arg1;
- (void)encodeIntoPropertyList:(id)arg1;
- (id)initWithPropertyList:(id)arg1 owner:(id)arg2;
- (id)initWithKeyPath:(id)arg1 locationData:(id)arg2 offsetFromStart:(long long)arg3 offsetFromEnd:(long long)arg4;
- (id)initWithKeyPath:(id)arg1 locationData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

