//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSArray;

@interface PLAssetsdServicePermissions : NSObject <NSCopying>
{
    _Bool _allowsAuthorizationWithPhotoKitEntitlement;
    long long _requiredAuthorization;
    NSArray *_requiredEntitlements;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(nonatomic) _Bool allowsAuthorizationWithPhotoKitEntitlement; // @synthesize allowsAuthorizationWithPhotoKitEntitlement=_allowsAuthorizationWithPhotoKitEntitlement;
@property(nonatomic) long long requiredAuthorization; // @synthesize requiredAuthorization=_requiredAuthorization;
- (id)_errorForMissingEntitlements:(id)arg1 withContext:(id)arg2;
- (id)_verifyEntitlementsWithContext:(id)arg1;
- (_Bool)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)arg1;
- (_Bool)_isAuthorizedForWriteOnlyWithContext:(id)arg1;
- (_Bool)_isAuthorizedForReadWriteWithContext:(id)arg1;
- (_Bool)_isAuthorizedViaTCCWithContext:(id)arg1;
- (id)_verifyAuthorizationWithContext:(id)arg1;
- (id)verifyPermissionsWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPermissions:(id)arg1;

@end

