//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBBinaryArchiving.h"
#import "IBObjectRepresentationTranslator.h"

@class NSDictionary, NSSet, NSString;

@interface IBMarshallableObjectPackage : NSObject <IBBinaryArchiving, IBObjectRepresentationTranslator>
{
    NSDictionary *_objectsToObjectIDs;
    NSDictionary *_objectIDsToObjects;
    NSDictionary *_marshallingDescription;
    NSSet *_unorderedObjects;
}

@property(readonly, nonatomic) NSSet *unorderedObjects; // @synthesize unorderedObjects=_unorderedObjects;
@property(readonly, nonatomic) NSDictionary *marshallingDescription; // @synthesize marshallingDescription=_marshallingDescription;
- (void).cxx_destruct;
- (id)objectForObjectRepresentation:(id)arg1;
- (id)objectRepresentationForObject:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)objectIDForObject:(id)arg1;
- (id)objectForObjectID:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithMarshallingDescription:(id)arg1 objectsToObjectIDs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

