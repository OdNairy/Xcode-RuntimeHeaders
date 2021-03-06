//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SymbolicationDT/DVT_VMUObjectGraph.h>

#import "VMUCommonGraphInterface.h"

@class DVT_VMUClassInfoMap, NSArray, NSMutableArray, NSString;

@interface DVT_VMUProcessObjectGraph : DVT_VMUObjectGraph <VMUCommonGraphInterface>
{
    int _pid;
    unsigned int _kernPageSize;
    unsigned long long _machAbsolute;
    CDUnknownBlockType _regionProvider;
    NSMutableArray *_regions;
    unsigned int _regionCount;
    NSArray *_zoneNames;
    NSString *_procDescription;
    NSString *_procName;
}

@property(nonatomic) unsigned long long snapshotMachTime; // @synthesize snapshotMachTime=_machAbsolute;
@property(readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionCount;
@property(readonly, nonatomic) unsigned int vmPageSize; // @synthesize vmPageSize=_kernPageSize;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (unsigned int)activeRegionCount;
@property(readonly, nonatomic) BOOL is64bit;
@property(copy, nonatomic) NSString *processName;
@property(copy, nonatomic) NSString *toolHeaderDescription;
- (id)labelForNode:(unsigned int)arg1;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (id)zoneNameForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int zoneCount;
@property(readonly, nonatomic) DVT_VMUClassInfoMap *realizedClasses;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithArchived:(id)arg1 options:(unsigned long long)arg2;
- (void)internalizeNodes;
- (void)dealloc;
- (id)initWithNodes:(unsigned int)arg1 pid:(int)arg2 zoneNames:(id)arg3 classInfoMap:(id)arg4 regionCount:(unsigned int)arg5 nodeProvider:(CDUnknownBlockType)arg6 regionProvider:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int nodeCount;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly) Class superclass;

@end

