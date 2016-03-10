//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HFByteSliceFileOperation : NSObject
{
    CDStruct_91ee6ea3 targetRange;
}

+ (id)chainedOperationWithInternalOperations:(id)arg1;
+ (id)internalOperationWithByteSlice:(id)arg1 sourceRange:(CDStruct_91ee6ea3)arg2 targetRange:(CDStruct_91ee6ea3)arg3;
+ (id)externalOperationWithByteSlice:(id)arg1 targetRange:(CDStruct_91ee6ea3)arg2;
+ (id)identityOperationWithByteSlice:(id)arg1 targetRange:(CDStruct_91ee6ea3)arg2;
- (int)writeToFile:(id)arg1 trackingProgress:(id)arg2 error:(id *)arg3;
- (unsigned long long)costToWrite;
- (CDStruct_91ee6ea3)targetRange;
- (CDStruct_91ee6ea3)sourceRange;
- (void)dealloc;
- (id)initWithTargetRange:(CDStruct_91ee6ea3)arg1;

@end

