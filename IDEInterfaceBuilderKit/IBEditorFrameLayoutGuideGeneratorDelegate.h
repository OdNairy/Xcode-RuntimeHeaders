//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBIDELayoutGuideGeneratorDelegate.h>

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IBViewEditorCanvasFrameController, NSString;

@interface IBEditorFrameLayoutGuideGeneratorDelegate : IBIDELayoutGuideGeneratorDelegate <DVTInvalidation>
{
    IBViewEditorCanvasFrameController *frameController;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)systemLayoutGuides;
- (id)userLayoutGuides;
- (void)primitiveInvalidate;
- (id)initWithViewEditorFrameController:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

