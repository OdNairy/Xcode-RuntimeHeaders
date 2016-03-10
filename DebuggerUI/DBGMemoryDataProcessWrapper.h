//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEDebugNavigableModel.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DBGProcess, DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDELaunchSession, NSArray, NSImage, NSString;

@interface DBGMemoryDataProcessWrapper : NSObject <IDEDebugNavigableModel, IDEKeyDrivenNavigableItemRepresentedObject>
{
    DBGProcess *_process;
    BOOL _useProcessIconAndName;
}

+ (id)keyPathsForValuesAffectingMemoryDatas;
@property(readonly) DBGProcess *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
- (id)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(id)arg2;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (void)useProcessIconAndName;
@property(readonly) NSArray *memoryDatas;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
- (id)initWithProcess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

