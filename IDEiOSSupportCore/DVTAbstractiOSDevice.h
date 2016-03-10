//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTDevice.h"

#import "DVTBasiciOSDevice.h"

@class DVTPlatform, NSError, NSMapTable, NSSet, NSString;

@interface DVTAbstractiOSDevice : DVTDevice <DVTBasiciOSDevice>
{
    NSMapTable *_workspaceInstallsInProgress;
}

+ (id)nameForDeviceFamilyObject:(id)arg1;
- (void).cxx_destruct;
- (void)showTodayViewForExtensions:(id)arg1 pid:(int)arg2;
- (id)serviceHubProcessControlChannel;
- (id)iconImage;
- (id)deviceClassForDisplay;
- (BOOL)supportsBuildingThinnedResources;
- (void)uninstallProvisioningProfile:(id)arg1;
- (void)installProvisioningProfiles:(id)arg1;
- (BOOL)canInstallProfile:(id)arg1;
- (id)provisioningProfiles;
@property(readonly) _Bool deviceIsBusy;
- (id)taskForDeviceCommand:(id)arg1 withArguments:(id)arg2 error:(id *)arg3;
- (void)installActivityDidEndInWorkspace:(id)arg1 withError:(id)arg2;
- (void)installActivityInWorkspace:(id)arg1 operationInProgress:(id)arg2 details:(id)arg3;
- (void)installActivityWillBeginInWorkspace:(id)arg1 withProductName:(id)arg2;
- (void)setInstallProgress:(long long)arg1 path:(id)arg2;
- (void)setInstallProgress:(long long)arg1 text:(id)arg2;
- (long long)updateInstalledApplicationsWithResult:(id *)arg1;
- (long long)copyLocalPath:(id)arg1 toLocalPath:(id)arg2 sync:(BOOL)arg3 errorStringPtr:(id *)arg4;
- (long long)copyDevicePath:(id)arg1 toLocalPath:(id)arg2 sync:(BOOL)arg3 errorStringPtr:(id *)arg4;
- (long long)copyLocalPath:(id)arg1 toDevicePath:(id)arg2 sync:(BOOL)arg3 errorStringPtr:(id *)arg4;
- (long long)copyDevicePath:(id)arg1 toDevicePath:(id)arg2 sync:(BOOL)arg3 errorStringPtr:(id *)arg4;
- (id)copyDevicePath:(id)arg1 toLocalPath:(id)arg2 sync:(_Bool)arg3;
- (id)copyLocalPath:(id)arg1 toDevicePath:(id)arg2 sync:(_Bool)arg3;
- (id)copyLocalPath:(id)arg1 toLocalPath:(id)arg2 sync:(_Bool)arg3;
- (id)copyDevicePath:(id)arg1 toDevicePath:(id)arg2 sync:(_Bool)arg3;
- (id)_copyPath:(id)arg1 toPath:(id)arg2 sync:(_Bool)arg3 onDevice:(_Bool)arg4;
- (id)_transformPathForDevice:(id)arg1;
- (id)_additionalRsyncParameters;
- (id)_rsyncEnvironment;
- (id)copyLocalPath:(id)arg1 toLocalPath:(id)arg2 sync:(BOOL)arg3 withHardLinkDirs:(id)arg4;
- (id)systemBasePath;
- (id)softwareVersion;
- (void)createInstallWithName:(id)arg1 path:(id)arg2 buildables:(id)arg3 buildParameters:(id)arg4 killProcesses:(id)arg5 workspace:(id)arg6;
- (id)installSubstitutionPathsForDebugger;
- (_Bool)addUUIDToActiveInstalls:(id)arg1 errorString:(id *)arg2;
- (_Bool)copyBackActiveInstallsWithErrorString:(id *)arg1;
- (id)activeInstallsPath;
- (BOOL)canInstallBuildablesError:(id *)arg1;
- (id)preferredSDKForDeviceOptions:(id)arg1 error:(id *)arg2;
- (id)preferredArchitectureForDeviceOptions:(id)arg1 error:(id *)arg2;
- (id)supportedArchitecturesForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)deviceSupportsBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (long long)hostAuthenticatedOneLineCommand:(id)arg1 withArg:(id)arg2 result:(id *)arg3;
- (id)taskForHostCommand:(id)arg1 withArguments:(id)arg2 error:(id *)arg3;
- (long long)multiLineCommand:(id)arg1 onDevice:(_Bool)arg2 result:(id *)arg3;
- (long long)oneLineCommand:(id)arg1 onDevice:(_Bool)arg2 withArguments:(id)arg3 environment:(id)arg4 result:(id *)arg5;
- (id)multiLineCommand:(id)arg1 onDevice:(_Bool)arg2;
- (id)oneLineCommand:(id)arg1 onDevice:(_Bool)arg2 withArguments:(id)arg3 andEnvironment:(id)arg4;
- (id)_runTask:(id)arg1;
- (id)_runTask:(id)arg1 withOutputHandler:(CDUnknownBlockType)arg2;
- (id)supportedDeviceFamilies;
- (void)renameDevice:(id)arg1;
- (void)setName:(id)arg1;
- (_Bool)canRenameDevice;
- (BOOL)shouldPresentDeviceForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (_Bool)isWireless;
@property(readonly) _Bool isPasscodeLocked;
- (BOOL)isConcreteDevice;
- (BOOL)isGenericDevice;
- (id)initWithDeviceLocation:(id)arg1 extension:(id)arg2;

// Remaining properties
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *identifier;
@property(readonly) BOOL isProxiedDevice;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelName;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSString *nameForDeveloperPortal;
@property(readonly, copy) NSString *nativeArchitecture;
@property(readonly, copy) NSString *operatingSystemBuild;
@property(readonly, copy) NSString *operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy) NSString *platformIdentifier;
@property(readonly, copy) NSString *processorDescription;
@property(readonly, copy) NSSet *proxiedDevices;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) NSError *unavailabilityError;

@end

