//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEQuickHelpDataContext.h"

@class DVTSourceCodeLanguage, IDEIndexSymbol, NSArray, NSString, NSXMLElement;

@interface IDEQuickHelpTextCompletionDataContext : NSObject <IDEQuickHelpDataContext>
{
    NSArray *_associatedUsrs;
    DVTSourceCodeLanguage *_language;
}

- (void).cxx_destruct;
- (void)enumerateRelatedDeclarationsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateOverriddenSymbolResolutionsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) DVTSourceCodeLanguage *preferredLanguage;
@property(readonly, nonatomic) NSString *preferredUsr;
@property(readonly, nonatomic) NSXMLElement *documentationMarkup;
@property(readonly, nonatomic) NSXMLElement *declarationSymbolMarkup;
@property(readonly, nonatomic) IDEIndexSymbol *indexSymbol;
- (id)initWithAssociatedUSRs:(id)arg1 language:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

