//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTAnnotationProvider.h"

#import "DVTTextAnnotationDelegate.h"

@class DVTObservingToken, IDEPlaygroundEditor, IDESourceCodePlaygroundSection, IDEWorkspaceTabController, NSMapTable, NSMutableOrderedSet, NSString;

@interface IDESourceCodePlaygroundSectionAnnotationProvider : DVTAnnotationProvider <DVTTextAnnotationDelegate>
{
    IDESourceCodePlaygroundSection *_playgroundSection;
    NSMapTable *_accessoryViewAnnotationByLoggerResult;
    NSMutableOrderedSet *_oldLoggerResults;
    DVTObservingToken *_loggerResultsObservingToken;
    DVTObservingToken *_playgroundExpressionIsCompleteObservingToken;
    DVTObservingToken *_toysSelectedInRegisteredToyboxesObservingToken;
    IDEPlaygroundEditor *_playgroundEditor;
    IDEWorkspaceTabController *_workspaceTabController;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain, nonatomic) IDEPlaygroundEditor *playgroundEditor; // @synthesize playgroundEditor=_playgroundEditor;
- (void).cxx_destruct;
- (void)didDeleteOrReplaceParagraphForAnnotation:(id)arg1;
- (void)providerWillUninstall;
@property IDESourceCodePlaygroundSection *playgroundSection;
- (void)_updateQuickLookForAnnotation:(id)arg1;
- (void)_removeAccessoryViewAnnotationsForLoggerResults:(id)arg1;
- (void)_removeAllAccessoryViewAnnotations;
- (void)resetEditor:(id)arg1;
- (void)_insertAccessoryViewAnnotationForExecutionResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

