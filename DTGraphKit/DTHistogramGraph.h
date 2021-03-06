//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DTGraphKit/DTGraph.h>

@class DTHistogramBar, NSArray, NSMutableArray;

@interface DTHistogramGraph : DTGraph
{
    _Bool _groupedFormat;
    NSMutableArray *_bins;
    DTHistogramBar *_selectedBar;
    NSArray *_legend;
    BOOL _binsAreNamed;
}

- (void).cxx_destruct;
- (void)clearSelection;
- (void)mouseDown:(id)arg1;
- (void)observeModel:(BOOL)arg1;
- (void)_layoutBins;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_createBins;
@property(readonly, nonatomic) double calculateVerticalBorderBuffer;
@property(readonly, nonatomic) double calculateHorizontalBorderBuffer;
- (long long)_bestNumberOfDivsGuessing:(long long)arg1;
- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawLegend:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (long long)_maxValue;
- (void)clearCache;
- (void)drawBackground:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_getLayoutRect:(struct LayoutRect *)arg1;

@end

