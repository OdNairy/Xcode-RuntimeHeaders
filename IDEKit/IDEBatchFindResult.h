//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTFindResult, IDEBatchFindCandidateFile, IDEBatchFindResultGroup, IDEFileReference, IDEIndexSymbol, NSDate, NSImage, NSString;

@interface IDEBatchFindResult : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    DVTFindResult *_findResult;
    struct _NSRange _wholeWordRange;
    BOOL _wholeWordCalculated;
    IDEIndexSymbol *_symbol;
    IDEBatchFindCandidateFile *_foundInFile;
    NSDate *_resultTime;
    NSString *_displayTitle;
    struct _NSRange _matchRange;
    unsigned long long _matchOccurance;
    BOOL _shouldShowAsLocked;
    BOOL _shouldIncludeInReplacement;
    BOOL _doesParentsBackingFileExist;
    IDEBatchFindResultGroup *_parentFindResultGroup;
}

+ (id)keyPathsForValuesAffectingDisplayImage;
+ (id)findResultsSortedByFileByDocumentLocation:(id)arg1;
@property BOOL doesParentsBackingFileExist; // @synthesize doesParentsBackingFileExist=_doesParentsBackingFileExist;
@property(nonatomic) __weak IDEBatchFindResultGroup *parentFindResultGroup; // @synthesize parentFindResultGroup=_parentFindResultGroup;
@property(nonatomic) BOOL shouldIncludeInReplacement; // @synthesize shouldIncludeInReplacement=_shouldIncludeInReplacement;
@property BOOL shouldShowAsLocked; // @synthesize shouldShowAsLocked=_shouldShowAsLocked;
@property(retain) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
@property(readonly) IDEBatchFindCandidateFile *foundInFile; // @synthesize foundInFile=_foundInFile;
@property(readonly) DVTFindResult *findResult; // @synthesize findResult=_findResult;
- (void).cxx_destruct;
@property(readonly) NSString *formattedStringRepresentation;
@property(readonly) NSImage *statusImage;
@property(readonly) NSImage *displayImage;
@property(readonly) NSString *displayTitle;
@property(readonly) struct _NSRange matchRange;
@property(readonly) struct _NSRange symbolRange;
@property(readonly) NSString *wholeWordMatch;
@property(readonly) struct _NSRange wholeWordRange;
- (BOOL)resultValid;
- (void)fileWasSavedDuringReplace;
@property(readonly, getter=isReplaceable) BOOL replacable;
- (BOOL)hasSymbol;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithResult:(id)arg1 foundInFile:(id)arg2;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

