//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DevkitDeclaration, DevkitType, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface DevkitGlobalProjectData : NSObject
{
    DevkitDeclaration *_globalScope;
    NSMutableArray *_allFunctionBodies;
    NSMutableDictionary *_allInstanceMethods;
    NSMutableDictionary *_allClassMethods;
    NSMutableSet *_allClassesSet;
    NSMutableArray *_allClassesList;
    NSMutableArray *_protocols;
    NSMutableDictionary *_declsInFileDict;
    NSMutableDictionary *_duplicateDeclarations;
    DevkitType *_unsignedType;
    DevkitType *_intType;
    DevkitType *_voidType;
    DevkitType *_longType;
    DevkitType *_unsignedLongType;
    DevkitType *_classType;
    DevkitDeclaration *_classDecl;
    DevkitDeclaration *_classStructDecl;
}

- (void).cxx_destruct;
- (id)bodyForFunctionDecl:(id)arg1;
- (id)classType;
- (void)initializeClassType;
- (id)unsignedLongType;
- (id)longType;
- (id)voidType;
- (id)intType;
- (id)unsignedType;
- (id)protocols;
- (void)addProtocol:(id)arg1;
- (id)findProtocol:(id)arg1;
- (id)propertyForExpression:(id)arg1;
- (id)propertyForClass:(id)arg1 messageName:(id)arg2;
- (id)_propertyForMessageName:(id)arg1 inContainer:(id)arg2;
- (id)methodForExpression:(id)arg1;
- (id)lookupObjcMethodWithReceiverType:(id)arg1 messageName:(id)arg2;
- (id)allClassMethods;
- (id)allInstanceMethods;
- (id)nodeRangeAtLocation:(id)arg1;
- (id)expressionAtLocation:(id)arg1;
- (id)expressionAtLocation:(id)arg1 inDecls:(id)arg2;
- (id)nodeAtLocation:(id)arg1;
- (id)nodeInBodyOfDeclaration:(id)arg1 atLocation:(id)arg2;
- (id)nodeInDeclaration:(id)arg1 atLocation:(id)arg2;
- (id)expressionOrDeclAtLocation:(id)arg1 inTree:(id)arg2;
- (void)addFunctionBody:(id)arg1;
- (id)duplicateDeclarations;
- (void)addClass:(id)arg1;
- (id)allClassesWithInterface;
- (id)allClasses;
- (id)allFunctionBodies;
- (void)cleanup;
- (void)setup;
- (id)globalScope;

@end

