//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEIntegrityLogDataSource.h"
#import "NSObject.h"

@class DVTFilePath, DVTSDK, DVTSourceCodeLanguage, DVTToolsVersion, IDEBuildParameters, IDEContainer<IDEBlueprintProvider>, IDEContainer<IDECustomDataStoring>, IDEFileReference, IDEGroup, IDETestBlueprintHostSettings, IDEWorkspaceArenaSnapshot, NSArray, NSArray<DVTMacroExpansion>, NSDictionary, NSSet, NSString;

@protocol IDEBlueprint <NSObject, IDEIntegrityLogDataSource>
@property(readonly, copy) NSString *blueprintIdentifier;
@property(readonly) NSString *name;
- (DVTFilePath *)entitlementsFilePathForBuildConfiguration:(NSString *)arg1;
- (void)addFileReference:(IDEFileReference *)arg1 toBuildablesContainingFileReference:(IDEFileReference *)arg2;
- (BOOL)containsFilePath:(DVTFilePath *)arg1;
- (BOOL)containsFileReference:(IDEFileReference *)arg1;
- (NSArray *)buildableProducts;
- (NSArray *)buildables;
- (id <IDEBuildable>)primaryBuildable;
- (id <IDEBuildable>)buildableForIdentifier:(NSString *)arg1;
- (NSString *)localizedDescription;
- (IDEContainer<IDECustomDataStoring> *)customDataStore;
- (IDEContainer<IDEBlueprintProvider> *)blueprintProvider;

@optional
@property(readonly) NSSet *knownAssetTags;
@property(readonly) DVTToolsVersion *createdOnToolsVersion;
@property(copy) NSString *developmentTeam;
@property(readonly, getter=isUnitTest) BOOL unitTest;
@property(retain) IDETestBlueprintHostSettings *testBlueprintUITestingTargetAppSettings;
@property(retain) IDETestBlueprintHostSettings *testBlueprintHostSettings;
- (void)removeTagsFromKnownAssetTags:(NSSet *)arg1;
- (void)addTagsToKnownAssetTags:(NSSet *)arg1;
- (NSDictionary *)infoDictionaryForConfiguration:(NSString *)arg1;
- (DVTFilePath *)bundleBaselineRecordFilePath;
- (NSString *)pathToLargestAssetCatalogAppIconPassingTest:(BOOL (^)(NSDictionary *))arg1;
- (NSArray<DVTMacroExpansion> *)additionalOverridingCompilerArgumentsForSourceCodeBuildFileReference:(IDEFileReference *)arg1;
- (void)setOverridingAdditionalCompilerArguments:(NSArray<DVTMacroExpansion> *)arg1 forSourceCodeBuildFileReference:(IDEFileReference *)arg2;
- (NSArray<DVTMacroExpansion> *)additionalCompilerArgumentsForSourceCodeBuildFileReference:(IDEFileReference *)arg1;
- (void)setAdditionalCompilerArguments:(NSArray<DVTMacroExpansion> *)arg1 forSourceCodeBuildFileReference:(IDEFileReference *)arg2;
- (NSSet *)linkedBinaries;
- (NSSet *)allProjectHeaderFiles;
- (NSSet *)allPrivateHeaderFiles;
- (NSSet *)allPublicHeaderFiles;
- (NSArray *)allBuildFileReferences;
- (NSArray *)sourceCodeBuildFileReferences;
- (DVTSourceCodeLanguage *)predominantSourceCodeLanguage;
- (BOOL)configureToBuildMixedTargetWithDestinationGroup:(IDEGroup *)arg1 configureBridgingHeader:(BOOL)arg2 returningErrorString:(id *)arg3;
- (BOOL)isConfiguredToBuildMixedTarget;
- (BOOL)wouldBecomeMixedTargetAfterAddingTypes:(NSArray *)arg1;
- (BOOL)wouldBecomeMixedTargetAfterAddingFiles:(NSArray *)arg1;
- (BOOL)canUseBridgingHeader;
- (BOOL)isMixedTarget;
- (BOOL)configureToBuildWithOptimizationProfileReturningErrorString:(id *)arg1;
- (BOOL)isConfiguredToBuildWithOptimizationProfile;
- (void)updateLastSwiftMigrationToCurrent;
- (BOOL)lastSwiftMigrationIsCurrent;
- (void)convertToUseModernUnitTests;
- (void)convertToUseModernObjCSyntax;
- (void)convertToUseARC;
- (BOOL)canConvertToUseARC;
- (void)convertToBuild64bitOnly;
- (void)convertToUseClang;
- (NSString *)deviceSDKFor:(NSString *)arg1 SDKs:(NSSet *)arg2;
- (NSString *)simulatorSDKFor:(NSString *)arg1 SDKs:(NSSet *)arg2;
- (DVTSDK *)specifiedBaseSDKForBuildConfigurationName:(NSString *)arg1;
- (DVTSDK *)baseSDKForBuildConfigurationName:(NSString *)arg1;
- (NSSet *)supportedPlatformsForConfiguration:(NSString *)arg1 workspaceArenaSnapshot:(IDEWorkspaceArenaSnapshot *)arg2;
- (NSSet *)supportedPlatformsForBuildParameters:(IDEBuildParameters *)arg1;
- (id)compilerSpecificationIdentifier;
- (NSArray *)availableArchitecturesForConfiguration:(NSString *)arg1 workspaceArenaSnapshot:(IDEWorkspaceArenaSnapshot *)arg2;
- (NSArray *)availableArchitecturesForBuildParameters:(IDEBuildParameters *)arg1;
- (NSString *)defaultConfigurationName;
- (NSArray *)availableConfigurationNames;
@end

