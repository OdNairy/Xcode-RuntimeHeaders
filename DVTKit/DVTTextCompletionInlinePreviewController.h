//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTObservingToken, DVTTextCompletionSession, DVTWeakInterposer, NSMapTable, NSString;

@interface DVTTextCompletionInlinePreviewController : NSObject
{
    DVTTextCompletionSession *_session;
    DVTObservingToken *_sessionSelectionObserver;
    DVTWeakInterposer *_previousSelectedItem_dvtWeakInterposer;
    NSMapTable *_previewTextPerItem;
    NSString *_replacedUserPrefix;
    struct _NSRange _previewRange;
    struct _NSRange _ghostComplementRange;
    int _hideReason;
    BOOL _adjustingPreviewText;
    BOOL _adjustingPreviewCursorLocation;
    BOOL _invalidatingTextDisplay;
    NSString *_previewText;
    id <DVTTextCompletionItem> _theSelectedItem;
}

@property __weak id <DVTTextCompletionItem> theSelectedItem; // @synthesize theSelectedItem=_theSelectedItem;
@property(retain) NSString *previewText; // @synthesize previewText=_previewText;
@property(readonly) BOOL invalidatingTextDisplay; // @synthesize invalidatingTextDisplay=_invalidatingTextDisplay;
@property(readonly) BOOL adjustingPreviewCursorLocation; // @synthesize adjustingPreviewCursorLocation=_adjustingPreviewCursorLocation;
@property(readonly) BOOL adjustingPreviewText; // @synthesize adjustingPreviewText=_adjustingPreviewText;
@property(readonly) struct _NSRange ghostComplementRange; // @synthesize ghostComplementRange=_ghostComplementRange;
@property(readonly) struct _NSRange previewRange; // @synthesize previewRange=_previewRange;
@property(nonatomic) int hideReason; // @synthesize hideReason=_hideReason;
- (void).cxx_destruct;
@property(readonly) NSString *debugStateString;
- (id)_previewTextForItem:(id)arg1;
- (void)_showPreviewForItem:(id)arg1;
- (void)_textStorageWillEdit:(id)arg1;
- (BOOL)handleDeleteBackward;
- (BOOL)handleTextViewShouldSetMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)handleTextViewShouldChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)handleInsertText:(id)arg1;
- (BOOL)handledAcceptPartialCompletion:(id)arg1;
- (void)hideInlinePreviewWithReason:(int)arg1;
- (void)showInlinePreview;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
@property(readonly, getter=isShowingInlinePreview) BOOL showingInlinePreview;
@property __weak id <DVTTextCompletionItem> previousSelectedItem;

@end

