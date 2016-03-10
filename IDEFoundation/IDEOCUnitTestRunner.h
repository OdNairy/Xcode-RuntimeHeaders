//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDETestRunner.h>

@class DVTDisallowFinishToken, DVTOperationGroup, IDERunOperation, NSMapTable, NSMutableArray, NSMutableSet, NSString;

@interface IDEOCUnitTestRunner : IDETestRunner
{
    BOOL _ignoreNextSuiteDidFinish;
    BOOL _needsToResyncStateWithRestartedOperation;
    BOOL _supportsGC;
    BOOL _currentOperationSuccessfullyBootstrapped;
    NSMapTable *_configurationsByTestRunOperation;
    NSMutableArray *_testsThatHaveStarted;
    NSMutableArray *_suiteStack;
    NSMutableSet *_suitesThatHaveFinished;
    DVTOperationGroup *_testSessionOperation;
    IDERunOperation *_currentTestRunOperation;
    long long _completedTestConfigurationsCount;
    long long _restartCount;
    unsigned long long _currentSuiteResyncIndex;
    NSString *_currentTestClass;
    NSString *_currentTestMethod;
    NSMutableArray *_testResultsProcessors;
    DVTDisallowFinishToken *_testOperationDisallowFinishToken;
}

@property BOOL currentOperationSuccessfullyBootstrapped; // @synthesize currentOperationSuccessfullyBootstrapped=_currentOperationSuccessfullyBootstrapped;
@property BOOL supportsGC; // @synthesize supportsGC=_supportsGC;
@property(retain) DVTDisallowFinishToken *testOperationDisallowFinishToken; // @synthesize testOperationDisallowFinishToken=_testOperationDisallowFinishToken;
@property(retain) NSMutableArray *testResultsProcessors; // @synthesize testResultsProcessors=_testResultsProcessors;
@property(retain) NSString *currentTestMethod; // @synthesize currentTestMethod=_currentTestMethod;
@property(retain) NSString *currentTestClass; // @synthesize currentTestClass=_currentTestClass;
@property unsigned long long currentSuiteResyncIndex; // @synthesize currentSuiteResyncIndex=_currentSuiteResyncIndex;
@property long long restartCount; // @synthesize restartCount=_restartCount;
@property long long completedTestConfigurationsCount; // @synthesize completedTestConfigurationsCount=_completedTestConfigurationsCount;
@property BOOL needsToResyncStateWithRestartedOperation; // @synthesize needsToResyncStateWithRestartedOperation=_needsToResyncStateWithRestartedOperation;
@property(retain) IDERunOperation *currentTestRunOperation; // @synthesize currentTestRunOperation=_currentTestRunOperation;
@property(retain) DVTOperationGroup *testSessionOperation; // @synthesize testSessionOperation=_testSessionOperation;
@property BOOL ignoreNextSuiteDidFinish; // @synthesize ignoreNextSuiteDidFinish=_ignoreNextSuiteDidFinish;
@property(retain) NSMutableSet *suitesThatHaveFinished; // @synthesize suitesThatHaveFinished=_suitesThatHaveFinished;
@property(retain) NSMutableArray *suiteStack; // @synthesize suiteStack=_suiteStack;
@property(retain) NSMutableArray *testsThatHaveStarted; // @synthesize testsThatHaveStarted=_testsThatHaveStarted;
@property(retain) NSMapTable *configurationsByTestRunOperation; // @synthesize configurationsByTestRunOperation=_configurationsByTestRunOperation;
- (void).cxx_destruct;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5 sessionState:(id)arg6;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6 sessionState:(id)arg7;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3 sessionState:(id)arg4;
- (void)_unwindTestSuiteStackForResultsProcessor:(id)arg1;
- (void)willFinishWithError:(id)arg1 didCancel:(BOOL)arg2 sessionState:(id)arg3;
- (void)launchSessionStarted:(id)arg1;
- (BOOL)_hasTestsLeftToRun;
- (BOOL)_cloneTestOperation:(id)arg1 error:(id *)arg2;
- (id)_baselinePlistFilePathWithError:(id *)arg1;
- (id)_commandLineArgumentsForCocoaApplications;
- (id)testOperationWithError:(id *)arg1 launchParametersBlock:(CDUnknownBlockType)arg2;
- (id)_testRunOperationWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)_configurationOperationForLaunchSession:(id)arg1 reportResultsToIDE:(BOOL)arg2 pathToXcodeReportingSocket:(id)arg3 error:(id *)arg4;
- (id)configurationOperationForLaunchSession:(id)arg1 error:(id *)arg2;
- (id)_filePathsForDependentProducts;
- (id)environmentVariablesForTesting;
- (BOOL)_buildParametersSupportsGC;
- (id)initWithTestingSpecifier:(id)arg1 forBuildableProduct:(id)arg2 executionEnvironment:(id)arg3 buildOperation:(id)arg4 withBuildParameters:(id)arg5 runDestination:(id)arg6 error:(id *)arg7;

@end

