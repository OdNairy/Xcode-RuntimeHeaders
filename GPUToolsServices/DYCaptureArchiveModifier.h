//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYInOrderInstructionFilesVisitor.h"

@class DYCaptureArchive, DYCaptureFile, DYFunctionStreamModifier, NSError, NSMutableArray, NSMutableSet, NSString;

@interface DYCaptureArchiveModifier : DYInOrderInstructionFilesVisitor
{
    DYCaptureArchive *_archive;
    DYCaptureArchive *_archiveOriginal;
    NSString *_fileSuffix;
    NSMutableArray *_functionStreamModifiers;
    NSMutableSet *_processedFilesSet;
    int _functionIndex;
    BOOL _copyDataFiles;
    struct vector<GPUTools::FD::Function, std::__1::allocator<GPUTools::FD::Function>> _functions;
    struct vector<GPUTools::FD::Function, std::__1::allocator<GPUTools::FD::Function>> _afterFunctions;
    struct vector<GPUTools::FD::Function, std::__1::allocator<GPUTools::FD::Function>> _endFunctions;
    BOOL _analyzeMode;
    BOOL _analyzePass;
    BOOL _replaceFuncStreamFiles;
    DYFunctionStreamModifier *_currentModifier;
    struct Function *_currentFunction;
    DYCaptureFile *_currentFile;
    NSError *_error;
}

+ (BOOL)applyModifiersToArchive:(id)arg1 modifiers:(id)arg2;
+ (id)createTemporaryModifiedArchive:(id)arg1 modifiers:(id)arg2 copyDataFiles:(BOOL)arg3;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) DYCaptureFile *currentFile; // @synthesize currentFile=_currentFile;
@property(readonly, nonatomic) struct Function *currentFunction; // @synthesize currentFunction=_currentFunction;
@property(readonly, nonatomic) NSMutableArray *functionStreamModifiers; // @synthesize functionStreamModifiers=_functionStreamModifiers;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_processFunction:(const struct Function *)arg1 functionIndex:(int)arg2;
- (void)_restoreAPIState;
- (void)_saveAPIState;
- (void)_duplicateDataFiles:(id)arg1;
- (id)copyDataForFilename:(id)arg1 error:(id *)arg2;
- (id)addDataFileWithPrefix:(id)arg1 bytes:(const void *)arg2 size:(unsigned long long)arg3;
- (id)addDataFileWithPrefix:(id)arg1 data:(id)arg2;
- (void)_incrementFunctionIndex:(struct Function *)arg1;
- (id)_writeFunctionsToStreamWithFilename:(id)arg1;
- (void)visitInternalFile:(id)arg1;
- (void)visitDataFile:(id)arg1;
- (void)_duplicateCaptureFile:(id)arg1;
- (id)_modifyFunctionStream:(id)arg1 modifier:(id)arg2 filename:(id)arg3;
- (void)visitFunctionStreamFile:(id)arg1;
- (void)_processPass:(id)arg1;
- (void)visitCaptureArchive:(id)arg1;
- (void)insertFunction:(struct Function)arg1 position:(int)arg2;
- (id)initWithArchive:(id)arg1 fileSuffix:(id)arg2 copyDataFiles:(BOOL)arg3;
- (id)init;

@end

