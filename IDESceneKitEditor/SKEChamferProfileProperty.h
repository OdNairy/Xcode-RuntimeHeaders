//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDESceneKitEditor/SKECurveProperty.h>

#import "SKEChamferProfileViewControllerDelegate.h"

@class NSString;

@interface SKEChamferProfileProperty : SKECurveProperty <SKEChamferProfileViewControllerDelegate>
{
}

- (void)chamferProfileViewControllerChamferProfileDidChange:(id)arg1;
- (id)curveTitle;
- (id)chamferProfileViewController;
- (id)makeCurveViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

