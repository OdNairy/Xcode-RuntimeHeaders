//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

@class NSArray, NSMutableSet;

@interface XCSACL : XCSObject
{
}

- (BOOL)_validateWithAccounts:(id)arg1 identifier:(id)arg2 validationErrors:(id *)arg3;
- (BOOL)_validateWithID:(id)arg1 revision:(id)arg2 service:(id)arg3 botCreators:(id)arg4 botViewers:(id)arg5 hostedRepositoryCreators:(id)arg6 validationErrors:(id *)arg7;
- (id)saveRepresentationHumanReadable:(BOOL)arg1;
- (id)saveRepresentation;
- (id)patchRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)_initWithID:(id)arg1 revision:(id)arg2 service:(id)arg3 botCreators:(id)arg4 botViewers:(id)arg5 hostedRepositoryCreators:(id)arg6 validationErrors:(id *)arg7;
- (id)initWithBotCreators:(id)arg1 botViewers:(id)arg2 hostedRepositoryCreators:(id)arg3 validationErrors:(id *)arg4;
- (void)setDefaultHostedRepositoryCreators;
- (BOOL)removeHostedRepositoryCreators:(id)arg1 validationErrors:(id *)arg2;
- (BOOL)addHostedRepositoryCreators:(id)arg1 validationErrors:(id *)arg2;
@property(readonly, nonatomic) NSArray *hostedRepositoryCreators;
- (void)setDefaultBotViewers;
- (BOOL)removeBotViewers:(id)arg1 validationErrors:(id *)arg2;
- (BOOL)addBotViewers:(id)arg1 validationErrors:(id *)arg2;
@property(readonly, nonatomic) NSArray *botViewers;
- (void)setDefaultBotCreators;
- (BOOL)removeBotCreators:(id)arg1 validationErrors:(id *)arg2;
- (BOOL)addBotCreators:(id)arg1 validationErrors:(id *)arg2;
@property(readonly, nonatomic) NSArray *botCreators;
- (void)clearHostedRepositoryCreators;
- (void)clearBotViewers;
- (void)clearBotCreators;
- (void)clearACL;
- (void)setDefaultACL;

// Remaining properties
@property(retain, nonatomic) NSMutableSet *internalBotCreators; // @dynamic internalBotCreators;
@property(retain, nonatomic) NSMutableSet *internalBotViewers; // @dynamic internalBotViewers;
@property(retain, nonatomic) NSMutableSet *internalHostedRepositoryCreators; // @dynamic internalHostedRepositoryCreators;

@end

