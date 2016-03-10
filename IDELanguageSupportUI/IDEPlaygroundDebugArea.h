//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEDebugArea.h"

@class DVTObservingToken, IDEConsoleTextView;

@interface IDEPlaygroundDebugArea : IDEDebugArea
{
    DVTObservingToken *_primaryEditorDocumentObserver;
    DVTObservingToken *_consoleItemsObserver;
    DVTObservingToken *_playgroundDocumentCloseObserver;
    IDEConsoleTextView *_consoleTextView;
}

@property IDEConsoleTextView *consoleTextView; // @synthesize consoleTextView=_consoleTextView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)canActivateConsole;
- (void)reloadConsole;
- (BOOL)canReloadConsole;
- (void)clearConsole;
- (BOOL)canClearConsole;
- (id)stateSavingIdentifier;
- (void)_handleDocumentChange:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;

@end
