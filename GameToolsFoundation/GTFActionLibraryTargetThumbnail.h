//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSImage;

@interface GTFActionLibraryTargetThumbnail : NSObject <NSCoding>
{
    BOOL _isIcon;
    NSImage *_image;
}

+ (id)targetThumbnailWithImage:(id)arg1;
@property(nonatomic) BOOL isIcon; // @synthesize isIcon=_isIcon;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;

@end
