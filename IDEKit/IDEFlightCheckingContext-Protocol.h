//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDeveloperAccount, NSError;

@protocol IDEFlightCheckingContext <NSObject>
@property BOOL shouldResolveLongRunningFlightChecks;
- (void)handleError:(NSError *)arg1;
- (BOOL)ensureValidAccount:(DVTDeveloperAccount *)arg1 error:(id *)arg2;
- (void)performBlockRequiringAccountAndTeamSelection:(void (^)(BOOL))arg1;
@end

