//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEContainerContentsMediaRepository.h"

#import "IBICCatalogItemObserver.h"

@class DVTDelayedInvocation, IBMutableIdentityDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface IBICCatalogMediaRepository : IDEContainerContentsMediaRepository <IBICCatalogItemObserver>
{
    NSMutableSet *_observedCatalogs;
    NSMutableSet *_imageCatalogsWithItemObservationChanges;
    NSMutableSet *_resources;
    NSMutableDictionary *_catalogsByPath;
    IBMutableIdentityDictionary *_observationTokensByCatalogs;
    IBMutableIdentityDictionary *_imageCatalogsToProvidersToMediaResources;
    IBMutableIdentityDictionary *_imageCatalogsToRepsWithChanges;
    DVTDelayedInvocation *_catalogChangeValidator;
}

+ (id)allSupportedMediaFileDataTypes;
+ (id)handleFileReferenceContainerObserverChange:(long long)arg1 forPath:(id)arg2 withDataType:(id)arg3;
+ (void)cleanupFileReferenceContainerObserverResult:(id)arg1 forPath:(id)arg2;
+ (id)existingCatalogSynchronizerForFilePath:(id)arg1;
+ (void)releaseCatalogSynchronizerForFilePath:(id)arg1;
+ (id)existingCatalogSynchronizerEntryForFilePath:(id)arg1;
+ (id)retainedCatalogSynchronizerForFilePath:(id)arg1;
+ (id)filePathsToCatalogSynchronizersMap;
+ (id)containerObserverToRepositoryMap;
- (void).cxx_destruct;
- (void)batchValidatorImageCatalogChanges:(id)arg1;
- (void)fileReferenceObserverDidReportUpdatedAndAddedResourcesByPath:(id)arg1 removedPaths:(id)arg2;
- (void)notifyObserversAfterMutatingWithBlock:(CDUnknownBlockType)arg1;
- (void)synchronizeResourcesFromCatalog:(id)arg1;
- (void)expungResourcesFromCatalog:(id)arg1;
- (void)importInitialResourcesFromCatalog:(id)arg1;
- (BOOL)hasResourceForImageRep:(id)arg1 fromCatalog:(id)arg2;
- (id)mediaResourceForMediaResourceProvider:(id)arg1 fromCatalog:(id)arg2;
- (void)removeMediaResourceProvider:(id)arg1 fromCatalog:(id)arg2;
- (void)addMediaResourceProvider:(id)arg1 fromCatalog:(id)arg2;
- (void)imageCatalogItem:(id)arg1 didChangeKey:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4;
- (id)resources;
- (void)primitiveInvalidate;
- (id)initWithContainerObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

