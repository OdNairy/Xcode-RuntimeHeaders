//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface DVT_VMUClassInfo : NSObject <NSCoding>
{
    CDUnknownBlockType _reader;
    unsigned long long _remoteIsa;
    unsigned int _remotePointerSize;
    unsigned int _ivarCount;
    unsigned int _superclassOffset;
    unsigned int _instanceSize;
    unsigned int _ro_flags;
    unsigned int _rw_flags;
    struct objc_ivar **_localIvarList;
    int *_ivarScanSizes;
    unsigned int _remoteType;
    NSString *_remoteClassName;
    NSString *_remoteBinaryPath;
    DVT_VMUClassInfo *_superclassLayout;
    DVT_VMUClassInfo *_genericLayout;
    const char *_weakLayout;
    const char *_strongLayout;
    const char *_extendedLayout;
    char *_scanMap;
    BOOL _hasSpecificLayout;
}

+ (id)classInfoWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
+ (id)descriptionForTypeEncoding:(const char *)arg1 ivarName:(const char *)arg2;
+ (id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3;
+ (void)initialize;
@property(readonly) DVT_VMUClassInfo *superclassInfo; // @synthesize superclassInfo=_superclassLayout;
@property(readonly) NSString *className; // @synthesize className=_remoteClassName;
@property(readonly) NSString *binaryPath; // @synthesize binaryPath=_remoteBinaryPath;
@property(readonly) unsigned long long remoteIsa; // @synthesize remoteIsa=_remoteIsa;
@property(readonly) unsigned int instanceSize; // @synthesize instanceSize=_instanceSize;
@property(readonly) unsigned long long specificInstance;
- (void)enumerateKnownSublayoutsForObject:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1;
- (id)initWithIsaPointer:(unsigned long long)arg1 symbolicator:(struct _CSTypeRef)arg2;
- (id)initWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3;
@property(readonly) BOOL hasCppConstructorOrDestructor;
@property(readonly) BOOL isRootClass;
@property(readonly) BOOL isMetaClass;
@property(readonly) BOOL isRealized;
@property(readonly) BOOL isARR;
- (id)description;
- (id)debugDescription;
- (id)scanDescriptionWithSize:(unsigned int)arg1;
@property(readonly) NSString *shortIvarDescription;
@property(readonly) NSString *fullIvarDescription;
@property(readonly) int infoType;
@property(readonly) NSString *typeName;
- (id)type;
@property(readonly) NSString *binaryName;
- (void)_setIsa:(unsigned long long)arg1;
- (struct objc_ivar *)ivarWithOffset:(unsigned long long)arg1;
- (void)enumerateScanLocationsToSize:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateIvarsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) DVT_VMUClassInfo *genericInfo;
- (id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2;
- (id)_instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withReader:(CDUnknownBlockType)arg3;
- (void)_setExtendedLayout:(const char *)arg1;
- (id)_specificCopy:(unsigned long long)arg1 instanceSize:(unsigned int)arg2 superclassOffset:(unsigned int)arg3;
- (void)enumerateKnownSublayoutsForObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)scanObject:(unsigned long long)arg1 ofSize:(unsigned int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMemoryReader:(CDUnknownBlockType)arg1;
- (void)_logDescriptionWithSuperclasses:(BOOL)arg1 indentation:(int)arg2 toLogger:(CDUnknownBlockType)arg3;
- (id)_ivarDescription:(unsigned int)arg1 withSpacing:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(long long)arg3;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2;
- (void)dealloc;
- (id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 memoryReader:(CDUnknownBlockType)arg5;
- (id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(struct _CSTypeRef)arg3 type:(int)arg4 memoryReader:(CDUnknownBlockType)arg5;
- (id)_initWithClass:(unsigned long long)arg1 realizedOnly:(BOOL)arg2 infoMap:(id)arg3 symbolicator:(struct _CSTypeRef)arg4 type:(int)arg5 memoryReader:(CDUnknownBlockType)arg6;
- (id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3;
@property(readonly, nonatomic) BOOL hasSpecificLayout;
- (void)_setClassNameWithAddress:(unsigned long long)arg1;
- (void)_demangleClassName;
- (void)_parseIvarsAndLayouts;
- (void)_processExtendedLayout:(const char *)arg1;
- (void)_processARRLayout:(const char *)arg1 scanType:(int)arg2;
- (void)_faultScanMap;
- (const char *)_copyRemoteLayout:(unsigned long long)arg1;
- (struct objc_ivar *)_copyRemoteIvarAt:(unsigned long long)arg1;
- (const char *)_copyRemoteTypeAt:(unsigned long long)arg1;
- (const char *)_copyRemoteNameAt:(unsigned long long)arg1;
- (unsigned long long)_readRemotePointerAt:(unsigned long long)arg1;
- (int)_readRemoteIntAt:(unsigned long long)arg1;

@end

