//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBICAssetCapsule.h>

#import "NSTextFieldDelegate.h"

@class IBICSlottedAssetGroupView, NSSet, NSString;

@interface IBICSlottedAssetCapsule : IBICAssetCapsule <NSTextFieldDelegate>
{
    Class _slotClass;
    NSSet *_assetRepIdentifiers;
    IBICSlottedAssetGroupView *_groupSubview;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (double)suggestedMaxWidthForContent;
- (id)layoutOrderWithConflictedMatrix:(id *)arg1;
- (BOOL)showSectionFooters;
- (id)targettedAssetComponentIDsAtPoint:(struct CGPoint)arg1;
- (void)layoutTopDown;
- (id)assetComponentIDAtPoint:(struct CGPoint)arg1;
- (BOOL)isImageRepID:(id)arg1 hitByPoint:(struct CGPoint)arg2;
- (struct CGRect)frameForImageOfChildWithAssetComponentID:(id)arg1;
- (struct CGRect)bandSelectionFrameForAssetComponentID:(id)arg1;
- (struct CGSize)iconSize;
- (void)setHighlightedDragDestinationAssetRepIdentifiers:(id)arg1;
- (void)setContextFocusedAssetComponentIDs:(id)arg1;
- (void)setSelectedAssetComponentIDs:(id)arg1;
- (void)reloadValues;
- (id)allImageRepIdentifiersForImageRepViews;
- (id)repViewForAssetRepIdentifier:(id)arg1;
- (id)orderedImageRepIdentifiers;
- (id)groupTitleWhenNil;
- (Class)slotClass;
- (void)setAssetRepIdentifiers:(id)arg1 andSlottedAssetClass:(Class)arg2;
- (id)assetRepIdentifiers;
- (void)setDrawsWithKeyAppearance:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

