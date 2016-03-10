//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, NSTextField;

@interface IDEAccountPrefsServerDetailViewController : IDEViewController
{
    NSTextField *_addressTextField;
    NSTextField *_textField;
    DVTBorderedView *_borderedView;
    NSTextField *_largeTextField;
}

@property __weak NSTextField *largeTextField; // @synthesize largeTextField=_largeTextField;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak NSTextField *textField; // @synthesize textField=_textField;
@property __weak NSTextField *addressTextField; // @synthesize addressTextField=_addressTextField;
- (void).cxx_destruct;
- (void)upgradeAccount:(id)arg1;
- (id)contextMenu;
- (void)primitiveInvalidate;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;

@end

