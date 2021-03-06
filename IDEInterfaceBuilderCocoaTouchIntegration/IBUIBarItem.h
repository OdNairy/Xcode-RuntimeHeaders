//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBDocumentArchiving.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class IBCocoaTouchTargetRuntime, NSImage, NSString;

@interface IBUIBarItem : NSObject <IBDocumentArchiving, NSCoding, NSCopying>
{
    BOOL _enabled;
    NSString *_title;
    NSImage *_image;
    CDStruct_c519178c _imageInsets;
    long long _tag;
    IBCocoaTouchTargetRuntime *_targetRuntime;
}

+ (id)keyPathsForValuesAffectingImageInsetsRight;
+ (id)keyPathsForValuesAffectingImageInsetsLeft;
+ (id)keyPathsForValuesAffectingImageInsetsBottom;
+ (id)keyPathsForValuesAffectingImageInsetsTop;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) CDStruct_c519178c imageInsets; // @synthesize imageInsets=_imageInsets;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)runtimeClassNameForContext:(id)arg1 returningOptionalFallbackClassName:(id *)arg2;
- (Class)classToTakeInitialMarshalledKeysFrom:(id)arg1;
- (void)setTargetRuntime:(id)arg1;
- (id)targetRuntime;
- (void)setImageInsetsRight:(double)arg1;
- (void)setImageInsetsLeft:(double)arg1;
- (void)setImageInsetsBottom:(double)arg1;
- (void)setImageInsetsTop:(double)arg1;
- (double)imageInsetsRight;
- (double)imageInsetsLeft;
- (double)imageInsetsBottom;
- (double)imageInsetsTop;
- (id)titleFont;
- (struct CGRect)titleRect;
- (struct CGRect)frame;
- (id)barView;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTargetRuntime:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setIbInspectedImage:(id)arg1;
- (id)ibInspectedImage;
- (void)setIbInspectedTitle:(id)arg1;
- (id)ibInspectedTitle;
- (id)ibLocalSearchableNumericAttributeKeyPaths;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (BOOL)shouldAcceptImages;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibInitialConnectionLabelSearchTerm;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

