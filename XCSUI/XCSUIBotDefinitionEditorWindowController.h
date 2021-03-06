//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class DVTReplacementView, IDEWorkspaceTabController, NSTextField, NSWindow, XCSBot, XCSUIBotDefinitionContext, XCSUIBotDefinitionEditor;

@interface XCSUIBotDefinitionEditorWindowController : NSWindowController
{
    BOOL _disableWorkspaceSpecificSettings;
    IDEWorkspaceTabController *_workspaceTabController;
    XCSBot *_bot;
    NSWindow *_hostWindow;
    XCSUIBotDefinitionEditor *_definitionEditor;
    long long _selectPane;
    DVTReplacementView *_replacementView;
    NSTextField *_editBotLabel;
}

@property __weak NSTextField *editBotLabel; // @synthesize editBotLabel=_editBotLabel;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property long long selectPane; // @synthesize selectPane=_selectPane;
@property(retain, nonatomic) XCSUIBotDefinitionEditor *definitionEditor; // @synthesize definitionEditor=_definitionEditor;
@property(nonatomic) BOOL disableWorkspaceSpecificSettings; // @synthesize disableWorkspaceSpecificSettings=_disableWorkspaceSpecificSettings;
@property(retain, nonatomic) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void).cxx_destruct;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
@property(readonly, nonatomic) XCSUIBotDefinitionContext *definitionContext;
- (void)windowDidLoad;

@end

