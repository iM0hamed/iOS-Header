//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface CRKPrivateIdentity : NSObject <NSSecureCoding>
{
    NSData *_identityPersistentId;
    NSData *_stagedIdentityPersistentId;
    NSString *_commonNamePrefix;
    NSDate *_identityExpirationDate;
    NSDate *_stagedIdentityExpirationDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)keychainGroup;
+ (id)commonNameWithPrefix:(id)arg1;
+ (id)makeIdentityWithCommonName:(id)arg1;
+ (id)freshPrivateIdentityWithCommonNamePrefix:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *stagedIdentityExpirationDate; // @synthesize stagedIdentityExpirationDate=_stagedIdentityExpirationDate;
@property(retain, nonatomic) NSDate *identityExpirationDate; // @synthesize identityExpirationDate=_identityExpirationDate;
@property(copy, nonatomic) NSString *commonNamePrefix; // @synthesize commonNamePrefix=_commonNamePrefix;
@property(retain, nonatomic) NSData *stagedIdentityPersistentId; // @synthesize stagedIdentityPersistentId=_stagedIdentityPersistentId;
@property(retain, nonatomic) NSData *identityPersistentId; // @synthesize identityPersistentId=_identityPersistentId;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;
- (_Bool)refreshIdentities;
- (id)initWithIdentityPersistentId:(id)arg1 stagedIdentityPersistentId:(id)arg2 commonNamePrefix:(id)arg3;

@end

