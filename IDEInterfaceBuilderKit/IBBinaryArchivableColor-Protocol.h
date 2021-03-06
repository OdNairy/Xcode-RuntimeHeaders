//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBinaryArchiving.h"
#import "NSObject.h"

@class IBBinaryArchiver, NSString;

@protocol IBBinaryArchivableColor <NSObject, IBBinaryArchiving>
+ (id <IBBinaryArchivableColor>)blackColor;
+ (id <IBBinaryArchivableColor>)ibColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id <IBBinaryArchivableColor>)ibColorWithWhite:(double)arg1 alpha:(double)arg2;
- (NSString *)ibArchivedSystemKeyPathForBinaryArchiver:(IBBinaryArchiver *)arg1;
- (void)set;
- (BOOL)ibGetRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (BOOL)ibGetWhite:(double *)arg1 alpha:(double *)arg2;
@end

