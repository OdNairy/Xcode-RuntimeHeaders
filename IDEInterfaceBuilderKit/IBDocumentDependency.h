//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBDocumentDependencyVersion, NSArray, NSMutableArray, NSString;

@interface IBDocumentDependency : NSObject
{
    NSMutableArray *_versions;
    IBDocumentDependencyVersion *_defaultVersion;
    NSString *_identifier;
    NSString *_dependencyLabel;
    long long _defaultVersionNumber;
    NSString *_defaultVersionPrefix;
    NSString *_unknownVersionLabel;
    NSString *_encodedIdentifier;
    NSString *_archivedIdentifier;
    double _positionPriority;
    NSString *_dependencyType;
}

+ (id)documentDependencyWithExtension:(id)arg1;
+ (id)documentDependencyWithIdentifier:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSArray *versions; // @synthesize versions=_versions;
@property(readonly, nonatomic) NSString *dependencyType; // @synthesize dependencyType=_dependencyType;
@property(readonly, nonatomic) double positionPriority; // @synthesize positionPriority=_positionPriority;
@property(readonly, nonatomic) NSString *archivedIdentifier; // @synthesize archivedIdentifier=_archivedIdentifier;
@property(readonly, nonatomic) NSString *encodedIdentifier; // @synthesize encodedIdentifier=_encodedIdentifier;
@property(readonly, nonatomic) NSString *unknownVersionLabel; // @synthesize unknownVersionLabel=_unknownVersionLabel;
@property(readonly, nonatomic) NSString *defaultVersionPrefix; // @synthesize defaultVersionPrefix=_defaultVersionPrefix;
@property(readonly, nonatomic) long long defaultVersionNumber; // @synthesize defaultVersionNumber=_defaultVersionNumber;
@property(readonly, nonatomic) NSString *dependencyLabel; // @synthesize dependencyLabel=_dependencyLabel;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)closestVersionLessThanOrEqualToMarketingVersion:(id)arg1;
- (id)defaultVersion;
- (id)initWithExtension:(id)arg1;
- (id)init;

@end

