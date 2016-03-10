//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDEIndexSymbol, IDEIndexSymbolOccurrence, NSImage, NSString;

@interface IDESourceCodeCallerGeniusResult : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDEIndexSymbolOccurrence *_calleeSymbolOccurrence;
    IDEIndexSymbol *_callerSymbol;
}

- (void).cxx_destruct;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
@property(readonly, copy) NSString *description;
- (id)initWithCalleeSymbolOccurrence:(id)arg1 inSymbolForCaller:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

