//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDebugSession.h"

@class DBGProcess, DVTDispatchLock, DVTMutableOrderedDictionary, DVTObservingToken, DVTTextDocumentLocation, IDEConsoleAdaptor, IDELaunchSession, IDERunOperationWorker, NSArray, NSDate, NSDictionary, NSError, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface DBGDebugSession : IDEDebugSession
{
    NSMapTable *_breakpointsToTokenSets;
    NSMapTable *_locationsToTokenSets;
    NSMapTable *_watchpointsToTokenSets;
    NSMapTable *_breakpointsToIdentifiers;
    NSMapTable *_locationsToIdentifiers;
    NSMapTable *_watchpointsToIdentifiers;
    DVTDispatchLock *_breakpointsAndWatchpointsToIdentifiersLock;
    NSMutableArray *_CPUFirstIndicators;
    NSDictionary *_CPUDistribution;
    DVTMutableOrderedDictionary *_CPUUsagesForThreadDictionary;
    NSMutableArray *_prunedThreadIDsForCPUUsages;
    NSMutableDictionary *_threadNameForThreadIDDictionary;
    NSMutableDictionary *_qosValueForThreadIDDictionary;
    NSMutableArray *_memoryFirstIndicators;
    NSDictionary *_memoryDistribution;
    NSMutableArray *_memoryMeasurements;
    NSMutableArray *_energyMeasurements;
    int _logFD;
    DVTObservingToken *_targetControlStateObservingToken;
    DVTObservingToken *_breakpontsActivationObservingToken;
    DVTObservingToken *_breakpointListObserverToken;
    BOOL _debuggerShouldAttachToTarget;
    int _state;
    int _coalescedState;
    int _memoryDebuggingState;
    IDELaunchSession *_launchSession;
    DVTTextDocumentLocation *_instructionPointerLocation;
    IDERunOperationWorker *_debugLauncher;
    id <DBGDebugSessionBreakpointLifeCycleDelegate> _breakpointLifeCycleDelegate;
    IDEConsoleAdaptor *_debuggerConsoleAdaptor;
    IDEConsoleAdaptor *_targetConsoleAdaptor;
    unsigned long long _CPUFirstIndicatorHigh;
    unsigned long long _CPUFirstIndicatorLow;
    unsigned long long _totalRunningTimeMicroSeconds;
    NSString *_sampleText;
    NSString *_heapText;
    NSError *_alertError;
    NSDate *_loggingInitializedDate;
    unsigned long long _memoryRPRVTHigh;
    unsigned long long _memoryRPRVTLow;
    unsigned long long _memoryAnonymousHigh;
    unsigned long long _memoryAnonymousLow;
    unsigned long long _memoryDirtyPageSizeHigh;
    unsigned long long _memoryDirtyPageSizeLow;
    NSMutableSet *_stackFramesForDisassembly;
}

+ (id)keyPathsForValuesAffectingTotalRunningTime;
+ (id)createErrorForFailureToLaunchExecutable:(id)arg1 launchSession:(id)arg2;
+ (void)initialize;
@property(retain) NSMutableSet *stackFramesForDisassembly; // @synthesize stackFramesForDisassembly=_stackFramesForDisassembly;
@property unsigned long long memoryDirtyPageSizeLow; // @synthesize memoryDirtyPageSizeLow=_memoryDirtyPageSizeLow;
@property unsigned long long memoryDirtyPageSizeHigh; // @synthesize memoryDirtyPageSizeHigh=_memoryDirtyPageSizeHigh;
@property unsigned long long memoryAnonymousLow; // @synthesize memoryAnonymousLow=_memoryAnonymousLow;
@property unsigned long long memoryAnonymousHigh; // @synthesize memoryAnonymousHigh=_memoryAnonymousHigh;
@property unsigned long long memoryRPRVTLow; // @synthesize memoryRPRVTLow=_memoryRPRVTLow;
@property unsigned long long memoryRPRVTHigh; // @synthesize memoryRPRVTHigh=_memoryRPRVTHigh;
@property int memoryDebuggingState; // @synthesize memoryDebuggingState=_memoryDebuggingState;
@property(readonly) NSDate *loggingInitializedDate; // @synthesize loggingInitializedDate=_loggingInitializedDate;
@property(copy) NSError *alertError; // @synthesize alertError=_alertError;
@property(copy) NSString *heapText; // @synthesize heapText=_heapText;
@property(copy) NSString *sampleText; // @synthesize sampleText=_sampleText;
@property unsigned long long totalRunningTimeMicroSeconds; // @synthesize totalRunningTimeMicroSeconds=_totalRunningTimeMicroSeconds;
@property(copy) NSDictionary *memoryDistribution; // @synthesize memoryDistribution=_memoryDistribution;
@property(readonly) NSArray *prunedThreadIDsForCPUUsages; // @synthesize prunedThreadIDsForCPUUsages=_prunedThreadIDsForCPUUsages;
@property(readonly) DVTMutableOrderedDictionary *CPUUsagesForThreadDictionary; // @synthesize CPUUsagesForThreadDictionary=_CPUUsagesForThreadDictionary;
@property(copy) NSDictionary *CPUDistribution; // @synthesize CPUDistribution=_CPUDistribution;
@property unsigned long long CPUFirstIndicatorLow; // @synthesize CPUFirstIndicatorLow=_CPUFirstIndicatorLow;
@property unsigned long long CPUFirstIndicatorHigh; // @synthesize CPUFirstIndicatorHigh=_CPUFirstIndicatorHigh;
@property(retain) IDEConsoleAdaptor *targetConsoleAdaptor; // @synthesize targetConsoleAdaptor=_targetConsoleAdaptor;
@property(retain) IDEConsoleAdaptor *debuggerConsoleAdaptor; // @synthesize debuggerConsoleAdaptor=_debuggerConsoleAdaptor;
@property(readonly) BOOL debuggerShouldAttachToTarget; // @synthesize debuggerShouldAttachToTarget=_debuggerShouldAttachToTarget;
@property(retain, nonatomic) id <DBGDebugSessionBreakpointLifeCycleDelegate> breakpointLifeCycleDelegate; // @synthesize breakpointLifeCycleDelegate=_breakpointLifeCycleDelegate;
@property(retain) IDERunOperationWorker *debugLauncher; // @synthesize debugLauncher=_debugLauncher;
- (void)setInstructionPointerLocation:(id)arg1;
- (id)instructionPointerLocation;
@property int coalescedState; // @synthesize coalescedState=_coalescedState;
- (int)state;
- (void)setLaunchSession:(id)arg1;
- (id)launchSession;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSString *totalRunningTime;
- (void)setCurrentEnergyMeasurement:(id)arg1;
- (void)setCurrentMemoryMeasurement:(id)arg1;
- (void)_updateMemoryMeasureDictionary:(id)arg1 firstEntry:(BOOL)arg2 key:(id)arg3 highValue:(unsigned long long *)arg4 highValueKey:(id)arg5 lowValue:(unsigned long long *)arg6 lowValueKey:(id)arg7;
- (void)setCurrentMemoryFirstIndicator:(id)arg1;
- (void)setCurrentThreadsCPUUsage:(id)arg1;
- (id)qualityOfServiceValueForThreadID:(id)arg1;
- (id)CPUUsageThreadNameForThreadID:(id)arg1;
- (void)setCPUUsageThreadName:(id)arg1 forThreadID:(id)arg2;
- (void)setCurrentCPUFirstIndicator:(id)arg1;
- (BOOL)isWatchpointValid:(id)arg1;
- (BOOL)isBreakpointValid:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1 forWatchpoint:(id)arg2;
- (unsigned long long)identifierForWatchpoint:(id)arg1;
- (id)watchpointForIdentifier:(unsigned long long)arg1;
- (void)setIdentifier:(unsigned long long)arg1 forBreakpointLocation:(id)arg2;
- (unsigned long long)identifierForBreakpointLocation:(id)arg1;
- (void)setIdentifier:(unsigned long long)arg1 forBreakpoint:(id)arg2;
- (unsigned long long)identifierForBreakpoint:(id)arg1;
- (id)breakpointForIdentifier:(unsigned long long)arg1;
- (void)logDebugStringWithTimestampUsingFormat:(id)arg1;
- (void)logDebugStringWithFormat:(id)arg1;
- (void)logDebugStringWithTimestamp:(id)arg1;
- (void)logDebugString:(id)arg1;
@property(readonly) BOOL isLoggingEnabled;
- (void)_initializeLogging;
- (id)logFilename;
- (id)commandsExpectingExpressions;
- (BOOL)canContinueToLocation:(id)arg1 withinBlockAtRange:(struct _NSRange)arg2;
- (void)forceRefreshPausedStates;
- (void)completeString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)supportedDataValueFormatsForDataValue:(id)arg1;
- (BOOL)consoleShouldTrackInputHistory;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (id)verifyStackFrameForDisassembly:(id)arg1;
- (void)removeToBeInvalidatedStackFramesForDisassembly:(id)arg1;
- (BOOL)addStackFrameForDisassembly:(id)arg1;
- (void)requestLoadDylibAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestMovePCInStackFrame:(id)arg1 toLineNumber:(unsigned long long)arg2;
@property(readonly) BOOL supportsMultiplePCAnnotation;
@property(readonly) BOOL supportsPCAnnotationDragging;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestStepIntoCallSymbol:(id)arg1 atLocation:(id)arg2;
- (void)printDescriptionOfDataValueToConsole:(id)arg1 runAllThreads:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)shouldAcceptFromDebugSession:(id)arg1 error:(id *)arg2;
- (BOOL)shouldRelinquishToDebugSession:(id)arg1 error:(id *)arg2;
- (void)requestFetchEvent;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepOverInstruction;
- (void)requestStepIntoInstruction;
- (void)requestDetach;
- (void)requestStop;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOut;
- (void)requestStepOverLine;
- (void)requestStepIn;
- (void)setState:(int)arg1;
- (void)_delayedSetState;
- (void)_recreateBreakpointIfNeccessary:(id)arg1;
- (void)_createBreakpointIfNeccessary:(id)arg1;
- (void)_handleProcessStateChanged;
- (void)_handleBreakpointIgnoreCountChanged:(id)arg1;
- (void)_handleBreakpointConditionChanged:(id)arg1;
- (void)_handleBreakpointEnablementChanged:(id)arg1;
- (void)_handleBreakpointActivationChanged;
- (void)_handleBreakpointLocationsRemoved:(id)arg1;
- (void)_handleBreakpointLocationsAdded:(id)arg1;
- (void)_handleBreakpointLocationChanges:(id)arg1;
- (void)_handleBreakpointsDeleted:(id)arg1;
- (void)_handleBreakpointsCreated:(id)arg1;
- (void)_handleBreakpointsListChanged:(id)arg1;
- (void)_removeWatchpointObservers:(id)arg1;
- (void)_addWatchpointObservers:(id)arg1;
- (void)_removeBreakpointLocationObservers:(id)arg1;
- (void)_addLocationObservers:(id)arg1;
- (void)_removeBreakpointObservers:(id)arg1;
- (void)_addBreakpointObservers:(id)arg1;
@property(retain, nonatomic) DBGProcess *process; // @dynamic process;
- (id)initWithDebugLauncher:(id)arg1;

// Remaining properties
@property(readonly) NSArray *CPUFirstIndicators; // @dynamic CPUFirstIndicators;
@property(readonly) NSArray *energyMeasurements; // @dynamic energyMeasurements;
@property(readonly) NSArray *memoryFirstIndicators; // @dynamic memoryFirstIndicators;
@property(readonly) NSArray *memoryMeasurements; // @dynamic memoryMeasurements;

@end

