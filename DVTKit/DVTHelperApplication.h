//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTFilePath, NSRunningApplication, NSString, NSURL;

@interface DVTHelperApplication : NSObject
{
    DVTFilePath *_bundlePath;
    NSString *_bundleIdentifier;
    NSString *_localizedName;
    NSRunningApplication *_runningApplication;
}

+ (id)moreHelperApplicationsURL;
+ (id)availableHelperApplications;
+ (id)_helperAppsContentForKey:(id)arg1;
+ (id)helperApplicationWithIdentifier:(id)arg1;
+ (void)initialize;
@property(readonly, copy) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(copy) DVTFilePath *bundlePath; // @synthesize bundlePath=_bundlePath;
- (void).cxx_destruct;
- (BOOL)launchAndActivateHelperApplication:(id *)arg1;
@property(readonly) NSRunningApplication *runningApplication;
- (id)description;
- (id)initWithBundlePath:(id)arg1;
@property(readonly, copy) NSURL *bundleURL;

@end

