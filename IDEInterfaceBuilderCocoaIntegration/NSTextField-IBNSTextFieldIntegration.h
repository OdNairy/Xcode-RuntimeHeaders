//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

@class NSNumber;

@interface NSTextField (IBNSTextFieldIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedPreferredWidthMode;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)decodePreferredMaxLayoutWidthForUnarchiver:(id)arg1;
- (void)encodePreferredMaxLayoutWidthForArchiver:(id)arg1;
- (void)setIbInspectedPreferredWidthMode:(long long)arg1;
- (long long)ibInspectedPreferredWidthMode;
@property(copy) NSNumber *ibExternalPreferredMaxLayoutWidth;
- (void)ibCellDidChangeInspectedLineBreakMode:(id)arg1;
- (void)setIbInspectedLineBreakMode:(long long)arg1;
- (void)ibTextFieldCellDidChangeInspectorLayout:(id)arg1;
- (void)_ibDidChangeTextFieldWrappingMode:(BOOL)arg1;
- (void)ibVerifyPreferredMaxLayoutWidthOnlyForLegacyStaticWrappingTextUsingAutomaticModeInDocument:(id)arg1;
- (id)ibVerifyPreferredMaxLayoutWidthOnlyForMultilineLabelsInDocument:(id)arg1;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)_setEffectivePreferredMaxLayoutWidthSettingsOnTextField:(id)arg1;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
@property(readonly) BOOL ibIsWrappingStaticTextLabel;
- (void)ibSetContentCompressionResistancePriorityForTextWrapping;
- (BOOL)ibPrefersToBeSizedToFitAfterEditingTitle;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibUsesWidgetTypeForTypeNameForDefaultLabel;
- (void)setIbInspectedControlSize:(unsigned long long)arg1;
- (struct CGSize)ibPreferredSize;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)ibMinimumSize;
@end

