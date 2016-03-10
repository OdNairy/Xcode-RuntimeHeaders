//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

#import "NSCopying.h"

@class NSPredicate, XCSPlatform;

@interface XCSDeviceFilter : XCSObject <NSCopying>
{
}

@property(readonly) NSPredicate *predicate;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_validatePlatform:(id)arg1 filterType:(unsigned long long)arg2 architectureType:(unsigned long long)arg3 validationErrors:(id *)arg4;
- (id)initWithPlatform:(id)arg1 filterType:(unsigned long long)arg2 architectureType:(unsigned long long)arg3 validationErrors:(id *)arg4;

// Remaining properties
@property unsigned long long architectureType; // @dynamic architectureType;
@property unsigned long long filterType; // @dynamic filterType;
@property XCSPlatform *platform; // @dynamic platform;

@end

