//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "Xcode3InfoEditorListContentProvider.h"

@class DVTStackBacktrace, IDEWorkspace, NSArray, NSString;

@interface Xcode3InfoEditorSubclassNameProvider : NSObject <Xcode3InfoEditorListContentProvider, DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSArray *_classNames;
    NSArray *_listContents;
}

+ (void)initialize;
+ (id)subclassesForClassnames:(id)arg1 inWorkspace:(id)arg2;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
@property(readonly) NSArray *listContents;
- (void)indexChanged:(id)arg1;
- (id)initWithWorkspace:(id)arg1 classNames:(id)arg2;
- (id)initWithBlueprint:(id)arg1 workspace:(id)arg2;
- (void)updateListContents;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

