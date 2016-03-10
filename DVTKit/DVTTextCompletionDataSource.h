//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTSourceCodeLanguage, DVTWeakInterposer, NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSOperationQueue;

@interface DVTTextCompletionDataSource : NSObject
{
    DVTSourceCodeLanguage *_language;
    DVTWeakInterposer *_delegate_dvtWeakInterposer;
    NSMutableArray *_strategies;
    NSMutableSet *_strategyObservers;
    NSOperationQueue *_completionsGeneratorQueue;
    NSMapTable *_lastGeneratedCompletionItemsPerStrategy;
}

@property(retain, nonatomic) DVTSourceCodeLanguage *language; // @synthesize language=_language;
- (void).cxx_destruct;
@property(readonly) NSArray *strategies;
- (id)bestMatchForPrefix:(id)arg1 withContext:(id)arg2;
- (void)generateCompletionsForDocumentLocation:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithLanguage:(id)arg1;
- (id)init;
@property __weak id <DVTTextCompletionDataSourceDelegate> delegate;

@end

