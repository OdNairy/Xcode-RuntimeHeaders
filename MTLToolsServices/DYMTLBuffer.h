//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MTLToolsServices/DYMTLResourceObject.h>

#import "DYBuffer.h"

@class NSData, NSMutableDictionary, NSString;

@interface DYMTLBuffer : DYMTLResourceObject <DYBuffer>
{
    BOOL _zeroFill;
    BOOL _isBytesOnly;
    NSData *_data;
    unsigned long long _length;
    unsigned long long _cpuCacheMode;
    unsigned long long _resourceOptions;
    unsigned long long _purgeableState;
}

@property(readonly, nonatomic) BOOL isBytesOnly; // @synthesize isBytesOnly=_isBytesOnly;
@property(readonly, nonatomic) unsigned long long purgeableState; // @synthesize purgeableState=_purgeableState;
@property(readonly, nonatomic) unsigned long long resourceOptions; // @synthesize resourceOptions=_resourceOptions;
@property(readonly, nonatomic) unsigned long long cpuCacheMode; // @synthesize cpuCacheMode=_cpuCacheMode;
@property(readonly, nonatomic) BOOL zeroFill; // @synthesize zeroFill=_zeroFill;
@property(readonly, nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cachingCost;
- (id)initWithResourceObject:(id)arg1 functionStream:(id)arg2 dataResolver:(CDUnknownBlockType)arg3;
- (id)_initWithBuffer:(id)arg1 isStatic:(BOOL)arg2;
- (id)initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long containerID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isStatic;
@property(readonly, copy, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) NSMutableDictionary *properties;
@property(readonly, nonatomic) unsigned int resourceType;
@property(readonly) Class superclass;

@end

