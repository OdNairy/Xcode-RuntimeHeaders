//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTAnnotationContext.h"

@class SKEShadableMember;

@interface SKEShadableAnnotationContext : DVTAnnotationContext
{
    SKEShadableMember *_shadableMember;
    unsigned long long _entryPoint;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long entryPoint;
@property(readonly, nonatomic) SKEShadableMember *shadableMember;
- (id)initWithShadableMember:(id)arg1 entryPoint:(unsigned long long)arg2;

@end

