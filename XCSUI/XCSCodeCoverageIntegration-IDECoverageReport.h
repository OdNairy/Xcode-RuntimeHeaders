//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCSCodeCoverageIntegration.h"

#import "IDECoverage_RootObject.h"

@class NSArray, NSNumber, NSString;

@interface XCSCodeCoverageIntegration (IDECoverageReport) <IDECoverage_RootObject>
@property(readonly, copy, nonatomic) NSArray *ide_coverage_children;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePctDelta;
@property(readonly, copy, nonatomic) NSNumber *ide_coverage_lineCoveragePct;
@property(readonly, copy, nonatomic) NSString *ide_coverage_title;
@property(readonly, nonatomic) unsigned long long ide_coverage_targetCount;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_targets;
@property(readonly, copy, nonatomic) NSString *ide_coverage_identifier;
@property(readonly, copy, nonatomic) NSArray *ide_coverage_devices;
@property(readonly, nonatomic) BOOL ide_coverage_supportsJumpToSourceEditor;
@property(readonly, nonatomic) BOOL ide_coverage_lazilyFetchesData;
@property(readonly, nonatomic) BOOL ide_coverage_showChangeColumn;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

