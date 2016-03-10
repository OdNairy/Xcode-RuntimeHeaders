//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class DVTColoredSpinner, IDERunDestination, NSImage, NSImageView, NSLayoutConstraint, NSMenuItem, NSMutableArray, NSTextField;

@interface IDERunDestinationMenuItemView : NSView
{
    NSMutableArray *_cancellationTokens;
    NSImage *_wifiImage;
    NSImage *_highlightedWifiImage;
    BOOL _isWatchDestination;
    IDERunDestination *_runDestination;
    NSMenuItem *_menuItem;
    NSView *_indentView;
    NSLayoutConstraint *_indentConstraint;
    NSTextField *_stateView;
    NSImageView *_imageView;
    NSTextField *_titleView;
    DVTColoredSpinner *_spinnerView;
    NSImageView *_wifiView;
}

+ (id)keyPathsForValuesAffectingHideWifi;
+ (id)keyPathsForValuesAffectingHideSpinner;
+ (id)keyPathsForValuesAffectingAccessory;
+ (void)applyToMenuItem:(id)arg1;
@property(retain, nonatomic) NSImageView *wifiView; // @synthesize wifiView=_wifiView;
@property(retain, nonatomic) DVTColoredSpinner *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) NSTextField *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSTextField *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) NSLayoutConstraint *indentConstraint; // @synthesize indentConstraint=_indentConstraint;
@property(retain, nonatomic) NSView *indentView; // @synthesize indentView=_indentView;
@property(retain, nonatomic) NSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(nonatomic) BOOL isWatchDestination; // @synthesize isWatchDestination=_isWatchDestination;
@property(retain, nonatomic) IDERunDestination *runDestination; // @synthesize runDestination=_runDestination;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)mouseUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)_selectAndClose;
- (void)drawRect:(struct CGRect)arg1;
- (void)layout;
- (BOOL)hideWifi;
- (BOOL)hideSpinner;
- (long long)accessory;
- (void)_removeBindings;
- (void)_addBindings;
- (void)_observe:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_bind:(id)arg1 toKeyPath:(id)arg2;
- (void)_bind:(id)arg1 toKeyPath:(id)arg2 options:(id)arg3;
- (void)viewDidMoveToWindow;
- (void)awakeFromNib;

@end

