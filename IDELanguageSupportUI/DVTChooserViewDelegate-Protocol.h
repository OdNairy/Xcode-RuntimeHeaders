//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTChoice, DVTChooserView, NSArray;

@protocol DVTChooserViewDelegate <NSObject>

@optional
- (void)chooserView:(DVTChooserView *)arg1 userDidDoubleClickChoice:(DVTChoice *)arg2;
- (void)chooserView:(DVTChooserView *)arg1 userDidSelectChoices:(NSArray *)arg2;
- (void)chooserView:(DVTChooserView *)arg1 userWillSelectChoices:(NSArray *)arg2;
@end

