//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/SKDocumentViewController.h>

@class EditOverlayView, SKEditView;

@interface SKEmitterNodeDocumentViewController : SKDocumentViewController
{
    SKEditView *_mainView;
    EditOverlayView *_overlayView;
}

@property(nonatomic) __weak EditOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak SKEditView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)takeFocus;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (id)skView;

@end
