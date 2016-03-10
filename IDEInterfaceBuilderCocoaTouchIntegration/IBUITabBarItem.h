//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIBarItem.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IBOffsetWrapper, IBUITabBar, NSImage, NSNumber, NSString;

@interface IBUITabBarItem : IBUIBarItem <IBDocumentArchiving, NSCoding, NSCopying>
{
    NSString *_badgeValue;
    NSImage *_selectedImage;
    NSNumber *_systemItemIdentifier;
    IBUITabBar *_tabBar;
    IBOffsetWrapper *_titlePositionAdjustment;
}

+ (void)registerMarshallingRecordHandlers;
+ (id)systemTabBarItem:(int)arg1 withTargetRuntime:(id)arg2;
+ (id)keyPathsForValuesAffectingIbInspectedTitlePositionVerticalAdjustment;
+ (id)keyPathsForValuesAffectingIbInspectedTitlePositionHorizontalAdjustment;
+ (id)keyPathsForValuesAffectingIbInspectedHasSearchTextPositionAdjustment;
+ (id)keyPathsForValuesAffectingIbInspectedSelectedImage;
@property(copy, nonatomic) IBOffsetWrapper *titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property(copy, nonatomic) NSNumber *systemItemIdentifier; // @synthesize systemItemIdentifier=_systemItemIdentifier;
@property(retain, nonatomic) NSImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
- (void)encodeSystemItemIdentifier:(id)arg1;
- (void)decodeSystemItemIdentifier:(id)arg1;
- (BOOL)isSystemItem;
- (void)setTabBar:(id)arg1;
- (id)titleFont;
- (struct CGRect)titleRect;
- (struct CGRect)frame;
- (id)barView;
- (id)tabBar;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldAcceptImages;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibPasteboardTypes;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)setIbInspectedTitlePositionVerticalAdjustment:(double)arg1;
- (double)ibInspectedTitlePositionVerticalAdjustment;
- (void)setIbInspectedTitlePositionHorizontalAdjustment:(double)arg1;
- (double)ibInspectedTitlePositionHorizontalAdjustment;
- (void)setIbInspectedHasTitlePositionAdjustment:(BOOL)arg1;
- (BOOL)ibInspectedHasTitlePositionAdjustment;
- (void)setIbInspectedSystemItemIdentifier:(id)arg1;
- (id)ibInspectedSystemItemIdentifier;
- (void)setIbInspectedImage:(id)arg1;
- (void)setIbInspectedTitle:(id)arg1;
- (void)setIbInspectedSelectedImage:(id)arg1;
- (id)ibInspectedSelectedImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

