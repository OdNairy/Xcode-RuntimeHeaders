//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPlatform, DVTPortalPlatform, NSString;

@interface DVTPortalMembership : NSObject
{
    NSString *_portalID;
    DVTPortalPlatform *_portalPlatform;
}

@property(retain, nonatomic) DVTPortalPlatform *portalPlatform; // @synthesize portalPlatform=_portalPlatform;
@property(copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) DVTPlatform *platform;

@end

