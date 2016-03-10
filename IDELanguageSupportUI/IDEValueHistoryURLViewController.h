//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportUI/IDEValueHistoryToyViewController.h>

@class QLPreviewView;

@interface IDEValueHistoryURLViewController : IDEValueHistoryToyViewController
{
    BOOL _playgroundIsExecuting;
    BOOL _playgroundDidCompleteLastExecution;
    QLPreviewView *_qlPreviewView;
}

+ (id)displayableReflectionTags;
@property(retain) QLPreviewView *qlPreviewView; // @synthesize qlPreviewView=_qlPreviewView;
- (void).cxx_destruct;
- (id)url;
- (void)renderResultsForceRedraw:(BOOL)arg1;
- (void)playgroundExecutionEndedAndCompleted:(BOOL)arg1;
- (void)playgroundExecutionStarted;
- (id)toolTip;
- (id)alternateIconImage;
- (id)iconImage;
- (struct CGSize)preferredContentSizeConstrainedToSize:(struct CGSize)arg1;
- (unsigned long long)representationType;
- (void)viewDidLoad;

@end

