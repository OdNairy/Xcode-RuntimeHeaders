//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBLayoutConstraintPropertyEditingController.h>

@interface IBLayoutConstraintMultiplierEditingController : IBLayoutConstraintPropertyEditingController
{
}

- (void)_didSelectConvertToDecimalFromMenu:(id)arg1;
- (void)_didSelectMultiplierPresetFromMenu:(id)arg1;
- (void)_didSelectReverseMultiplierFromMenu:(id)arg1;
- (void)populateMenu:(id)arg1;
- (id)_presetMenuItemForMultiplier:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)incrementValue;
- (void)decrementValue;
- (void)_applyMultiplierToConstraintsUsingBlock:(CDUnknownBlockType)arg1;
- (void)syncUIFromModel;
- (void)syncModelFromUI;
- (void)populateObservingTokens:(id)arg1;
- (void)setTextField:(id)arg1;

@end

