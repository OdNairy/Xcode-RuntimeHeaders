//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

@interface IBICLocus : IBICSlotComponent
{
    unsigned long long _locusType;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 type:(unsigned long long)arg4 displayOrder:(double)arg5;
+ (id)contentsJSONKey;
@property(readonly, nonatomic) unsigned long long locusType; // @synthesize locusType=_locusType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToSlotComponent:(id)arg1;
- (BOOL)isEqualToLocus:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 type:(unsigned long long)arg4 displayOrder:(double)arg5;

@end

