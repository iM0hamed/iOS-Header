//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKPublicKey, NSURL;

__attribute__((visibility("hidden")))
@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest
{
    CKPublicKey *_verifiedPublicKey;
    NSURL *_plistURL;
    struct __SecPolicy *_certificateTrustPolicy;
}

+ (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey *)arg3;
+ (_Bool)verifyInteger:(long long)arg1 withSignature:(id)arg2 usingKey:(struct __SecKey *)arg3;
+ (struct __SecTrust *)createTrustEvalFromCertificateList:(id)arg1 verifiedWithPolicy:(struct __SecPolicy *)arg2;
+ (id)nearestExpirationInCertificateList:(id)arg1;
+ (id)certificateListServerPlist:(id)arg1;
+ (_Bool)serverResponseIsComplete:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct __SecPolicy *certificateTrustPolicy; // @synthesize certificateTrustPolicy=_certificateTrustPolicy;
@property(readonly, nonatomic) NSURL *plistURL; // @synthesize plistURL=_plistURL;
@property(retain) CKPublicKey *verifiedPublicKey; // @synthesize verifiedPublicKey=_verifiedPublicKey;
- (_Bool)canVerifySignedPlistValues:(id)arg1 withKey:(struct __SecKey *)arg2;
- (void)requestDidParsePlistObject:(id)arg1;
- (id)url;
- (_Bool)hasRequestBody;
- (id)httpMethod;
- (long long)partitionType;
- (long long)serverType;
- (_Bool)allowsAnonymousAccount;
- (_Bool)requiresTokenRegistration;
- (_Bool)requiresDeviceID;
- (_Bool)requiresConfiguration;
- (void)dealloc;
- (id)initWithPlistURL:(id)arg1 verifyWithPolicy:(struct __SecPolicy *)arg2;

@end

