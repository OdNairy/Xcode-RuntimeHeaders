//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class DVTSourceTextView, DVTTextVisualization, NSArray;

@protocol IDETextVisualizationHost
@property(readonly) NSArray *visualizations;
@property(readonly) DVTSourceTextView *textView;
- (void)removeVisualization:(DVTTextVisualization *)arg1 fadeOut:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
- (void)addVisualization:(DVTTextVisualization *)arg1 fadeIn:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
@end

