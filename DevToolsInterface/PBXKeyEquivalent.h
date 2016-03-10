//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface PBXKeyEquivalent : NSObject <NSCopying, NSCoding>
{
    NSString *_key;
    unsigned long long _mask;
}

+ (id)emptyKeyEquivalent;
+ (id)keyEquivalentFromPListEntry:(id)arg1;
+ (id)keyEquivalentWithKey:(id)arg1 modifierMask:(unsigned long long)arg2;
- (id)stringValue;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEmptyKeyEquivalent;
- (BOOL)isMultiKeyEquivalent;
- (unsigned long long)modifierMask;
- (id)key;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)_adjustModifierMask;
- (id)attributedStringValue;
- (id)_makeAttributedStringValue;
- (double)alignmentOffset;
- (void)_computeMetaKeyGlyphWidths;
- (double)_widthOfKeyEquivalentCharacter:(unsigned short)arg1 usingAttributes:(id)arg2;
- (void)_appendModifierGlyphsToString:(id)arg1;
- (id)_displayStringForKey;

@end

