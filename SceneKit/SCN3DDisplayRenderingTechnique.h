//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNTechnique.h>

#import "SCNStereoscopicRenderingTechnique.h"

@interface SCN3DDisplayRenderingTechnique : SCNTechnique <SCNStereoscopicRenderingTechnique>
{
    long long _displayLayout;
}

@property(readonly, nonatomic) long long displayLayout;
@property(nonatomic) double interaxialDistance;
- (id)initWithDisplayLayout:(long long)arg1;

@end

