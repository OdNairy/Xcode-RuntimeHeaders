//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditorDocument.h"

@class DBGMemoryData, DBGProcess, DVTObservingToken, NSString;

@interface DBGMemoryBrowserDocument : IDEEditorDocument
{
    DBGMemoryData *_memoryData;
    DBGProcess *_process;
    NSString *_customDisplayName;
    DVTObservingToken *_memoryDatasObserver;
    DVTObservingToken *_controlStateObserver;
}

+ (BOOL)shouldUnlockFileURLBeforeMakingChanges;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(retain) DBGMemoryData *memoryData; // @synthesize memoryData=_memoryData;
@property(copy) NSString *customDisplayName; // @synthesize customDisplayName=_customDisplayName;
- (void).cxx_destruct;
- (id)_memoryDataForURLParts:(id)arg1 inLaunchSession:(id)arg2;
- (id)_memoryDataForURLParts:(id)arg1 inWorkspace:(id)arg2;
- (id)_memoryDataForURL:(id)arg1;
- (int)readOnlyStatus;
- (id)displayName;
- (void)editorDocumentDidClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;

@end

