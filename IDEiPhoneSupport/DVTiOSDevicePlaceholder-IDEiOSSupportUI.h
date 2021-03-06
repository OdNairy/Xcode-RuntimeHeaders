//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTiOSDevicePlaceholder.h"

#import "DVTBasicDeviceUI.h"

@class DVTPlatform, NSArray, NSError, NSImage, NSSet, NSString;

@interface DVTiOSDevicePlaceholder (IDEiOSSupportUI) <DVTBasicDeviceUI>
@property(readonly) NSImage *image;

// Remaining properties
@property(readonly, getter=isAvailable) BOOL available;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) NSArray *deviceSummaryPropertyDictionaries;
@property(readonly) int deviceWindowCategory;
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
@property(readonly) BOOL showCompanionUI;
@property(readonly) Class superclass;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) NSError *unavailabilityError;
@end

