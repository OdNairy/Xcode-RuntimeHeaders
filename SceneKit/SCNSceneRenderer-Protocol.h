//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioEngine, AVAudioEnvironmentNode, NSArray, NSDictionary, SCNNode, SCNScene, SKScene, SKTransition;

@protocol SCNSceneRenderer <NSObject>
@property(nonatomic) double currentTime;
@property(retain, nonatomic) SCNNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) unsigned long long stencilPixelFormat;
@property(readonly, nonatomic) unsigned long long depthPixelFormat;
@property(readonly, nonatomic) unsigned long long colorPixelFormat;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
@property(readonly, nonatomic) void *context;
@property(readonly, nonatomic) unsigned long long renderingAPI;
@property(retain, nonatomic) SKScene *overlaySKScene;
@property(nonatomic) unsigned long long debugOptions;
@property(nonatomic) BOOL showsStatistics;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
@property(nonatomic) BOOL autoenablesDefaultLighting;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) BOOL loops;
@property(getter=isPlaying) BOOL playing;
@property(nonatomic) id <SCNSceneRendererDelegate> delegate;
@property(nonatomic) double sceneTime;
@property(retain, nonatomic) SCNScene *scene;
- (void)prepareObjects:(NSArray *)arg1 withCompletionHandler:(void (^)(BOOL))arg2;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(BOOL (^)(void))arg2;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (NSArray *)nodesInsideFrustumWithPointOfView:(SCNNode *)arg1;
- (BOOL)isNodeInsideFrustum:(SCNNode *)arg1 withPointOfView:(SCNNode *)arg2;
- (NSArray *)hitTest:(struct CGPoint)arg1 options:(NSDictionary *)arg2;
- (void)presentScene:(SCNScene *)arg1 withTransition:(SKTransition *)arg2 incomingPointOfView:(SCNNode *)arg3 completionHandler:(void (^)(void))arg4;
@end

