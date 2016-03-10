//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewController.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSString;

@interface IBUISplitViewController : IBUIViewController <IBDocumentArchiving, NSCoding>
{
    IBUIViewController *masterViewController;
    IBUIViewController *detailViewController;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)orderedChildViewControllerKeyPaths;
+ (double)defaultGutterWidth;
+ (double)defaultMasterColumnWidth;
+ (id)ibObservedPropertiesForEditorViewInvalidation;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property(retain, nonatomic) IBUIViewController *detailViewController; // @synthesize detailViewController;
@property(retain, nonatomic) IBUIViewController *masterViewController; // @synthesize masterViewController;
- (void).cxx_destruct;
- (void)decodeLegacyViewControllers:(id)arg1;
- (id)effectiveSimulatedBottomBarMetrics;
- (id)effectiveSimulatedTopBarMetrics;
- (BOOL)displaysContentView;
- (void)setViewControllers:(id)arg1;
- (id)viewControllers;
- (void)removeViewController:(id)arg1;
- (id)ibSegueSourceToOneRelationshipKeyPaths;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewDetailWithSegue:(id)arg2;
- (BOOL)ibIsPrimarySceneObject:(id)arg1 validSplitViewMasterWithSegue:(id)arg2;
- (BOOL)ibCanBeEmbeddedInSplitViewControllerController;
- (BOOL)ibCanBeEmbeddedInNavigationController;
- (BOOL)ibCanBeEmbeddedInTabBarController;
- (BOOL)ibInspectedSupportsDestinationMetrics;
- (BOOL)ibInspectedSupportsBottomBarMetrics;
- (BOOL)ibInspectedSupportsTopBarMetrics;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (void)ibWillAcceptPastedObject:(id)arg1 intoToOneRelation:(id)arg2 inDocument:(id)arg3 insertionContext:(id)arg4;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (void)ibSizeView:(id)arg1 toFitViewController:(id)arg2;
- (struct CGSize)ibContentSizeForChildViewController:(id)arg1 idiom:(id)arg2;
- (struct CGSize)sizeForDetailViewControllerContent;
- (struct CGSize)sizeForMasterViewControllerContent;
- (struct CGSize)sizeForDetailViewController;
- (struct CGSize)sizeForMasterViewController;
- (struct CGSize)containerScaleFactor;
- (struct CGSize)sizeForDetailViewControllerWithInterfaceOrientation:(int)arg1;
- (struct CGSize)sizeForMasterViewControllerWithInterfaceOrientation:(int)arg1;
@property(readonly) double gutterWidth;
@property(readonly) double masterColumnWidth;
- (id)ibImageForOwnedScene;
- (id)ibInheritableMetricsForDownstreamController:(id)arg1 viaSegue:(id)arg2;
- (id)simulatedMetricsContainerForDetailEditorView;
- (id)simulatedMetricsContainerForMasterEditorView;
- (Class)ibEditorViewClass;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (void)ibPrepareToBackwardsDeployToOSVersion:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateAdditionalTargetOSVersions:(id)arg1 forCompilingDocument:(id)arg2;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibPasteboardTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

