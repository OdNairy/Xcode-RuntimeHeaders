//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPlatform, DVTPortalProfileType, DVTPortalTeam, NSDictionary, NSString;

@interface DVTPortalProfileCharacteristics : NSObject
{
    DVTPortalTeam *_team;
    DVTPortalProfileType *_profileType;
    NSString *_bundleID;
    NSDictionary *_features;
    DVTPlatform *_platform;
}

@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSDictionary *features; // @synthesize features=_features;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) DVTPortalProfileType *profileType; // @synthesize profileType=_profileType;
@property(readonly, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTeam:(id)arg1 type:(id)arg2 bundleID:(id)arg3 featuresToValues:(id)arg4 platform:(id)arg5;

@end

