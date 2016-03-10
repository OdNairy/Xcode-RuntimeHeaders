//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUResourceEditor.h"

#import "GPUDataTableViewDataProvider.h"
#import "GPUDataTableViewDelegate.h"

@class DVTBorderedView, DYRenderingAttributes, GPUDataTableView, GPUMTLBufferData, NSLayoutConstraint, NSPopUpButton, NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLBufferEditor : GPUResourceEditor <GPUDataTableViewDataProvider, GPUDataTableViewDelegate>
{
    GPUMTLBufferData *_bufferData;
    DYRenderingAttributes *_renderingAttributes;
    double _minColumnWidth;
    BOOL _isPopulated;
    BOOL _isIndexBuffer;
    BOOL _showOffset;
    GPUDataTableView *_vboView;
    NSPopUpButton *_displayFormatPopup;
    NSString *_displayFormat;
    DVTBorderedView *_bottomToolbar;
    NSLayoutConstraint *_toolbarHeightConstraint;
    long long _numberOfColumns;
}

+ (id)assetBundle;
@property BOOL showOffset; // @synthesize showOffset=_showOffset;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) __weak NSLayoutConstraint *toolbarHeightConstraint; // @synthesize toolbarHeightConstraint=_toolbarHeightConstraint;
@property(nonatomic) __weak DVTBorderedView *bottomToolbar; // @synthesize bottomToolbar=_bottomToolbar;
@property(retain, nonatomic) NSString *displayFormat; // @synthesize displayFormat=_displayFormat;
@property(retain, nonatomic) NSPopUpButton *displayFormatPopup; // @synthesize displayFormatPopup=_displayFormatPopup;
@property(retain, nonatomic) GPUDataTableView *vboView; // @synthesize vboView=_vboView;
- (void).cxx_destruct;
- (void)viewWillUninstall;
- (void)beginEditor;
- (void)populate;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (struct CGPoint)scrollPointForByteOffset:(long long)arg1;
- (long long)documentVisibleRectOffsetInBytes;
- (unsigned int)bytesPerItem;
- (id)widthInColumns;
- (void)setWidthInColumns:(id)arg1;
- (double)dataTableView:(id)arg1 minimumWidthForColumn:(long long)arg2 inGroup:(long long)arg3;
- (id)dataTableView:(id)arg1 textForCellAtRow:(long long)arg2 column:(long long)arg3 inColumnGroup:(long long)arg4;
- (long long)dataTableView:(id)arg1 numberOfColumnsInGroup:(long long)arg2;
- (long long)numberOfColumnGroupsInTableView:(id)arg1;
- (long long)numberOfRowsInDataTableView:(id)arg1;
- (id)supportedResourceClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

