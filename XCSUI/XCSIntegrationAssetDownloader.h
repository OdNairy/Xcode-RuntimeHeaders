//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDESchemeActionsInvocationRecord, NSMapTable, NSString, XCSIntegration;

@interface XCSIntegrationAssetDownloader : NSObject
{
    XCSIntegration *_integration;
    NSMapTable *_integrationsAndAssets;
    NSMapTable *_integrationCompletionBlocks;
    NSMapTable *_integrationAndSchemeActionRecord;
    IDESchemeActionsInvocationRecord *_schemeActionsInvocationRecord;
    NSString *_internalBuildServiceDebugLog;
    NSString *_internalRawBuildLog;
}

+ (id)assetDownloader;
@property(copy) NSString *internalRawBuildLog; // @synthesize internalRawBuildLog=_internalRawBuildLog;
@property(copy) NSString *internalBuildServiceDebugLog; // @synthesize internalBuildServiceDebugLog=_internalBuildServiceDebugLog;
@property(retain) IDESchemeActionsInvocationRecord *schemeActionsInvocationRecord; // @synthesize schemeActionsInvocationRecord=_schemeActionsInvocationRecord;
- (void).cxx_destruct;
- (void)assetsForIntegration:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)schemeActionsInvocationRecordForIntegration:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)callCompletionBlockForIntegration:(id)arg1;
- (id)triggerLogsForIntegration:(id)arg1 phase:(unsigned long long)arg2;
- (void)setTriggerLog:(id)arg1 withFileName:(id)arg2 forIntegration:(id)arg3;
- (void)setSCMLog:(id)arg1 forIntegration:(id)arg2;
- (void)setBuildLog:(id)arg1 forIntegration:(id)arg2;
- (void)setBuildServiceLog:(id)arg1 forIntegration:(id)arg2;
- (id)dictionaryForIntegration:(id)arg1;

@end

