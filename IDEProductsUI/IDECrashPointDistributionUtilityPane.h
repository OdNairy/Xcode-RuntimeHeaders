//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProductsUtilityPane.h"

@class DVTCrashChartView, DVTCrashPoint;

@interface IDECrashPointDistributionUtilityPane : IDEProductsUtilityPane
{
    DVTCrashChartView *_crashChartView;
}

@property __weak DVTCrashChartView *crashChartView; // @synthesize crashChartView=_crashChartView;
- (void).cxx_destruct;
- (void)viewDidLoad;
@property(readonly) DVTCrashPoint *crashPoint;
- (id)initWithInspectable:(id)arg1;

@end

