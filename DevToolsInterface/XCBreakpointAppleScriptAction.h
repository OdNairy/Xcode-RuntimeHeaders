//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCBreakpointAction.h"

@class NSAppleScript, NSString;

@interface XCBreakpointAppleScriptAction : XCBreakpointAction
{
    NSString *_script;
    NSAppleScript *_compiledScript;
}

+ (id)archivableAttributes;
+ (id)displayName;
- (void)performInSession:(id)arg1 onBreakpoint:(id)arg2;
- (id)run;
- (id)compile;
- (id)macroExpandedScriptWithBreakpoint:(id)arg1;
- (void)setScript:(id)arg1;
- (id)script;
- (void)dealloc;
- (id)editorClassName;

@end

