//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPortalCertificateType, NSDate, NSString;

@interface DVTPortalCSR : NSObject
{
    NSString *_portalID;
    NSString *_portalCertificateID;
    NSString *_name;
    NSString *_status;
    NSDate *_dateRequested;
    DVTPortalCertificateType *_portalCertificateType;
}

+ (id)listCertificateRequestsWithSession:(id)arg1 andTeam:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
+ (id)requestCertificateWithSession:(id)arg1 andTeam:(id)arg2 ofType:(id)arg3 error:(id *)arg4;
@property(readonly, copy, nonatomic) DVTPortalCertificateType *portalCertificateType; // @synthesize portalCertificateType=_portalCertificateType;
@property(readonly, copy, nonatomic) NSDate *dateRequested; // @synthesize dateRequested=_dateRequested;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *portalCertificateID; // @synthesize portalCertificateID=_portalCertificateID;
@property(readonly, copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
- (void).cxx_destruct;
- (id)description;

@end

