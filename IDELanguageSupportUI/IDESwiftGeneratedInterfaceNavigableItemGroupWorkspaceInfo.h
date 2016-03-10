//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEWorkspace, NSMutableDictionary, NSString;

@interface IDESwiftGeneratedInterfaceNavigableItemGroupWorkspaceInfo : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSMutableDictionary *_sourceFileURLsToPreviewItems;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)allItems;
- (id)itemForSourceFileURL:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;

@end

