//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportUI/IDEToy.h>

@class NSMutableSet, NSSet;

@interface IDEValueHistoryToy : IDEToy
{
    NSMutableSet *_mutableResultReflectionTags;
}

- (void).cxx_destruct;
@property(readonly) NSSet *resultReflectionTags;
- (void)_updateResultReflectionTagsForValueHistoryResult:(id)arg1;
- (void)processPlaygroundResult:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (id)init;

@end

