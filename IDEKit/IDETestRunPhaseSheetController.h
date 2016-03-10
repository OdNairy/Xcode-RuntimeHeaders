//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "IDEFilePickerViewDelegate.h"
#import "IDETestsInTestableObserver.h"

@class DVTBorderedView, DVTChoice, DVTGradientImageButton, DVTNotificationToken, DVTObservingToken, DVTOutlineView, DVTSearchField, DVTTabChooserView, IDEArgumentsCapsuleSheetController, IDECapsuleListView, IDEDebuggerSpecifier, IDEEnvironmentVariablesCapsuleSheetController, IDEScheme, IDESimulateLocationMenuController, IDETestSchemeAction, IDEWorkspace, NSArray, NSButton, NSButtonCell, NSLayoutConstraint, NSMatrix, NSPopUpButton, NSString, NSTabView, NSTableColumn, NSTextField, NSView;

@interface IDETestRunPhaseSheetController : IDEViewController <IDEFilePickerViewDelegate, IDETestsInTestableObserver>
{
    NSButton *_debugExecutableCheckbox;
    NSButton *_codeCoverageCheckbox;
    NSMatrix *_debugProcessAsMatrix;
    NSButtonCell *_debugProcessAsMeButtonCell;
    DVTOutlineView *_outlineView;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    DVTBorderedView *_topBorderedView;
    DVTSearchField *_searchField;
    DVTTabChooserView *_tabChooser;
    DVTBorderedView *_useRunActionOptionsBorderedView;
    IDECapsuleListView *_capsuleListView;
    DVTBorderedView *_optionsBorderedView;
    NSPopUpButton *_macroExpansionRunnableBuildablesPopUp;
    NSTextField *_macroExpansionDescription;
    NSTabView *_tabView;
    NSTableColumn *_deviceAppDataPackagesColumn;
    NSTableColumn *_locationColumn;
    NSView *_buttonBar;
    DVTChoice *_infoChoice;
    DVTChoice *_conditionsChoice;
    DVTChoice *_diagnosticsChoice;
    IDEArgumentsCapsuleSheetController *_argumentsViewController;
    IDEEnvironmentVariablesCapsuleSheetController *_environmentVariablesViewController;
    IDEWorkspace *_workspace;
    NSArray *_debuggerSpecifiers;
    NSString *_filterString;
    DVTObservingToken *_testableReferenceObserver;
    DVTObservingToken *_launchActionArgsEnvLinkObservingToken;
    DVTObservingToken *_macroExpansionReferenceObservingToken;
    DVTObservingToken *_runContextObservingToken;
    DVTNotificationToken *_buildablesToken;
    IDESimulateLocationMenuController *_simulateLocationMenuController;
    BOOL _supportsDebugAsDifferentUser;
    IDEScheme *_runContext;
    IDETestSchemeAction *_runPhase;
    NSLayoutConstraint *_tabSwitcherBarHeightConstraint;
    NSLayoutConstraint *_infoTabSearchFieldHeightConstraint;
}

+ (id)keyPathsForValuesAffectingAllowEnablingAddressSanitizer;
+ (id)keyPathsForValuesAffectingDebuggerHasBeenSelected;
+ (void)initialize;
@property __weak NSLayoutConstraint *infoTabSearchFieldHeightConstraint; // @synthesize infoTabSearchFieldHeightConstraint=_infoTabSearchFieldHeightConstraint;
@property __weak NSLayoutConstraint *tabSwitcherBarHeightConstraint; // @synthesize tabSwitcherBarHeightConstraint=_tabSwitcherBarHeightConstraint;
@property(retain) IDETestSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property BOOL supportsDebugAsDifferentUser; // @synthesize supportsDebugAsDifferentUser=_supportsDebugAsDifferentUser;
@property(retain) DVTTabChooserView *tabChooser; // @synthesize tabChooser=_tabChooser;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain, nonatomic) NSArray *debuggerSpecifiers; // @synthesize debuggerSpecifiers=_debuggerSpecifiers;
- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)debuggerSpecifiersForCurrentPlatform;
- (void)_runDestinationChanged;
- (id)filteredTests:(id)arg1;
- (id)filteredTestableReferences;
- (BOOL)doesFilterStringIncludeTestable:(id)arg1;
- (BOOL)doesFilterStringIncludeTest:(id)arg1;
- (BOOL)doesFilterStringIncludeName:(id)arg1;
- (BOOL)isTestActive:(id)arg1;
- (BOOL)isTestEditable:(id)arg1;
- (id)testableReferenceForTest:(id)arg1;
- (BOOL)canExpandTestableReference:(id)arg1;
- (void)allTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (id)_iconForBuildable:(id)arg1;
- (void)_macroExpansionRunnableBuildableSelected:(id)arg1;
- (void)_updateMacroExpansionDescriptionForSelectedItem;
- (void)_updateMacroExpansionRunnablePopUpSelection;
- (void)_updateMacroExpansionRunnablePopUp;
- (void)_selectedSchemeChanged:(id)arg1;
- (void)chooseDebugProcessAs:(id)arg1;
@property(retain) IDEDebuggerSpecifier *selectedDebuggerSpecifier;
- (void)_setLauncherBasedOnSelectedDebugger;
- (void)_updateDebuggerFromOldDebugger:(id)arg1;
- (void)selectDebugExecutable:(id)arg1;
- (void)_setupDebugOptions;
- (void)_updateDebugCheckboxes;
- (void)_updateDebugOptionsEnablement;
- (BOOL)allowEnablingAddressSanitizer;
- (BOOL)debuggerHasBeenSelected;
@property(retain) IDEWorkspace *workspace;
- (BOOL)validateMenuItem:(id)arg1;
- (void)deleteBlueprintsAction:(id)arg1;
- (void)addBlueprintsAction:(id)arg1;
- (void)clearHighlightsInCapsuleView;
- (void)_updateDeleteButton;
- (BOOL)_getItemsToDelete:(id *)arg1;
- (void)toggleTests:(id)arg1;
- (void)setItem:(id)arg1 enabled:(BOOL)arg2 recursively:(BOOL)arg3;
- (id)currentToggleItemsAndEnable:(char *)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_setupLocationUI;
- (void)_selectMenuItemForLocationForCell:(id)arg1 forItem:(id)arg2;
- (void)_setupDeviceAppDataUI;
- (void)_selectMenuItemForDeviceApplicationPackageForCell:(id)arg1 forItem:(id)arg2;
- (void)_selectDeviceAppDataPackage:(id)arg1;
- (void)updateBoundContent;
- (void)updateBoundIDEWorkspaceBinding;
- (void)updateBoundIDERunContextBinding;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

