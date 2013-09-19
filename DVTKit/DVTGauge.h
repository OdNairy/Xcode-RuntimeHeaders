/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSGradient;

@interface DVTGauge : NSView
{
    unsigned long long _style;
    unsigned long long _indicatorStyle;
    double _doubleValue;
    double _minValue;
    double _maxValue;
    long long _backgroundStyle;
    NSGradient *_indicatorGradient;
    id _renderer;
}

@property(nonatomic) id renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) NSGradient *indicatorGradient; // @synthesize indicatorGradient=_indicatorGradient;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) unsigned long long indicatorStyle; // @synthesize indicatorStyle=_indicatorStyle;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
