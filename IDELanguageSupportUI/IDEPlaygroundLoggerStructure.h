//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEPlaygroundLoggerLogEntry.h"

@class NSArray, NSString;

@interface IDEPlaygroundLoggerStructure : NSObject <IDEPlaygroundLoggerLogEntry>
{
    NSString *_name;
    unsigned long long _structureType;
    NSString *_typeName;
    NSString *_summary;
    unsigned long long _totalEntriesCount;
    NSArray *_logEntries;
}

@property(readonly, copy) NSArray *logEntries; // @synthesize logEntries=_logEntries;
@property(readonly) unsigned long long totalEntriesCount; // @synthesize totalEntriesCount=_totalEntriesCount;
@property(readonly, copy) NSString *summary; // @synthesize summary=_summary;
@property(readonly, copy) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly) unsigned long long structureType; // @synthesize structureType=_structureType;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 structureType:(unsigned long long)arg2 typeName:(id)arg3 summary:(id)arg4 totalEntriesCount:(unsigned long long)arg5 logEntries:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

