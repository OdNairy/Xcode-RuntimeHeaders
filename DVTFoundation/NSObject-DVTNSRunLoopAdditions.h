//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (DVTNSRunLoopAdditions)
- (id)dvt_performAfterDelay:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)dvt_performAfterDelay:(double)arg1 inModes:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)dvt_performOnRunLoop:(id)arg1 inModes:(id)arg2 order:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_DVTRunLoopToken_perform:(id)arg1;
@end

