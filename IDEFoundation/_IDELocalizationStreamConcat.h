//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationStream.h>

@interface _IDELocalizationStreamConcat : IDELocalizationStream
{
    id <IDELocalizationStreamPublisher> _first;
    id <IDELocalizationStreamPublisher> _second;
}

+ (id)withFirst:(id)arg1 second:(id)arg2;
@property(retain) id <IDELocalizationStreamPublisher> second; // @synthesize second=_second;
@property(retain) id <IDELocalizationStreamPublisher> first; // @synthesize first=_first;
- (void).cxx_destruct;
- (void)onCompleted;
- (void)onError:(id)arg1;
- (void)onNext:(id)arg1;
- (id)subscribe:(id)arg1;

@end

