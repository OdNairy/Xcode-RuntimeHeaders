//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBIdiom, IBPlatform, NSDictionary, NSMutableDictionary, NSSet;

@interface IBTargetRuntime : NSObject
{
    NSMutableDictionary *_imageRequestersByScaleFactor;
    NSMutableDictionary *_sceneUpdateRequestersByScaleFactorThenRenderingFidelity;
    BOOL _installedColorList;
    NSSet *_connectionClasses;
    NSSet *_segueClasses;
    NSDictionary *_segueClassesByClassID;
}

+ (id)targetRuntimeWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (BOOL)populateEnvironment:(id)arg1 forExecutionContext:(id)arg2 error:(id *)arg3;
- (id)sceneUpdateRequesterWithScaleFactor:(id)arg1 renderingFidelity:(long long)arg2;
- (id)imageRequesterWithScaleFactor:(id)arg1;
- (id)registerSceneUpdateRenderingDelegate:(id)arg1 forScaleFactor:(double)arg2 returningSceneIdentifier:(long long *)arg3 error:(id *)arg4;
- (id)processingRequestForIncrementallyUpdatingAttribute:(id)arg1 ofObject:(id)arg2 withObjectID:(id)arg3 marshallingContext:(id)arg4;
- (Class)sceneUpdateRequestProcessorClass;
- (Class)imageRequestProcessorClass;
- (id)defaultToolDescriptionWithRole:(long long)arg1 scaleFactor:(double)arg2;
- (id)toolProxyManager;
- (id)displayNameForUserInterfaceStyle;
- (id)nextPreviewableTargetRuntime;
- (id)alternatePreviewableTargetRuntimes;
- (Class)segueClassForClassIdentifier:(id)arg1;
- (id)connectionClasses;
- (id)segueClasses;
@property(readonly) id <DVTFontTextFieldDataSource> fontDataSource;
- (void)installColorListIfNeeded;
- (id)colorList;
- (struct CGSize)canvasViewFramePaddingSizeForOverlayScrollers;
- (id)archiveVariantIdentifier;
- (id)archiveIdentifier;
- (id)identifier;
@property(readonly, nonatomic) IBIdiom *idiom;
@property(readonly, nonatomic) IBPlatform *platform;
- (id)debugDescription;
- (id)init;
- (id)targetRuntimeWithIdiom:(id)arg1;

@end

