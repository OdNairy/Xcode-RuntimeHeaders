//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEProvisioningOnlineProfileState.h"
#import "IDEProvisioningProfile.h"

@class DVTProvisioningProfileRecord, NSDate, NSString;

@interface DVTProvisioningProfileRecordWrapper : NSObject <IDEProvisioningProfile, IDEProvisioningOnlineProfileState>
{
    NSString *_identifier;
    NSString *_name;
    DVTProvisioningProfileRecord *_profileRecord;
}

@property(readonly, nonatomic) DVTProvisioningProfileRecord *profileRecord; // @synthesize profileRecord=_profileRecord;
- (void).cxx_destruct;
- (BOOL)isActive;
@property(readonly, nonatomic) NSString *downloadIdentifier;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSString *portalSubPlatformIdentifier;
@property(readonly, nonatomic) NSString *portalPlatformIdentifier;
- (BOOL)isTeamProfile;
@property(readonly, nonatomic) id <IDEProvisioningTeam> team;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithProfileRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

