//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionStep.h>

@class IDEDistributionMethod, NSArray, NSNumber;

@interface IDEDistributionMethodStep : IDEDistributionStep
{
}

+ (id)distributionMethodForSameAsArchiveWithAvailableMethods:(id)arg1 existingCertificateInfo:(CDUnknownBlockType)arg2 existingProfileInfo:(CDUnknownBlockType)arg3 fallbackMethod:(id)arg4 logAspect:(id)arg5;
+ (id)distributionMethodForSameAsArchive:(id)arg1 contentPath:(id)arg2 task:(int)arg3 logAspect:(id)arg4;
+ (id)keyPathsForValuesDistributionTask;
+ (id)keyPathsForValuesDistributionMethod;
+ (id)availableOptionsForPropertyList;
- (void)setDistributionTask:(id)arg1;
@property(readonly) NSNumber *distributionTask;
@property(retain) IDEDistributionMethod *distributionMethod;
@property(readonly) NSArray *availableDistributionMethods;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;

@end

