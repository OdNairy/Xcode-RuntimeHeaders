//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSMutableArray;

@interface PBXLineBrowser : NSView
{
    long long _needsReselectAtColumn;
    BOOL _needsTile;
    id _dataSource;
    long long _trackingCol;
    long long _columnNeedingUpdate;
    NSMutableArray *_columnCache;
}

+ (id)underlineColor;
+ (id)popUpArrowsImage;
+ (id)sharedTextCell;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (BOOL)isFlipped;
- (void)popColumnAtIndex:(long long)arg1;
- (void)mouseDown:(id)arg1;
- (id)_popUpCellForColumn:(long long)arg1;
- (void)_popUpAction:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)_windowDidUpdate:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setNeedsTile:(BOOL)arg1;
- (void)_tile;
- (void)reloadSelection;
- (void)reselectColumn:(long long)arg1;
- (void)reloadRow:(long long)arg1 inColumn:(long long)arg2;
- (void)reloadColumn:(long long)arg1;
- (void)_reloadData;
- (void)_reloadSelectionInColumnCache:(id)arg1 column:(long long)arg2;
- (void)_tellDataSourceDidDismissMenuForColumn:(long long)arg1;
- (void)_tellDataSourceWillPopMenuForColumn:(long long)arg1;
- (void)_tellDataSourceItemWasSelectedAtRow:(long long)arg1 inColumn:(long long)arg2;
- (id)_askDataSourceForToolTipForColumn:(long long)arg1;
- (long long)_askDataSourceForIndexOfSelectedRowInColumn:(long long)arg1;
- (id)_askDataSourceForImageAtRow:(long long)arg1 inColumn:(long long)arg2 forMenu:(BOOL)arg3;
- (id)_askDataSourceForAttributedTitleAtRow:(long long)arg1 inColumn:(long long)arg2 forMenu:(BOOL)arg3;
- (id)_askDataSourceForTitleAtRow:(long long)arg1 inColumn:(long long)arg2 forMenu:(BOOL)arg3;
- (long long)_askDataSourceForNumberOfRowsInColumn:(long long)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

