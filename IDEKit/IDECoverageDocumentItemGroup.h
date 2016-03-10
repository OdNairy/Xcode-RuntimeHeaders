//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSMapTable, NSMutableArray, NSString;

@interface IDECoverageDocumentItemGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_coverageDocumentItems;
    NSMapTable *_workspaceToItemMapTable;
    NSMapTable *_workspaceToInvalidationObserverTable;
    NSString *_name;
}

+ (id)sharedCoverageItemsGroup;
+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
@property(readonly) NSString *navigableItem_name;
- (id)itemForCoverageData:(id)arg1 inWorkspace:(id)arg2;

// Remaining properties
@property(copy) NSArray *coverageDocumentItems; // @dynamic coverageDocumentItems;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableCoverageDocumentItems; // @dynamic mutableCoverageDocumentItems;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

