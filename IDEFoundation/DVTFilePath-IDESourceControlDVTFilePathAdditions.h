//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTFilePath.h"

@interface DVTFilePath (IDESourceControlDVTFilePathAdditions)
@property unsigned long long conflictStateForUpdateOrMerge;
- (void)setSourceControlStatus:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)sourceControlStatusForKey:(id)arg1;
- (unsigned long long)cachedAggregateSourceControlRemoteStatus;
- (unsigned long long)cachedSourceControlRemoteStatus;
- (unsigned long long)cachedAggregateSourceControlLocalStatus;
- (unsigned long long)cachedSourceControlLocalStatus;
- (void)workingCopyAndRelativePath:(CDUnknownBlockType)arg1;
- (void)_workingCopy:(id *)arg1 relativePath:(id *)arg2;
- (id)workingCopy;
@end

