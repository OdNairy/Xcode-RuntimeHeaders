//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBScopedSingleton.h"

@class IBInspectorSearchDataManager, NSSet, NSString;

@interface IBIdiom : NSObject <IBScopedSingleton>
{
    IBInspectorSearchDataManager *_searchDataManager;
    NSSet *_embeddingPolicyExtensions;
}

+ (id)idiomExplicitlyTargetedByFilePath:(id)arg1;
+ (id)idiomForTargetDeviceIdentifier:(id)arg1;
+ (id)instanceWithIdentifier:(id)arg1;
+ (id)allInstances;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)effectiveScaleFactorForPlatformToolDescriptionScaleFactor:(double)arg1;
- (id)systemGuideSetsByIdentifier;
- (id)guideSetForIdentifier:(id)arg1;
- (id)designablesAgentApplicationName;
- (id)designablesAgentName;
- (void)populateVariantForResolvingMediaResources:(id)arg1 forDocument:(id)arg2;
- (id)variantForResolvingMediaResourcesForDocument:(id)arg1;
- (BOOL)allowsEditingConfigurations;
- (BOOL)usesAutolayoutActionArea;
- (BOOL)requiresConfigurations;
- (BOOL)requiresAutolayout;
- (void)unarchiveIdiomDependentDataForDocument:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archiveIdiomDependentDataForDocument:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)archivingDefaultSceneMemberID;
- (id)embeddingPolicyExtensions;
- (id)memberConfigurationVariables;
- (id)extensionsForExtensionPoint:(id)arg1;
- (BOOL)matchesExtension:(id)arg1;
- (BOOL)wantsDefaultMatchesForExtension:(id)arg1;
- (Class)storyboardVerifierClass;
- (Class)xibVerifierClass;
- (Class)storyboardCompilerClass;
- (Class)xibCompilerClass;
- (BOOL)usesSceneExitPlaceholder;
- (BOOL)usesFirstResponder;
- (id)xibArchivingSchema;
- (id)storyboardArchivingSchema;
- (id)storyboardScenePasteboardType;
- (id)storyboardPrimarySceneObjectPasteboardType;
- (id)viewPasteboardType;
- (id)objectPasteboardType;
- (Class)storyboardAssetProviderClass;
- (Class)xibAssetProviderClass;
- (Class)canvasConfigurationChooserControllerClass;
- (id)designatedIdiomForConfigurations;
- (id)pluralUserLabelForConfigurations;
- (id)singularUserLabelForConfigurations;
- (id)perConfigurationInspectorHeaderMenuItemTitle;
- (id)backwardsDeploymentConfiguration;
- (BOOL)isInspectorCategoryExtensionApplicable:(id)arg1;
- (BOOL)isApplicableForObjectLibraryAssetProviderExtension:(id)arg1;
- (BOOL)matchesFilePath:(id)arg1;
- (id)filePathWithTargetDeviceSuffixForBaseFilePath:(id)arg1;
- (id)unsupportedSegueClasses;
- (id)inspectorSearchDataManager;
- (BOOL)supportsConnectionClass:(Class)arg1;
- (double)defaultOverviewZoomFactor;
- (id)pluginName;
- (id)icon;
- (id)targetDeviceFileNameSuffix;
- (id)buildSystemTargetDeviceIdentifier;
- (id)idiomName;
- (id)identifier;
- (id)platform;
- (void)didRegisterSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

