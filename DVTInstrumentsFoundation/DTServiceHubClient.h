//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DTServiceHubClient : NSObject
{
}

+ (id)localConnectionWithAuthorization:(struct AuthorizationOpaqueRef *)arg1 returningServerPid:(int *)arg2;
+ (id)localConnectionWithAuthorization:(struct AuthorizationOpaqueRef *)arg1;
+ (id)getServerBinaryPath;

@end

