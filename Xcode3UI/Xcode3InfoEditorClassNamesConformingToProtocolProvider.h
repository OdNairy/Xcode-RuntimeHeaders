//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "Xcode3InfoEditorListContentProvider.h"

@class DVTObservingToken, DVTStackBacktrace, IDEWorkspace, NSArray, NSString;

@interface Xcode3InfoEditorClassNamesConformingToProtocolProvider : NSObject <Xcode3InfoEditorListContentProvider, DVTInvalidation>
{
    NSArray *_listContents;
    IDEWorkspace *_workspace;
    NSString *_protocolName;
    DVTObservingToken *_indexDidChangeObserver;
}

+ (void)initialize;
@property(retain, nonatomic) DVTObservingToken *indexDidChangeObserver; // @synthesize indexDidChangeObserver=_indexDidChangeObserver;
@property(retain, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)indexChanged:(id)arg1;
@property(readonly) NSArray *listContents;
- (id)initWithBlueprint:(id)arg1 workspace:(id)arg2;
- (void)updateListContents;
- (id)initWithWorkspace:(id)arg1 protocolName:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

