//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTAnnotationProvider.h"

@class IDEAnnotationContext, IDECoverageAnnotationManager;

@interface IDECoverageAnnotationProvider : DVTAnnotationProvider
{
    IDEAnnotationContext *_context;
    IDECoverageAnnotationManager *_manager;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) IDECoverageAnnotationManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)buildAnnotations;
- (BOOL)lineCoverageDataContainsMixedSubranges:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithContext:(id)arg1;

@end

