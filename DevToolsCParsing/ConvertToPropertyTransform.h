//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCParsing/Transform.h>

@class NSString, ObjcMethodDeclaration;

@interface ConvertToPropertyTransform : Transform
{
    NSString *_newPropertyName;
    BOOL _deleteIvar;
    ObjcMethodDeclaration *_getterMethod;
    ObjcMethodDeclaration *_setterMethod;
    BOOL _setterDoesRetainRelease;
    NSString *_defaultGetterName;
    NSString *_defaultSetterName;
}

+ (void)initialize;
- (BOOL)performFinal;
- (void)deleteMethodInterface:(id)arg1;
- (BOOL)performPerFile;
- (BOOL)performFirstFile;
- (BOOL)checkFinal;
- (void)findGetterInMethods:(id)arg1;
- (void)findSetterInMethods:(id)arg1;
- (BOOL)checkPerFile;
- (BOOL)checkFirstFile;
- (BOOL)checkValidateInputs;
- (void)dealloc;
- (id)initWithTransformInstance:(id)arg1 declaration:(id)arg2 paramDict:(id)arg3;
- (id)transformRelatedNames;

@end

