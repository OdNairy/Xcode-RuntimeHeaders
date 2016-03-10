//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPlatform, DVTPortalProfileType, NSString;

@interface DVTPortalPlatform : NSObject
{
    NSString *_portalIdentifier;
    DVTPlatform *_platform;
    NSString *_developmentProfileTypeIdentifier;
}

+ (id)portalPlatformWithPlatformIdentifier:(id)arg1;
+ (id)portalPlatformWithIdentifier:(id)arg1;
+ (id)_platformIdentifierToPortalPlatformMap;
+ (id)_portalIdentifierToPortalPlatformMap;
+ (id)_portalPlatforms;
@property(readonly, nonatomic) NSString *developmentProfileTypeIdentifier; // @synthesize developmentProfileTypeIdentifier=_developmentProfileTypeIdentifier;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) NSString *portalIdentifier; // @synthesize portalIdentifier=_portalIdentifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) DVTPortalProfileType *developmentProfileType;
- (id)initWithPlatform:(id)arg1 portalIdentifier:(id)arg2 developmentProfileTypeIdentifier:(id)arg3;

@end

