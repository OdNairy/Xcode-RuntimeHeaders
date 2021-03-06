//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSArray, NSButton, NSImageView, NSMutableSet, NSSet, NSTableView, NSTextField;

@interface XCSUIDeviceChooserSheet : NSWindowController
{
    NSMutableSet *_selectedDevices;
    NSArray *_knownPlatforms;
    NSArray *_devices;
    NSSet *_disabledDevices;
    NSTableView *_tableView;
    NSImageView *_selectedImageView;
    NSTextField *_selectedNameLabel;
    NSTextField *_selectedModelLabel;
    NSTextField *_selectedOSLabel;
    NSButton *_addButton;
    NSArray *_groupedDevices;
}

+ (id)deviceChooserSheet;
@property(retain) NSArray *groupedDevices; // @synthesize groupedDevices=_groupedDevices;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property __weak NSTextField *selectedOSLabel; // @synthesize selectedOSLabel=_selectedOSLabel;
@property __weak NSTextField *selectedModelLabel; // @synthesize selectedModelLabel=_selectedModelLabel;
@property __weak NSTextField *selectedNameLabel; // @synthesize selectedNameLabel=_selectedNameLabel;
@property __weak NSImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly) NSSet *selectedDevices; // @synthesize selectedDevices=_selectedDevices;
@property(retain, nonatomic) NSSet *disabledDevices; // @synthesize disabledDevices=_disabledDevices;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSArray *knownPlatforms; // @synthesize knownPlatforms=_knownPlatforms;
- (void).cxx_destruct;
- (void)ok:(id)arg1;
- (void)cancel:(id)arg1;
- (void)selectOrDeselectDevice:(id)arg1;
- (void)rowSelectedAtIndex:(long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)groupDevices;
- (id)platformForIdentifier:(id)arg1;
- (void)windowDidLoad;

@end

