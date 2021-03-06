//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _XCOQSearchContext;

@interface _XCOQMatcher : NSObject
{
    _XCOQSearchContext *_context;
    NSArray *_matches;
}

+ (id)matcherForContext:(id)arg1;
@property(copy) NSArray *matches; // @synthesize matches=_matches;
@property(readonly) _XCOQSearchContext *context; // @synthesize context=_context;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateMatches;
- (id)input;
- (id)project;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

