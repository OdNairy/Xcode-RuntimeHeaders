//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XDPUtility : NSObject
{
}

+ (id)validateElementName:(id)arg1 beginWithLowerCase:(BOOL)arg2 beginWithUpperCase:(BOOL)arg3 allowPeriod:(BOOL)arg4;
+ (void)_makeNameValidationSets;
+ (BOOL)booleanForKey:(id)arg1 inElement:(id)arg2 inStereotypeName:(id)arg3;
+ (void)setBoolean:(BOOL)arg1 forKey:(id)arg2 inElement:(id)arg3 inStereotypeName:(id)arg4;
+ (id)objectForKey:(id)arg1 inElement:(id)arg2 inStereotypeName:(id)arg3;
+ (void)setObject:(id)arg1 forKey:(id)arg2 inElement:(id)arg3 inStereotypeName:(id)arg4;
+ (void)removeStereotypeNamed:(id)arg1 inElement:(id)arg2;

@end

