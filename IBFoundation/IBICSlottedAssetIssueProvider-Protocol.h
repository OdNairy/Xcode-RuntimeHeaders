//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBICIssueGenerationContext, IBICSlottedAsset, NSMutableArray;

@protocol IBICSlottedAssetIssueProvider <NSObject>
- (void)populateIssues:(NSMutableArray *)arg1 forSlottedAsset:(IBICSlottedAsset *)arg2 withContext:(IBICIssueGenerationContext *)arg3;
@end
