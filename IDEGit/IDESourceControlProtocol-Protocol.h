//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDESourceControlOperation, IDESourceControlRequest;

@protocol IDESourceControlProtocol <NSObject>
- (IDESourceControlOperation *)operationForRequest:(IDESourceControlRequest *)arg1;
- (BOOL)authenticationRequiredForRequest:(IDESourceControlRequest *)arg1;
@end

