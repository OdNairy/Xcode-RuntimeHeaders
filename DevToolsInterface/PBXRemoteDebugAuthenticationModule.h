//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXAuthenticationModule.h>

@class PBXLSLaunchConfig;

@interface PBXRemoteDebugAuthenticationModule : PBXAuthenticationModule
{
    PBXLSLaunchConfig *_remoteDebuggingConfig;
}

- (void)defaultButtonAction:(id)arg1;
- (void)_setupPanel;
- (id)remoteDebuggingConfig;
- (void)setRemoteDebuggingConfig:(id)arg1;
- (id)initWithModuleNibName:(id)arg1;

@end

