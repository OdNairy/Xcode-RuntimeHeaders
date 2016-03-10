//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPortalCertificateType, DVTPortalTeam, DVTSigningCertificate, NSDate, NSString;

@interface DVTPortalCertificate : NSObject
{
    NSString *_name;
    DVTPortalTeam *_team;
    DVTSigningCertificate *_signingCertificate;
    DVTPortalCertificateType *_portalCertificateType;
    NSString *_portalID;
    NSString *_serialNumber;
    NSDate *_expirationDate;
    NSString *_status;
}

+ (id)certificatesForSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
+ (id)requestCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy, nonatomic) NSString *portalID; // @synthesize portalID=_portalID;
@property(readonly, nonatomic) DVTPortalCertificateType *portalCertificateType; // @synthesize portalCertificateType=_portalCertificateType;
@property(retain, nonatomic) DVTSigningCertificate *signingCertificate; // @synthesize signingCertificate=_signingCertificate;
@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (BOOL)revokeWithSession:(id)arg1 error:(id *)arg2;

@end
