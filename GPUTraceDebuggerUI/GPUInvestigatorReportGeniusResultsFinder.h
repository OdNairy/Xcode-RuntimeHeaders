/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEGeniusResultsFinder.h"

@class DVTObservingToken, GPUTraceSession;

// Not exported
@interface GPUInvestigatorReportGeniusResultsFinder : IDEGeniusResultsFinder
{
    DVTObservingToken *_reportSelectionObserver;
    GPUTraceSession *_traceSession;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)_updateGeniusResults;
- (void)primitiveInvalidate;

@end
