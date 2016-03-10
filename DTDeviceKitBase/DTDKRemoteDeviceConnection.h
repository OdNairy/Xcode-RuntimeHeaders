//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DTDKRemoteDeviceToken, DTXConnection, DVTDispatchLock, DVTPinger, DVTStackBacktrace, NSArray, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface DTDKRemoteDeviceConnection : NSObject <DVTInvalidation>
{
    NSMutableArray *_pendingRequests;
    DVTDispatchLock *_pendingRequestsLock;
    DVTDispatchLock *_instrumentsLock;
    struct deque<double, std::__1::allocator<double>> _recentPings;
    DVTPinger *_pinger;
    NSObject<OS_dispatch_source> *_pingTimer;
    NSObject<OS_dispatch_queue> *_pingQueue;
    NSMutableSet *_connectionMonitors;
    unsigned long long _hash;
    _Bool _wireless;
    _Bool _paired;
    unsigned int _interfaceSpeed;
    unsigned int _location;
    DTDKRemoteDeviceToken *_owner;
    NSString *_identifier;
    NSString *_bonjourServiceName;
    NSString *_companionIdentifier;
    DTXConnection *_instrumentsConnection;
    struct _AMDevice *_deviceRef;
    void *_wakeupToken;
    double _averageLatency;
    unsigned long long _pings;
    unsigned long long _pongs;
}

+ (void)netService:(id)arg1 didNotResolve:(id)arg2;
+ (void)netServiceDidResolveAddress:(id)arg1;
+ (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
+ (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
+ (void)startServiceBrowsers;
+ (id)keyPathsForValuesAffectingAddresses;
+ (id)keyPathsForValuesAffectingHostname;
+ (id)allConnections;
+ (id)connectionForDeviceRef:(struct _AMDevice *)arg1;
+ (id)existingConnectionForDeviceRef:(struct _AMDevice *)arg1;
+ (void)initialize;
@property(readonly) unsigned long long pongs; // @synthesize pongs=_pongs;
@property(readonly) unsigned long long pings; // @synthesize pings=_pings;
@property(readonly) double averageLatency; // @synthesize averageLatency=_averageLatency;
@property(readonly) void *wakeupToken; // @synthesize wakeupToken=_wakeupToken;
@property(readonly) struct _AMDevice *deviceRef; // @synthesize deviceRef=_deviceRef;
@property(retain, nonatomic) DTXConnection *instrumentsConnection; // @synthesize instrumentsConnection=_instrumentsConnection;
@property(readonly, copy) NSString *companionIdentifier; // @synthesize companionIdentifier=_companionIdentifier;
@property(readonly) unsigned int location; // @synthesize location=_location;
@property(readonly, copy) NSString *bonjourServiceName; // @synthesize bonjourServiceName=_bonjourServiceName;
@property(getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(readonly, getter=isWireless) _Bool wireless; // @synthesize wireless=_wireless;
@property(readonly) unsigned int interfaceSpeed; // @synthesize interfaceSpeed=_interfaceSpeed;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property __weak DTDKRemoteDeviceToken *owner; // @synthesize owner=_owner;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeConnectionMonitor:(id)arg1;
- (id)monitorConnection;
- (void)_createPingTimerIfNecessary;
- (id)fetchValueForDomain:(id)arg1 andKey:(id)arg2;
- (void)_drainPendingRequests;
- (id)setValue:(id)arg1 forDomain:(id)arg2 andKey:(id)arg3;
- (id)startHouseArrestServiceForAppIdentifier:(id)arg1;
- (id)startFirstServiceOf:(id)arg1 unlockKeybag:(_Bool)arg2;
- (id)startFirstServiceOf:(id)arg1;
- (id)startServiceWithIdentifier:(id)arg1 unlockKeybag:(_Bool)arg2;
- (id)startServiceWithIdentifier:(id)arg1;
- (id)futureWithSession:(CDUnknownBlockType)arg1;
- (int)executeInSession:(CDUnknownBlockType)arg1;
- (_Bool)unpair;
- (id)wakeup;
- (long long)compare:(id)arg1;
@property(readonly, getter=isGizmo) _Bool gizmo;
@property(readonly, getter=isConnected) _Bool connected;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSArray *addresses;
@property(readonly, copy) NSString *hostname;
- (void)updatePairingStatus;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

