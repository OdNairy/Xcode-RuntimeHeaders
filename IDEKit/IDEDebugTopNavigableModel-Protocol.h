//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTInvalidation.h"
#import "IDEDebugNavigableModel.h"

@class IDEDebugSession, NSArray, NSString;

@protocol IDEDebugTopNavigableModel <IDEDebugNavigableModel, DVTInvalidation>
@property(copy, nonatomic) NSString *name;
- (NSString *)contentDelegateUIExtensionIdentifier;

@optional
@property(readonly) NSString *subtitle;
@property(readonly, nonatomic) NSArray *loadedCodeModules;
@property(readonly, nonatomic) IDEDebugSession *parentDebugSession;
@end
