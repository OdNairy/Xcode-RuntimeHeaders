//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDeveloperAccount, NSArray, NSString;

@interface DVTSigningIdentitySnapshot : NSObject
{
    NSString *_teamID;
    DVTDeveloperAccount *_account;
    NSArray *_signingIdentities;
}

+ (id)localSigningIdentitiesForTeamID:(id)arg1;
@property(copy, nonatomic) NSArray *signingIdentities; // @synthesize signingIdentities=_signingIdentities;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
- (void).cxx_destruct;

@end

