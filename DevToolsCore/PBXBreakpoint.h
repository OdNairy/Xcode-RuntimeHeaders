//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsCore/PBXProjectItem.h>

#import "PBXMarkerDelegateProtocol.h"

@class NSArray, NSMutableArray, NSString, PBXProject, PBXTextBookmark, XCBreakpointCondition;

@interface PBXBreakpoint : PBXProjectItem <PBXMarkerDelegateProtocol>
{
    int _state;
    PBXProject *_project;
    unsigned long long _changeBits;
    NSMutableArray *_actions;
    BOOL _continueAfterActions;
    double _delayBeforeContinue;
    XCBreakpointCondition *_condition;
    double _modificationTime;
    unsigned long long _hitCount;
    NSString *_alias;
    long long _nextActionToPerform;
    long long _ignoreCount;
    int _countType;
    NSString *_location;
    int _breakpointStyle;
    PBXTextBookmark *_bookmark;
    BOOL _resolveMultipleMatchesInDebugger;
    BOOL _canContainMultipleMatches;
    unsigned long long _originalNumberOfMultipleMatches;
    PBXBreakpoint *_parentBreakpoint;
    NSMutableArray *_currentMultipleMatches;
}

+ (id)archivableRelationships;
+ (id)archivableAttributes;
@property unsigned long long originalNumberOfMultipleMatches; // @synthesize originalNumberOfMultipleMatches=_originalNumberOfMultipleMatches;
@property(retain) PBXBreakpoint *parentBreakpoint; // @synthesize parentBreakpoint=_parentBreakpoint;
@property BOOL canContainMultipleMatches; // @synthesize canContainMultipleMatches=_canContainMultipleMatches;
@property BOOL resolveMultipleMatchesInDebugger; // @synthesize resolveMultipleMatchesInDebugger=_resolveMultipleMatchesInDebugger;
- (int)breakpointStyle;
- (void)setBreakpointStyle:(int)arg1;
- (void)setLocation:(id)arg1;
- (int)countType;
- (void)setCountType:(int)arg1;
- (long long)ignoreCount;
- (void)setIgnoreCount:(long long)arg1;
- (id)condition;
- (void)setCondition:(id)arg1;
- (id)gdbConditionString;
- (void)setGdbConditionString:(id)arg1;
- (double)delayBeforeContinue;
- (void)setDelayBeforeContinue:(double)arg1;
- (BOOL)continueAfterActions;
- (void)setContinueAfterActions:(BOOL)arg1;
- (long long)nextActionToPerform;
- (BOOL)performWaitingActionsInSession:(id)arg1;
- (void)performActionsInSession:(id)arg1;
@property(copy, nonatomic) NSArray *currentMultipleMatches;
- (void)removeMatchedBreakpointsFromProject;
- (void)removeMatchedBreakpoint:(id)arg1;
- (void)addMatchedBreakpoint:(id)arg1;
- (id)actions;
- (void)setActions:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)insertAction:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)markChanged;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (void)purify;
- (unsigned long long)hitCount;
- (void)setHitCount:(unsigned long long)arg1;
- (double)modificationTime;
- (void)setModificationTime:(double)arg1;
- (void)setComments:(id)arg1;
- (id)alias;
- (void)setAlias:(id)arg1;
- (id)locationDisplay;
- (id)location;
- (id)name;
- (id)displayString;
- (long long)compareToBreakpoint:(id)arg1;
- (int)changeMask;
- (id)textBookmark;
- (void)setTextBookmark:(id)arg1;
- (void)setProject:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (int)displayState;
- (int)_displayState;
- (void)setEnabled:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 userGesture:(BOOL)arg2;
- (BOOL)isEnabled;
- (int)state;
- (void)setState:(int)arg1 quiet:(BOOL)arg2;
- (void)setState:(int)arg1;
- (void)resetActionState;
- (void)resetRuntimeState;
- (void)locationChanged;
- (void)didChange;
- (unsigned long long)changeBit:(unsigned long long)arg1;
- (void)clearChangeBits;
- (void)setChangeBit:(unsigned long long)arg1;
- (void)dealloc;
- (id)bestMatchForFileRef:(id)arg1 inReferences:(id)arg2;
- (void)fixupFileReferenceWithUnarchiver:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)setAppleScriptCondition:(id)arg1;
- (id)appleScriptCondition;
- (void)setAutomaticallyContinue:(id)arg1;
- (id)automaticallyContinue;
- (void)setIsEnabled:(BOOL)arg1;
- (id)project;
- (id)objectSpecifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

