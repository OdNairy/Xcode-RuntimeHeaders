//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class DVTFilePath, NSArray, NSNumber;

@interface IDELocalizationWorkSystemTask : IDELocalizationWorkContext
{
    NSNumber *_exitStatus;
    DVTFilePath *_launchPath;
    NSArray *_arguments;
}

+ (id)contextWithParent:(id)arg1 launchPath:(id)arg2 arguments:(id)arg3;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) DVTFilePath *launchPath; // @synthesize launchPath=_launchPath;
@property(retain) NSNumber *exitStatus; // @synthesize exitStatus=_exitStatus;
- (void).cxx_destruct;

@end

