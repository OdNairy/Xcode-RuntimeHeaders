//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTXAllowedRPC.h"

@class NSMutableDictionary, NSNumber, NSString;

@protocol DTFSUsageActivityServiceAuthorizedAPI <DTXAllowedRPC>
- (NSMutableDictionary *)initialSwitches;
- (void)setValue:(NSNumber *)arg1 forSwitchName:(NSString *)arg2;
- (NSNumber *)valueForSwitch:(NSString *)arg1;
- (void)stopSampling;
- (void)startSamplingWithPid:(int)arg1;
- (NSMutableDictionary *)configureLaunchEnvironment:(NSMutableDictionary *)arg1;
@end

