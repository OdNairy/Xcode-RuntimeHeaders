//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSString, XCSBotSCMBlueprint, XCSDeviceSpecification;

@interface XCSBotConfiguration : XCSObject
{
    XCSBotSCMBlueprint *sourceControlBlueprint;
    NSString *_userDescription;
}

+ (id)botConfigurationWithSchemeName:(id)arg1 buildConfiguration:(id)arg2 builtFromClean:(unsigned long long)arg3 performsAnalyzeAction:(BOOL)arg4 performsTestAction:(BOOL)arg5 performsArchiveAction:(BOOL)arg6 codeCoveragePreference:(unsigned long long)arg7 exportsProductFromArchive:(BOOL)arg8 triggers:(struct NSArray *)arg9 sourceControlBlueprint:(id)arg10 testingDestinationType:(unsigned long long)arg11 testingDeviceIDs:(id)arg12 deviceSpecification:(id)arg13 scheduleType:(unsigned long long)arg14 periodicScheduleInterval:(unsigned long long)arg15 weeklyScheduleDay:(long long)arg16 hourOfIntegration:(unsigned long long)arg17 minutesAfterHourToIntegrate:(unsigned long long)arg18 validationErrors:(id *)arg19;
@property(readonly, copy) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property(retain) XCSBotSCMBlueprint *sourceControlBlueprint; // @synthesize sourceControlBlueprint;
- (void).cxx_destruct;
- (BOOL)_validateSchemeName:(id)arg1 buildConfiguration:(id)arg2 builtFromClean:(unsigned long long)arg3 performsAnalyzeAction:(BOOL)arg4 performsTestAction:(BOOL)arg5 performsArchiveAction:(BOOL)arg6 codeCoveragePreference:(unsigned long long)arg7 exportsProductFromArchive:(BOOL)arg8 triggers:(struct NSArray *)arg9 sourceControlBlueprint:(id)arg10 testingDestinationType:(unsigned long long)arg11 testingDeviceIDs:(id)arg12 deviceSpecification:(id)arg13 scheduleType:(unsigned long long)arg14 periodicScheduleInterval:(unsigned long long)arg15 weeklyScheduleDay:(long long)arg16 hourOfIntegration:(unsigned long long)arg17 minutesAfterHourToIntegrate:(unsigned long long)arg18 validationErrors:(id *)arg19;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithSchemeName:(id)arg1 buildConfiguration:(id)arg2 builtFromClean:(unsigned long long)arg3 performsAnalyzeAction:(BOOL)arg4 performsTestAction:(BOOL)arg5 performsArchiveAction:(BOOL)arg6 codeCoveragePreference:(unsigned long long)arg7 exportsProductFromArchive:(BOOL)arg8 triggers:(struct NSArray *)arg9 sourceControlBlueprint:(id)arg10 testingDestinationType:(unsigned long long)arg11 testingDeviceIDs:(id)arg12 deviceSpecification:(id)arg13 scheduleType:(unsigned long long)arg14 periodicScheduleInterval:(unsigned long long)arg15 weeklyScheduleDay:(long long)arg16 hourOfIntegration:(unsigned long long)arg17 minutesAfterHourToIntegrate:(unsigned long long)arg18 validationErrors:(id *)arg19;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)description;

// Remaining properties
@property NSString *buildConfiguration; // @dynamic buildConfiguration;
@property unsigned long long builtFromClean; // @dynamic builtFromClean;
@property unsigned long long codeCoveragePreference; // @dynamic codeCoveragePreference;
@property XCSDeviceSpecification *deviceSpecification; // @dynamic deviceSpecification;
@property BOOL exportsProductFromArchive; // @dynamic exportsProductFromArchive;
@property unsigned long long hourOfIntegration; // @dynamic hourOfIntegration;
@property unsigned long long minutesAfterHourToIntegrate; // @dynamic minutesAfterHourToIntegrate;
@property BOOL performsAnalyzeAction; // @dynamic performsAnalyzeAction;
@property BOOL performsArchiveAction; // @dynamic performsArchiveAction;
@property BOOL performsTestAction; // @dynamic performsTestAction;
@property unsigned long long periodicScheduleInterval; // @dynamic periodicScheduleInterval;
@property unsigned long long scheduleType; // @dynamic scheduleType;
@property(copy) NSString *schemeName; // @dynamic schemeName;
@property unsigned long long testingDestinationType; // @dynamic testingDestinationType;
@property NSArray *testingDeviceIDs; // @dynamic testingDeviceIDs;
@property NSArray *triggers; // @dynamic triggers;
@property long long weeklyScheduleDay; // @dynamic weeklyScheduleDay;

@end

