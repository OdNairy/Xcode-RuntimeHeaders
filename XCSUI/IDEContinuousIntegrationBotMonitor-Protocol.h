//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTInvalidation.h"
#import "NSObject.h"

@class NSArray;

@protocol IDEContinuousIntegrationBotMonitor <NSObject, DVTInvalidation>
@property(readonly, copy, nonatomic) NSArray *serversWithMaintenanceTasks;
@property(readonly, copy, nonatomic) NSArray *bots;
- (void)updateBotClientsInService:(id)arg1;
- (void)filterBotsToWorkspace:(BOOL)arg1;
@end

