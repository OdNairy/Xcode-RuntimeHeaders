//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GTFActionEditor, GTFActionLibrary, NSArray;

@protocol GTFActionEditorDelegate <NSObject>
@property(readonly, nonatomic) GTFActionLibrary *actionLibrary;
- (void)updateActionPreview;
- (void)refreshObjectLibrary;

@optional
- (void)actionEditorDidEndScrubbing:(GTFActionEditor *)arg1;
- (void)actionEditorDidBeginScrubbing:(GTFActionEditor *)arg1;
- (BOOL)actionEditor:(GTFActionEditor *)arg1 shouldSupportPastedActions:(NSArray *)arg2;
- (BOOL)actionEditor:(GTFActionEditor *)arg1 shouldCreateReferenceActionWithActions:(NSArray *)arg2;
- (void)actionsDidChangeForTarget:(id <NSCopying>)arg1 withEditor:(GTFActionEditor *)arg2;
@end

