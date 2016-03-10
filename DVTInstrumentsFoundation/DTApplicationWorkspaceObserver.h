//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSApplicationWorkspaceObserverProtocol.h"

@class NSMutableDictionary, NSString;

@interface DTApplicationWorkspaceObserver : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSMutableDictionary *_registrationsByToken;
    NSMutableDictionary *_knownAppsByPath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)pluginsDidUninstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)unregisterNotificationToken:(id)arg1 observer:(id)arg2;
- (void)_unregisterNotificationTokenInternal:(id)arg1;
- (id)registerNotificationToken:(id)arg1 observer:(id)arg2 query:(id)arg3;
- (void)_notifyWithDictionaryRepresentation:(id)arg1 addition:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

