//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBPredecessorRepresentation.h>

@class IBConnection;

@interface IBConnectionPredecessorRepresentation : IBPredecessorRepresentation
{
    IBConnection *predecessor;
}

- (void).cxx_destruct;
- (void)disconnect;
- (BOOL)canDisconnect;
- (id)initWithConnection:(id)arg1 prototype:(id)arg2 document:(id)arg3;

@end

