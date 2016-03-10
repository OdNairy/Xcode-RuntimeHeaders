//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEiOSSupportCore/DVTBasicProxiediOSDevice.h>

@class DTDKRemoteDeviceToken, DVTProxiedDeviceSymbolsCoordinator;

@interface DVTProxiediOSDevice : DVTBasicProxiediOSDevice
{
    DTDKRemoteDeviceToken *_token;
    DVTProxiedDeviceSymbolsCoordinator *_symbolsCoordinator;
}

+ (id)keyPathsForValuesAffectingIsAvailable;
+ (id)keyPathsForValuesAffectingDeviceIsBusy;
+ (id)keyPathsForValuesAffectingNativeArchitecture;
+ (id)keyPathsForValuesAffectingProcessorDescription;
+ (id)keyPathsForValuesAffectingOperatingSystemVersionWithBuildNumber;
+ (id)keyPathsForValuesAffectingAdjustedOperatingSystemVersion;
+ (id)keyPathsForValuesAffectingOperatingSystemBuild;
+ (id)keyPathsForValuesAffectingOperatingSystemVersion;
+ (id)keyPathsForValuesAffectingModelCode;
+ (id)keyPathsForValuesAffectingModelUTI;
+ (id)keyPathsForValuesAffectingModelName;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingIdentifier;
@property(retain) DVTProxiedDeviceSymbolsCoordinator *symbolsCoordinator; // @synthesize symbolsCoordinator=_symbolsCoordinator;
@property(readonly) DTDKRemoteDeviceToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (BOOL)deviceSupportsBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (id)unavailabilityError;
- (BOOL)isAvailable;
- (_Bool)deviceIsBusy;
- (id)primaryInstrumentsServer;
- (id)supportedDeviceFamilies;
- (BOOL)isProxiedDevice;
- (id)nativeArchitecture;
- (id)platform;
- (BOOL)supportsProvisioning;
- (id)platformIdentifier;
- (id)processorDescription;
- (id)operatingSystemVersionWithBuildNumber;
- (id)adjustedOperatingSystemVersion;
- (id)operatingSystemBuild;
- (id)operatingSystemVersion;
- (id)modelCode;
- (id)modelUTI;
- (id)modelName;
- (id)name;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)proxiedDevices;
- (void)wasProxiedToDevice:(id)arg1;
- (id)initWithToken:(id)arg1;

@end
