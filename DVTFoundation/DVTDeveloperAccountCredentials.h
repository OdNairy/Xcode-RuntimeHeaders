//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AKAppleIDSession, NSDictionary, NSString, NSURLCredential;

@interface DVTDeveloperAccountCredentials : NSObject <NSCopying>
{
    BOOL __optOutOfTokenRequirement;
    NSString *_username;
    NSURLCredential *_URLCredential;
}

+ (id)URLProtectionSpace;
+ (id)URLProtectionSpaces;
+ (id)accountCredentialsFromUsername:(id)arg1 alternateDSID:(id)arg2 token:(id)arg3 error:(id *)arg4;
+ (id)accountCredentialsFromUsername:(id)arg1 password:(id)arg2 error:(id *)arg3;
+ (id)accountCredentialsFromUsername:(id)arg1 alternateDSID:(id)arg2 token:(id)arg3 keychain:(struct OpaqueSecKeychainRef *)arg4 successfullyPersisted:(char *)arg5 error:(id *)arg6;
+ (id)accountCredentialsFromUsername:(id)arg1 password:(id)arg2 keychain:(struct OpaqueSecKeychainRef *)arg3 successfullyPersisted:(char *)arg4 error:(id *)arg5;
+ (id)accountCredentialsForDefaultCredentials;
+ (id)accountCredentialsForUsername:(id)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2 error:(id *)arg3;
+ (id)allAccountCredentials;
@property BOOL _optOutOfTokenRequirement; // @synthesize _optOutOfTokenRequirement=__optOutOfTokenRequirement;
@property(readonly, nonatomic) NSURLCredential *URLCredential; // @synthesize URLCredential=_URLCredential;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)applyAuthenticationHeadersToRequest:(id)arg1;
@property(readonly, nonatomic) NSDictionary *authenticationHeaders;
- (id)_authenticationHeadersForRequest:(id)arg1;
- (id)_manuallyProvidedAuthenticationHeaders;
@property(readonly, nonatomic) AKAppleIDSession *appleIDSession;
- (BOOL)deleteFromKeychain:(struct OpaqueSecKeychainRef *)arg1 error:(id *)arg2;
- (BOOL)saveToKeychain:(struct OpaqueSecKeychainRef *)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLCredential:(id)arg1 username:(id)arg2;
- (id)initWithURLCredential:(id)arg1;
- (BOOL)_isInternalCredentials;
@property(readonly, nonatomic) BOOL shouldRequireTokenBasedAuthentication;
@property(readonly, nonatomic) BOOL isTokenBasedAuthentication;
- (id)accountCredentialsWithPassword:(id)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2 successfullyPersisted:(char *)arg3 error:(id *)arg4;

@end

