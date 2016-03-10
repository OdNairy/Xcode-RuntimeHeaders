//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

@interface IBICGraphicsFeatureSet : IBICSlotComponent
{
    long long _graphicsFeatureSetClass;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4 graphicsFeatureSetClass:(long long)arg5;
+ (id)fallbackContentsJSONKeys;
+ (id)contentsJSONKey;
@property(readonly) long long graphicsFeatureSetClass; // @synthesize graphicsFeatureSetClass=_graphicsFeatureSetClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) long long graphicsClass;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4 graphicsFeatureSetClass:(long long)arg5;

@end
