//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCMBasePathObject : NSObject
{
    NSString *_basePath;
}

- (id)absolutePathsForNodes:(id)arg1;
- (id)pathsForNodes:(id)arg1;
- (id)modelPathsForAbsolutePaths:(id)arg1;
- (id)absolutePathsForModelPaths:(id)arg1;
- (id)modelPathForAbsolutePath:(id)arg1;
- (id)absolutePathForModelPath:(id)arg1;
- (id)basePath;
- (void)setBasePath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

