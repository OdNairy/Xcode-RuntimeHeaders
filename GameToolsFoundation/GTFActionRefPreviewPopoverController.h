//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "NSPopoverDelegate.h"

@class DVTStackView_AppKitAutolayout, GTFActionRefPopoverView, GTFActionTimelineModel, NSPopover, NSString, NSView;

@interface GTFActionRefPreviewPopoverController : DVTViewController <NSPopoverDelegate>
{
    GTFActionTimelineModel *_referenceAction;
    BOOL _invalidateAfterClose;
    BOOL _hasInstalled;
    id <GTFActionRefPopoverDelegate> _delegate;
    NSPopover *_popover;
    DVTStackView_AppKitAutolayout *_stackView;
    GTFActionRefPopoverView *_actionPreviewView;
    NSView *_actionSourceView;
}

@property(retain) NSView *actionSourceView; // @synthesize actionSourceView=_actionSourceView;
@property(retain) GTFActionRefPopoverView *actionPreviewView; // @synthesize actionPreviewView=_actionPreviewView;
@property(retain) DVTStackView_AppKitAutolayout *stackView; // @synthesize stackView=_stackView;
@property __weak NSPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak id <GTFActionRefPopoverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)popoverDidClose:(id)arg1;
- (void)_removeFromSuperviewAndInvalidate;
- (void)closePopoverAndInvalidate;
- (void)handlePressSource:(id)arg1;
- (void)showPopoverRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 forReferenceModel:(id)arg3;
- (void)viewDidInstall;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initUsingDefaultNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

