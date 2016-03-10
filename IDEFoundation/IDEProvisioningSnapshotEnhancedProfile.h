//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEEnhancedProvisioningProfile.h"

@class NSString;

@interface IDEProvisioningSnapshotEnhancedProfile : NSObject <IDEEnhancedProvisioningProfile>
{
    unsigned long long _state;
    id <IDEProvisioningTeam> _team;
    id <IDEProvisioningLocalProfileState> _localState;
    id <IDEProvisioningOnlineProfileState> _onlineState;
    id <IDEProvisioningProfile> _profile;
}

@property(readonly, nonatomic) id <IDEProvisioningProfile> profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) id <IDEProvisioningOnlineProfileState> onlineState; // @synthesize onlineState=_onlineState;
@property(readonly, nonatomic) id <IDEProvisioningLocalProfileState> localState; // @synthesize localState=_localState;
- (id)team;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)expirationDate;
- (id)portalSubPlatformIdentifier;
- (id)portalPlatformIdentifier;
- (BOOL)isTeamProfile;
- (id)name;
- (id)identifier;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToEnhancedProfile:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithTeam:(id)arg1 profile:(id)arg2 state:(unsigned long long)arg3 localState:(id)arg4 onlineState:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
