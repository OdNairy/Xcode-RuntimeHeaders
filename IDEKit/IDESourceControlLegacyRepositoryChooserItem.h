//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDESourceControlMultiChooserItem.h>

@class IDESourceControlBranch, IDESourceControlRepository, NSString;

@interface IDESourceControlLegacyRepositoryChooserItem : IDESourceControlMultiChooserItem
{
    IDESourceControlBranch *_currentBranch;
    NSString *_trackingRemoteName;
    NSString *_trackingBranchName;
    IDESourceControlRepository *_selectedRemote;
    IDESourceControlBranch *_selectedBranch;
}

@property(retain) IDESourceControlBranch *selectedBranch; // @synthesize selectedBranch=_selectedBranch;
@property(retain) IDESourceControlRepository *selectedRemote; // @synthesize selectedRemote=_selectedRemote;
- (void).cxx_destruct;
- (void)setSelectedItem:(id)arg1;
- (void)fetchRemotesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_defaultSelectionForItems:(id)arg1;
- (void)primitiveInvalidate;

@end

