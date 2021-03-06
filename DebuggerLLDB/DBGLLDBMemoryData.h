//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBGMemoryData.h"

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface DBGLLDBMemoryData : DBGMemoryData
{
    NSData *_shadowMemoryData;
    NSArray *_recordedThreads;
    NSString *_pointerDescription;
}

@property(copy, nonatomic) NSString *pointerDescription; // @synthesize pointerDescription=_pointerDescription;
@property(copy, nonatomic) NSArray *recordedThreads; // @synthesize recordedThreads=_recordedThreads;
@property(copy, nonatomic) NSData *shadowMemoryData; // @synthesize shadowMemoryData=_shadowMemoryData;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)gatherAdditionalInformationForAddress:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2;

@end

