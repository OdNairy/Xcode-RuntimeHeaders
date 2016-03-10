//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEiOSSupportCore/DVTAbstractiOSDevice.h>

#import "DVTDeviceApplicationProvider.h"
#import "IDERunDestinationFallbackSelectorDeviceInfo.h"
#import "NSFileManagerDelegate.h"
#import "XCDTMobileIS_XPCDebuggingProcotol.h"

@class DTAssetProviderService, DTXChannel, DTXConnection, DVTPlatform, DVTSimulatorApplication, NSArray, NSDictionary, NSNumber, NSObject<OS_dispatch_semaphore>, NSSet, NSString, SimDevice, SimDeviceType;

@interface DVTiPhoneSimulator : DVTAbstractiOSDevice <NSFileManagerDelegate, IDERunDestinationFallbackSelectorDeviceInfo, DVTDeviceApplicationProvider, XCDTMobileIS_XPCDebuggingProcotol>
{
    id <DVTCancellable> _deviceNotificationToken;
    id <DVTCancellable> _deviceSetNotificationToken;
    NSString *_displayOrder;
    struct __CFDictionary *_xpcStdoutFDForPid;
    NSString *_recordedFramesBacktraceRecordingDylibPath;
    NSSet *_applications;
    NSDictionary *_applicationsDict;
    DTXConnection *_instrumentsConnection;
    NSObject<OS_dispatch_semaphore> *_instrumentsConnectionSemaphore;
    int _simulatorPID;
    DVTPlatform *_platform;
    NSSet *_proxiedDevices;
    SimDevice *_device;
    DVTSimulatorApplication *_simulatorApplication;
    DTXChannel *_xpcAttachServiceChannel;
    DTXChannel *_xpcProxyAttachServiceChannel;
    DTAssetProviderService *_assetProvider;
}

+ (id)keyPathsForValuesAffectingState;
+ (id)simulatorWithDevice:(id)arg1;
+ (void)initialize;
+ (void)_trackPid:(int)arg1 forDevice:(id)arg2 launchService:(id)arg3;
+ (void)cleanUpSessionMap;
@property(retain) DTAssetProviderService *assetProvider; // @synthesize assetProvider=_assetProvider;
@property(retain) DTXChannel *xpcProxyAttachServiceChannel; // @synthesize xpcProxyAttachServiceChannel=_xpcProxyAttachServiceChannel;
@property(retain) DTXChannel *xpcAttachServiceChannel; // @synthesize xpcAttachServiceChannel=_xpcAttachServiceChannel;
@property int simulatorPID; // @synthesize simulatorPID=_simulatorPID;
@property(readonly) DVTSimulatorApplication *simulatorApplication; // @synthesize simulatorApplication=_simulatorApplication;
@property(retain) SimDevice *device; // @synthesize device=_device;
- (id)platform;
- (void).cxx_destruct;
- (id)launchApplicationWithBundleIdentifier:(id)arg1 withArguments:(id)arg2 environment:(id)arg3 options:(id)arg4;
- (BOOL)canInstallApplication;
- (id)runExecutableAtPath:(id)arg1 withArguments:(id)arg2 environment:(id)arg3 options:(id)arg4 terminationHandler:(CDUnknownBlockType)arg5;
- (BOOL)canRunExecutables;
- (void)stopDebuggingXPCServices:(id)arg1 forPairedDevice:(BOOL)arg2;
- (void)xpcServiceObserved:(id)arg1 withProcessIdentifier:(int)arg2 requestedByProcess:(int)arg3 options:(id)arg4;
- (void)outputReceived:(id)arg1 fromProcess:(int)arg2 atTime:(unsigned long long)arg3;
- (void)_debugXPCServices:(id)arg1 onChannel:(id)arg2 completionSemaphore:(id)arg3;
- (void)debugXPCServices:(id)arg1 onPairedDevice:(BOOL)arg2 completionSemaphore:(id)arg3;
- (id)primaryInstrumentsServer;
- (BOOL)installApplicationWithLaunchSession:(id)arg1 error:(id *)arg2;
- (id)_installedPathForBundleIdentifier:(id)arg1;
- (id)makeTransportForTestManagerService:(id *)arg1;
- (id)_waitForSimLaunchdToLoadENVAndReturnTestConnectionSocketPath:(id *)arg1;
- (BOOL)supportsTestManagerDaemon;
- (id)startAssetServerForApplicationAtPath:(id)arg1;
- (id)testArchitectureForBuildableProduct:(id)arg1 withBuildParameters:(id)arg2;
- (id)_availableArchitecturesForArchitecture:(id)arg1;
- (id)deviceForRunningUnitTestsWithHost:(id)arg1 error:(id *)arg2;
- (BOOL)testingShouldAttachDebuggerWithHost:(id)arg1;
- (id)testHostPathForBuildableProduct:(id)arg1 buildParameters:(id)arg2 outError:(id *)arg3;
- (id)taskForDeviceCommand:(id)arg1 withArguments:(id)arg2 error:(id *)arg3;
- (id)systemBasePath;
- (void)stopLocationSimulation;
- (void)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2;
@property(readonly, copy) NSString *description;
- (BOOL)attachedToTarget:(id)arg1 launchService:(id)arg2 error:(id *)arg3;
- (BOOL)launchSimulatedExecutable:(id)arg1 launchService:(id)arg2 error:(id *)arg3;
- (BOOL)_launchSimulatorAppForLaunchSession:(id)arg1 error:(id *)arg2;
- (_Bool)_launchSimulatorAppWithExternalDisplayType:(long long)arg1 andError:(id *)arg2;
- (_Bool)_launchSimulatorAppWithError:(id *)arg1;
- (void)transferDirectionsFileToBundlePath:(id)arg1 launchService:(id)arg2;
- (void)uploadApplicationDataToBundlePath:(id)arg1 launchService:(id)arg2;
- (void)presentErrorWithMessageText:(id)arg1 informativeText:(id)arg2;
- (id)simulatorDirectoriesForAppName:(id)arg1;
- (id)effectiveSDKVersion;
- (BOOL)fileManager:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)shouldProcessPath:(id)arg1;
@property(readonly) NSSet *systemApplications;
@property(readonly) NSSet *applications;
- (void)_updateApplications;
- (void)_launchSimulatorAndUpdateApplicationsWhenReady;
- (id)deviceSpecificOverridingPropertiesForBuildable:(id)arg1 withBaselineParameters:(id)arg2;
- (id)executionDisplayName;
- (id)supportedSDKsForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)shouldPresentDeviceForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)canBeDefaultDeviceForBuildable:(id)arg1 buildParameters:(id)arg2;
- (id)softwareVersion;
- (void)setDisplayOrder:(id)arg1;
- (id)displayOrder;
@property(readonly, copy) NSArray *supportedDeviceFamilies;
- (id)deviceType;
- (BOOL)isAvailable;
- (id)supportedArchitectures;
- (id)nativeArchitecture;
- (id)operatingSystemVersionWithBuildNumber;
- (id)operatingSystemBuild;
- (id)operatingSystemVersion;
- (void)renameDevice:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (BOOL)canIgnore;
- (BOOL)canRename;
- (BOOL)isProxiedDevice;
- (id)proxiedDevices;
- (BOOL)canBeWatchCompanion;
- (id)modelCode;
@property(readonly, nonatomic) NSString *ide_fallbackSelectorDeviceGroupingFamily;
- (id)modelUTI;
- (id)modelName;
- (void)downloadOptimizationProfilesFromBundleIdentifier:(id)arg1 orPaths:(id)arg2 toFilePath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)supportsPGOReturningError:(id *)arg1;
- (BOOL)supportsDisplayScaleOption;
- (BOOL)supportsRoutingCoverageFile;
- (void)performUbiquityFetchEvent;
- (BOOL)canPerformUbiquityFetchEvent;
- (void)performFetchEventForPID:(int)arg1;
- (id)recordedFramesBacktraceRecordingDylibPath;
- (id)recordedFramesLibdispatchIntrospectionDylibPath;
- (unsigned long long)supportsFetchEvents;
- (BOOL)supportsLocationSimulation;
- (unsigned long long)supportedLaunchOptions;
- (BOOL)supportsApplicationDataUploading;
- (id)launchApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)launchApplicationWithBundleIdentifier:(id)arg1;
- (id)spawnExecutableAtPath:(id)arg1 withOptions:(id)arg2 andTerminationHandler:(CDUnknownBlockType)arg3;
- (id)spawnExecutableAtPath:(id)arg1 withOptions:(id)arg2;
- (id)applicationIsInstalledWithBundleIdentifier:(id)arg1;
- (id)uninstallApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)uninstallApplicationWithBundleIdentifier:(id)arg1;
- (id)installApplicationAtPath:(id)arg1 withOptions:(id)arg2;
- (id)installApplicationAtPath:(id)arg1;
- (id)restoreContentsAndSettingsFrom:(id)arg1;
- (id)eraseContentsAndSettings;
- (id)shutdown;
- (id)bootWithOptions:(id)arg1;
- (id)boot;
@property(readonly) unsigned long long state;
@property(readonly) SimDeviceType *deviceInfo;
- (id)shutDownDevice;
- (id)startUpDevice;
- (unsigned long long)startupState;
- (BOOL)canStartUpAndShutDown;
- (void)dealloc;
@property(readonly) NSNumber *simulatedDeviceFamily;
- (_Bool)_canStartSession:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

