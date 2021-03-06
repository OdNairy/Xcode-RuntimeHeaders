//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_XCOQOperationDelegate.h"

@class NSMutableDictionary, NSOperationQueue, _XCOQFinderOperationGroup;

@interface _XCOQFinder : NSObject <_XCOQOperationDelegate>
{
    NSOperationQueue *_operationQueue;
    _XCOQFinderOperationGroup *_operationGroup;
    NSMutableDictionary *_headersForParentFolder;
    NSMutableDictionary *_headersForFramework;
    id <_XCOQFinderDelegate> _delegate;
    BOOL _finding;
}

@property BOOL finding; // @synthesize finding=_finding;
@property(retain) id <_XCOQFinderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) _XCOQFinderOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
- (void)findHeadersAtPaths:(id)arg1 andFrameworkHeadersAtPaths:(id)arg2;
- (void)THREAD_operationWillFinish:(id)arg1;
- (void)_didCompleteOperationsBatch;
- (void)THREAD_addNewMatchesForOperation:(id)arg1;
- (void)THREAD_collectFrameworksForFolder:(id)arg1 parentFolder:(id)arg2;
- (void)THREAD_collectHeadersAndSubfoldersForFolder:(id)arg1 parentFolder:(id)arg2 framework:(id)arg3;
- (void)THREAD_enqueueOperation:(Class)arg1 withFolder:(id)arg2 parentFolder:(id)arg3 framework:(id)arg4;
- (void)dealloc;
- (id)init;

@end

