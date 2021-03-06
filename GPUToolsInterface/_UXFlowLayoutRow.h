//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, _UXFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UXFlowLayoutRow : NSObject
{
    NSMutableArray *_items;
    struct CGSize _rowSize;
    struct CGRect _rowFrame;
    long long _index;
    BOOL _isValid;
    BOOL _complete;
    long long _verticalAlignement;
    long long _horizontalAlignement;
    BOOL _fixedItemSize;
    _UXFlowLayoutSection *_section;
}

@property(nonatomic) BOOL fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) BOOL complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct CGRect rowFrame; // @synthesize rowFrame=_rowFrame;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) _UXFlowLayoutSection *section; // @synthesize section=_section;
- (id)copyFromSection:(id)arg1;
- (id)snapshot;
- (void)dealloc;
- (void)addItem:(id)arg1;
- (void)layoutRow;
- (void)invalidate;
- (id)init;

@end

