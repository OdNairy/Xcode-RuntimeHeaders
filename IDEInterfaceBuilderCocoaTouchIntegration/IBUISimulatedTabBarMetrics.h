//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedBarMetrics.h>

#import "IBUISimulatedBarMetricsBarStyle.h"
#import "NSCoding.h"

@class NSColor, NSString;

@interface IBUISimulatedTabBarMetrics : IBUISimulatedBarMetrics <NSCoding, IBUISimulatedBarMetricsBarStyle>
{
    int _barStyle;
    BOOL _translucent;
    struct NSColor *_tintColor;
    struct NSColor *_barTintColor;
}

+ (id)simulatedTabBarMetricsWithStyle:(int)arg1 translucent:(BOOL)arg2 tintColor:(struct NSColor *)arg3 barTintColor:(struct NSColor *)arg4;
+ (id)defaultMetrics;
+ (id)simulatedTabBarMetricsForTabBar:(id)arg1;
+ (id)simulatedBarMetricsForBarView:(id)arg1;
@property(readonly, copy, nonatomic) NSColor *barTintColor; // @synthesize barTintColor=_barTintColor;
@property(readonly, copy, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property(readonly, nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
- (void).cxx_destruct;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithStyle:(int)arg1 translucent:(BOOL)arg2 tintColor:(struct NSColor *)arg3 barTintColor:(struct NSColor *)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)simulatedBarMetricsByRemovingTintColor;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)displayName;
- (BOOL)isEqual:(id)arg1;
- (void)applyMetricsToBar:(id)arg1;
- (unsigned long long)barEdge;
- (Class)barClass;
- (id)ibWidgetType;
- (BOOL)isTranslucentForTargetRuntime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

