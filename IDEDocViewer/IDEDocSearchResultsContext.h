//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DSMQuery, NSArray, NSString;

@interface IDEDocSearchResultsContext : NSObject
{
    NSArray *_resultsGroups;
    NSString *_searchString;
    BOOL _valid;
    unsigned long long _resultsCount;
    NSArray *_frameworkTokens;
    NSArray *_extraTokens;
    NSArray *_textResults;
    DSMQuery *_query;
}

+ (id)contextForQuery:(id)arg1 frameworkFilteredTokens:(id)arg2 extraTokens:(id)arg3 textResults:(id)arg4 tokenSortKey:(id)arg5 maximumTextResults:(unsigned long long)arg6 perfMetric:(id)arg7;
+ (id)old_contextForQuery:(id)arg1 frameworkFilteredTokens:(id)arg2 extraTokens:(id)arg3 textResults:(id)arg4 tokenSortKey:(id)arg5 maximumTextResults:(unsigned long long)arg6 perfMetric:(id)arg7;
+ (id)topTokenHitsFromAllTokens:(id)arg1 queryString:(id)arg2;
+ (id)sortedTokensPreferringExactMatches:(id)arg1 sortKey:(id)arg2 queryString:(id)arg3;
+ (id)sortedTokens:(id)arg1 withSortKey:(id)arg2 queryString:(id)arg3;
+ (BOOL)showMultipleTopHits;
+ (unsigned long long)maxDisplayedSearchResults;
+ (void)initialize;
@property(retain) DSMQuery *query; // @synthesize query=_query;
@property(retain) NSArray *textResults; // @synthesize textResults=_textResults;
@property(retain) NSArray *extraTokens; // @synthesize extraTokens=_extraTokens;
@property(retain) NSArray *frameworkTokens; // @synthesize frameworkTokens=_frameworkTokens;
@property(nonatomic) unsigned long long resultsCount; // @synthesize resultsCount=_resultsCount;
@property(getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy) NSArray *resultsGroups; // @synthesize resultsGroups=_resultsGroups;
- (void).cxx_destruct;
- (id)resultsGroupWithIdentifier:(id)arg1;
- (void)sortAPIResultsWithKey:(id)arg1;
@property(readonly, copy) NSArray *childItems;

@end

