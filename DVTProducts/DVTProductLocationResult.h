//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface DVTProductLocationResult : NSObject
{
    NSArray *_locatedProducts;
    NSArray *_locationErrors;
}

@property(readonly) NSArray *locationErrors; // @synthesize locationErrors=_locationErrors;
@property(readonly) NSArray *locatedProducts; // @synthesize locatedProducts=_locatedProducts;
- (void).cxx_destruct;
- (id)initWithLocatedProducts:(id)arg1 locationErrors:(id)arg2;

@end

