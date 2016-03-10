//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStoryboardSegueTemplate.h>

#import "IBDocumentArchiving.h"
#import "NSCoding.h"

@class NSString;

@interface IBUIStoryboardUnwindSegueTemplate : IBUIStoryboardSegueTemplate <IBDocumentArchiving, NSCoding>
{
    NSString *_action;
}

+ (BOOL)requiresDestinationControllerIdentifier;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

