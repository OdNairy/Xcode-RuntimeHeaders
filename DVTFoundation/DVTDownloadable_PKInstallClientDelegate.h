//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPromise, NSTimer;

@interface DVTDownloadable_PKInstallClientDelegate : NSObject
{
    NSTimer *_timer;
    BOOL _isRunningModal;
    DVTPromise *_promise;
}

@property(retain) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)_callPKInstallClientStatusTimer:(id)arg1;
- (void)installClientDidFinish:(id)arg1;
- (void)installClient:(id)arg1 didFailWithError:(id)arg2;
- (void)installClient:(id)arg1 currentState:(int)arg2 package:(id)arg3 progress:(double)arg4 timeRemaining:(double)arg5;
- (void)installClientDidBegin:(id)arg1;
- (id)initForModal:(BOOL)arg1 promise:(id)arg2;

@end

