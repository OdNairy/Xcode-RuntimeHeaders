//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBViewDragDelegate.h"

@class IBICSlottedAssetCapsule, IBICSlottedAssetRepIdentifier, NSArray, NSColor, NSImage, NSSet, NSString;

@protocol IBICSlottedAssetCapsuleDelegate <IBViewDragDelegate>
- (NSColor *)slottedAssetCapsule:(IBICSlottedAssetCapsule *)arg1 backgroundColorForAssetRepIdentifier:(IBICSlottedAssetRepIdentifier *)arg2;
- (NSArray *)slottedAssetCapsule:(IBICSlottedAssetCapsule *)arg1 orderAssetRepIdentifiers:(NSSet *)arg2;
- (NSImage *)slottedAssetCapsule:(IBICSlottedAssetCapsule *)arg1 imageForAssetRepIdentifier:(IBICSlottedAssetRepIdentifier *)arg2;
- (NSString *)slottedAssetCapsule:(IBICSlottedAssetCapsule *)arg1 titleForAssetRepIdentifier:(IBICSlottedAssetRepIdentifier *)arg2;
- (void)slottedAssetCapsuleWillLayout:(IBICSlottedAssetCapsule *)arg1;
@end

