//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/SCMModel.h>

#import "SCMSandboxProtocol.h"

@class NSMutableArray;

@interface SCMSandboxOwner : SCMModel <SCMSandboxProtocol>
{
    NSMutableArray *_sandboxes;
    id <SCMSandboxOwnerDelegateProtocol> _delegate;
}

@property(retain) id <SCMSandboxOwnerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *sandboxes; // @synthesize sandboxes=_sandboxes;
- (id)requestClearTagsForPaths:(id)arg1;
- (id)requestEditForPaths:(id)arg1;
- (id)requestResolveForPaths:(id)arg1;
- (id)requestRevertForPaths:(id)arg1;
- (id)requestDeleteForPaths:(id)arg1;
- (id)requestCommitForPaths:(id)arg1 withMessage:(id)arg2;
- (id)requestAddForPaths:(id)arg1;
- (id)requestUpdateForPaths:(id)arg1 revision:(id)arg2;
- (id)requestStatusForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3;
- (id)requestCopyFromPaths:(id)arg1 toPaths:(id)arg2 revision:(id)arg3 withMessage:(id)arg4;
- (id)requestMoveFromPaths:(id)arg1 toPaths:(id)arg2 withMessage:(id)arg3;
- (id)requestDiffForPath:(id)arg1 revision:(id)arg2 secondRevision:(id)arg3;
- (id)requestBlameForPath:(id)arg1 revision:(id)arg2;
- (id)requestLogForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3 secondRevision:(id)arg4;
- (id)requestCatForPath:(id)arg1 revision:(id)arg2;
- (id)requestCommitAllWithMessage:(id)arg1;
- (id)updateAll;
- (id)refreshAll;
- (void)disconnect;
- (void)addActivityFromRequest:(id)arg1;
- (id)destinationPathsForPaths:(id)arg1 destinationPaths:(id)arg2;
- (id)sandboxesForPaths:(id)arg1;
- (id)sandboxForPath:(id)arg1;
- (void)disconnectSandbox:(id)arg1;
- (void)adoptSandbox:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithName:(id)arg1 path:(id)arg2;
- (void)createRoot;

@end

