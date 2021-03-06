//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSStackView;

@interface IBImagePickerInspectorPopoverContentView : NSView
{
    NSStackView *_verticalStackView;
    NSArray *_images;
    NSArray *_representedObjects;
    NSArray *_toolTips;
    long long _columns;
    id <IBImagePickerInspectorPopoverContentViewDelegate> _delegate;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) __weak id <IBImagePickerInspectorPopoverContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long columns; // @synthesize columns=_columns;
@property(copy, nonatomic) NSArray *toolTips; // @synthesize toolTips=_toolTips;
@property(copy, nonatomic) NSArray *representedObjects; // @synthesize representedObjects=_representedObjects;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)layout;
- (void)buttonClicked:(id)arg1;

@end

