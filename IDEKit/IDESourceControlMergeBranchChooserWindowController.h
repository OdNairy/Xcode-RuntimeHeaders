//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "IDESourceControlBranchTableDelegate_Legacy.h"
#import "IDESourceControlWindowController.h"

@class DVTBindingToken, DVTReplacementView, DVTSearchField, IDESourceControlBranch, IDESourceControlMergeOperationInfo, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSButton, NSString, NSTextField, NSWindow;

@interface IDESourceControlMergeBranchChooserWindowController : NSWindowController <IDESourceControlWindowController, IDESourceControlBranchTableDelegate_Legacy>
{
    NSButton *_chooseButton;
    NSTextField *_messageTextField;
    NSTextField *_informationTextField;
    DVTSearchField *_filterField;
    IDEWorkspace *_workspace;
    IDESourceControlMergeOperationInfo *_operationInfo;
    CDUnknownBlockType _continuationBlock;
    NSWindow *_parentWindow;
    id <DVTInvalidation> _token;
    BOOL _inProgress;
    DVTBindingToken *_filterBindingToken;
    BOOL _shouldLandBranch;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    DVTReplacementView *_replacementView;
    IDESourceControlBranch *_currentBranch;
    IDESourceControlBranch *_parentBranch;
}

+ (id)keyPathsForValuesAffectingCanContinue;
+ (id)_branchImage;
@property(retain, nonatomic) IDESourceControlBranch *parentBranch; // @synthesize parentBranch=_parentBranch;
@property(retain) IDESourceControlBranch *currentBranch; // @synthesize currentBranch=_currentBranch;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property BOOL shouldLandBranch; // @synthesize shouldLandBranch=_shouldLandBranch;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
@property(copy) CDUnknownBlockType continuationBlock; // @synthesize continuationBlock=_continuationBlock;
@property(retain) IDESourceControlMergeOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)endSheet;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)choose:(id)arg1;
- (void)doubleClickBranch:(id)arg1;
@property(readonly) BOOL canContinue;
- (void)branchChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)fetchBranches;
- (void)setSelectedBranch:(id)arg1;
- (void)displayError:(id)arg1;
- (void)beginSheetForWindow:(id)arg1;
- (id)windowNibName;
- (id)tableViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

