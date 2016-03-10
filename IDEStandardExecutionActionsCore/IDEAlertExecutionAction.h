//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEExecutionAction.h"

@class NSArray, NSString;

@interface IDEAlertExecutionAction : IDEExecutionAction
{
    NSString *_alertText;
    NSString *_soundName;
    NSString *_alertStyle;
}

+ (id)keyPathsForValuesAffectingAlertSoundIsVisible;
+ (id)keyPathsForValuesAffectingAlertMessageIsVisible;
+ (id)keyPathsForValuesAffectingAlertActionBehavior;
+ (id)actionType;
@property(copy) NSString *alertStyle; // @synthesize alertStyle=_alertStyle;
@property(copy) NSString *soundName; // @synthesize soundName=_soundName;
@property(copy) NSString *alertText; // @synthesize alertText=_alertText;
- (void).cxx_destruct;
- (void)addAlertStyleFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addSoundNameFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)addAlertTextFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
@property(readonly) NSArray *availableSoundNames;
- (BOOL)alertSoundIsVisible;
@property(readonly) BOOL alertMessageIsVisible;
@property(readonly) int alertActionBehavior;
- (id)operationForExecutionWithBuildParameters:(id)arg1 error:(id *)arg2;

@end

