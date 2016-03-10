//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

@class IBDocument, IBSourceCodeConnectionContext;

@interface IBSourceCodeConnectionPopUpOptionsViewController : DVTViewController
{
    IBSourceCodeConnectionContext *connectionContext;
    BOOL connectionContextConnectionIsValid;
    IBDocument *document;
}

@property BOOL connectionContextConnectionIsValid; // @synthesize connectionContextConnectionIsValid;
@property(readonly) IBDocument *document; // @synthesize document;
@property(readonly) IBSourceCodeConnectionContext *connectionContext; // @synthesize connectionContext;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)didCancelInsertingRepresentedConnectionContext;
- (void)willInsertRepresentedConnectionContext;
- (id)initWithSourceCodeConnectionContext:(id)arg1 document:(id)arg2;

@end

