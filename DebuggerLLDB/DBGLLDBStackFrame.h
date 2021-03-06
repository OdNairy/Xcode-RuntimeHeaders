//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBGStackFrame.h"

@class NSArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface DBGLLDBStackFrame : DBGStackFrame
{
    struct SBFrame _lldbFrame;
    struct SBValueList _lldbVariables;
    struct SBValueList _lldbRegisters;
    NSArray *_variables;
    NSArray *_locals;
    NSArray *_arguments;
    NSArray *_fileStatics;
    NSArray *_globals;
    NSArray *_registers;
    NSMutableSet *_expressionDataValuesToInvalidate;
    struct _opaque_pthread_t *_sessionThreadIdentifier;
    BOOL _hasInitializedDisassembly;
}

+ (BOOL)supportsInvalidationPrevention;
@property(copy, nonatomic) NSArray *globals; // @synthesize globals=_globals;
@property(copy, nonatomic) NSArray *fileStatics; // @synthesize fileStatics=_fileStatics;
@property(copy, nonatomic) NSArray *registers; // @synthesize registers=_registers;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSArray *locals; // @synthesize locals=_locals;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)disassembly;
- (id)dataValuesToInvalidate;
- (id)_lldbSession;
- (void)_getRegistersFromLLDBOnSessionThread;
- (void)_getGlobalsFromLLDBOnSessionThread;
- (void)_getFileStaticsFromLLDBOnSessionThread;
- (void)_getLocalsFromLLDBOnSessionThread;
- (void)_getArgumentsFromLLDBOnSessionThread;
- (id)_evaluateExpressionOnSessionThread:(id)arg1 options:(id)arg2;
- (void)evaluateExpression:(id)arg1 options:(id)arg2 withResultBlock:(CDUnknownBlockType)arg3;
- (void)requestDataValueForSymbol:(id)arg1 symbolKind:(id)arg2 atLocation:(id)arg3 onQueue:(id)arg4 withResultBlock:(CDUnknownBlockType)arg5;
- (id)_findSymbolWithName:(id)arg1 symbolKind:(id)arg2 atLocation:(id)arg3;
- (void)_getAllFrameVariablesOnLLDBSessionThread;
- (void)_addSessionThreadAction:(CDUnknownBlockType)arg1;
- (BOOL)_isSessionThread;
- (void)_assertOnSessionThread;
- (void)_setReturnValueFromInitIfNecessary;
- (struct SBFrame)lldbFrame;
- (id)initWithParentThread:(id)arg1 frameNumber:(id)arg2 framePointer:(id)arg3 name:(id)arg4 lldbFrame:(struct SBFrame)arg5;

@end

