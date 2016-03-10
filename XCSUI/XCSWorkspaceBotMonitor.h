//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEContinuousIntegrationBotMonitor.h"

@class DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, IDEWorkspace, NSArray, NSMapTable, NSMutableArray, NSString;

@interface XCSWorkspaceBotMonitor : NSObject <DVTInvalidation, IDEContinuousIntegrationBotMonitor>
{
    BOOL _filterBotsToWorkspace;
    DVTNotificationToken *_scmNotificationToken;
    DVTNotificationToken *_maintenanceTasksEncounteredToken;
    DVTObservingToken *_serviceManagerServicesObservingToken;
    NSMapTable *_servicesConnectedObservers;
    NSMutableArray *_maintenanceTaskPollTimers;
    IDEWorkspace *_workspace;
    NSArray *_bots;
    NSArray *_serversWithMaintenanceTasks;
}

+ (long long)resultForIntegrationID:(id)arg1;
+ (long long)currentStepForIntegrationID:(id)arg1;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (id)_activityStreamLogAspect;
+ (id)_workspaceBotMonitorLogAspect;
+ (void)initialize;
@property(copy, nonatomic) NSArray *serversWithMaintenanceTasks; // @synthesize serversWithMaintenanceTasks=_serversWithMaintenanceTasks;
@property(copy, nonatomic) NSArray *bots; // @synthesize bots=_bots;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)_performTransactionalUpdateBlockOnMainQueue:(CDUnknownBlockType)arg1;
- (void)postAlertsForIntegrationID:(id)arg1 service:(id)arg2;
- (void)updateBotClientsInService:(id)arg1;
- (void)filterBotsToWorkspace:(BOOL)arg1;
- (void)_updateBotsFromService:(id)arg1 botNavigablesNeedRefresh:(BOOL)arg2;
- (void)_updateBotsForServiceInMaintenanceMode:(id)arg1;
- (void)startObservingServiceManager;
- (void)primitiveInvalidate;
- (void)_pollServiceForMaintenaceTasks:(id)arg1;
- (void)pollServiceForMaintenaceTasks:(id)arg1;
- (void)_cancelMaintenanceTasksPollingOnService:(id)arg1;
- (id)initWithWorkspace:(id)arg1;
- (id)init;
- (void)_commonInit;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

