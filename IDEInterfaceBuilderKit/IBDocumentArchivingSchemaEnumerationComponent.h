//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentArchivingSchemaComponent.h>

@class NSString;

@interface IBDocumentArchivingSchemaEnumerationComponent : IBDocumentArchivingSchemaComponent
{
    CDStruct_6db0658e *_map;
    long long _mapCount;
    unsigned long long _fallbackValue;
    NSString *_typeName;
}

+ (id)sharedInstance;
@property(readonly) NSString *typeName; // @synthesize typeName=_typeName;
- (void).cxx_destruct;
- (id)descriptionWithIndentationLevel:(long long)arg1;
- (void)insertIntoSchema:(id)arg1;
- (id)stringForValue:(long long)arg1;
- (BOOL)decodeValue:(long long *)arg1 fromString:(id)arg2;
- (id)initWithTypeName:(id)arg1 enumerationMap:(CDStruct_6db0658e *)arg2 count:(long long)arg3 copy:(BOOL)arg4 fallbackValue:(long long)arg5;

@end

