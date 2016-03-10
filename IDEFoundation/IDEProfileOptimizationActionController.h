//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFilePath, IDEBuildParameters, IDEScheme, NSMutableArray, NSString;

@interface IDEProfileOptimizationActionController : NSObject
{
    BOOL _doingCodeCoverage;
    IDEScheme *_scheme;
    NSString *_bundleIDForAppToOptimize;
    NSString *_llvmProfileFile;
    DVTFilePath *_clangProfileDataGenerationDir;
    NSString *_bundleIDForAlternateAppToOptimize;
    DVTFilePath *_clangOptimizationProfileFile;
    NSMutableArray *_macPGODirectories;
    id <IDEBuildableProduct> _buildableProduct;
    IDEBuildParameters *_buildParameters;
}

@property __weak IDEBuildParameters *buildParameters; // @synthesize buildParameters=_buildParameters;
@property __weak id <IDEBuildableProduct> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
@property(copy) NSMutableArray *macPGODirectories; // @synthesize macPGODirectories=_macPGODirectories;
@property(copy) DVTFilePath *clangOptimizationProfileFile; // @synthesize clangOptimizationProfileFile=_clangOptimizationProfileFile;
@property(retain) NSString *bundleIDForAlternateAppToOptimize; // @synthesize bundleIDForAlternateAppToOptimize=_bundleIDForAlternateAppToOptimize;
@property BOOL doingCodeCoverage; // @synthesize doingCodeCoverage=_doingCodeCoverage;
@property(copy) DVTFilePath *clangProfileDataGenerationDir; // @synthesize clangProfileDataGenerationDir=_clangProfileDataGenerationDir;
@property(copy) NSString *llvmProfileFile; // @synthesize llvmProfileFile=_llvmProfileFile;
@property(retain) NSString *bundleIDForAppToOptimize; // @synthesize bundleIDForAppToOptimize=_bundleIDForAppToOptimize;
@property(retain) IDEScheme *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)_handleDownloadSucceeded:(id)arg1;
- (id)_fileNameForProfdata;
- (void)_evaulateBuildSettingsForBuildParameters:(id)arg1 buildableProduct:(id)arg2;
- (id)_bundleIdentifierFromBuildableProduct:(id)arg1 withBuildParameters:(id)arg2;
- (void)_addProfileDataPath:(id)arg1 toGroup:(id)arg2;
- (id)_addFileGroupForPath:(id)arg1 container:(id)arg2;
- (void)notifyOptimizationProfileCreationFailedWithError:(id)arg1;
- (void)notifyOptimizationProfileCreationSucceeded;
- (void)downloadAndMergePGOFilesForTargetDevice:(id)arg1;
- (BOOL)createLLVMProfileFileNameForBundleID:(id)arg1 settingEnvironmentVariables:(id)arg2 error:(id *)arg3;
- (BOOL)createLLVMProfileFileNameForEnvironmentVariables:(id)arg1 error:(id *)arg2;
- (id)profileFileNameForBundleID:(id)arg1 settingEnvironmentVariables:(id)arg2 error:(id *)arg3;
- (void)addOptimizationProfileFromFilePath:(id)arg1 toContainer:(id)arg2;
- (BOOL)mergeOptimizationProfilesFromDirectoryAtPath:(id)arg1 toFileAtPath:(id)arg2 returningError:(id *)arg3;
- (id)relevantBuildablesForOptimizationProfileGenerationForSchemeCommand:(id)arg1;
- (BOOL)addOptimizationProfileFilePathToEnvironmentVariables:(id)arg1 forBuildableProduct:(id)arg2 buildParameters:(id)arg3 schemeActionRecord:(id)arg4 outError:(id *)arg5;
- (id)initWithScheme:(id)arg1;

@end

