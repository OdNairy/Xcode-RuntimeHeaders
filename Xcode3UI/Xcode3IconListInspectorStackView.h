//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTStackView_ML.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSString, Xcode3IconListInspectorCoordinator;

@interface Xcode3IconListInspectorStackView : DVTStackView_ML <DVTInvalidation>
{
    Xcode3IconListInspectorCoordinator *_coordinator;
}

+ (void)initialize;
- (void).cxx_destruct;
- (struct CGSize)sizeForPulledSubviewMagnitude:(double)arg1;
- (struct CGPoint)pushedOriginForSubview:(id)arg1 position:(double)arg2;
- (struct CGSize)pushedSizeForSubview:(id)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

