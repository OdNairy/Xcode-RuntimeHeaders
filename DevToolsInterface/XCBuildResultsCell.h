//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCEForwardingCell.h>

@class NSButtonCell;

@interface XCBuildResultsCell : XCEForwardingCell
{
    NSButtonCell *_expandButtonCell;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)expandAction:(id)arg1;
@property(readonly, nonatomic) NSButtonCell *expandButtonCell; // @dynamic expandButtonCell;

@end

