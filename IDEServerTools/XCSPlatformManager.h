//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XCSService;

@interface XCSPlatformManager : NSObject
{
    XCSService *_service;
}

@property(readonly) XCSService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (BOOL)saveAvailablePlatformsWithError:(id *)arg1;
- (id)initWithService:(id)arg1;

@end
