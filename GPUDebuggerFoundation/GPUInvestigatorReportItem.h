//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

@class NSArray, NSString;

@interface GPUInvestigatorReportItem : GPUTraceOutlineItem
{
    NSArray *_currentAutomaticItems;
    NSString *_reportUUID;
}

@property(readonly, nonatomic) NSString *reportUUID; // @synthesize reportUUID=_reportUUID;
@property(retain, nonatomic) NSArray *currentAutomaticItems; // @synthesize currentAutomaticItems=_currentAutomaticItems;
- (void).cxx_destruct;
- (id)archive;
- (unsigned long long)hash;
- (void)setParent:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithController:(id)arg1 parent:(id)arg2 label:(id)arg3;

@end

