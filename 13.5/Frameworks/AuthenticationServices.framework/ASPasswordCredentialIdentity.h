//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/NSCopying-Protocol.h>
#import <AuthenticationServices/NSSecureCoding-Protocol.h>

@class ASCredentialServiceIdentifier, NSString;

@interface ASPasswordCredentialIdentity : NSObject <NSCopying, NSSecureCoding>
{
    ASCredentialServiceIdentifier *_serviceIdentifier;
    NSString *_user;
    NSString *_recordIdentifier;
    long long _rank;
}

+ (_Bool)supportsSecureCoding;
+ (id)identityWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) NSString *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(readonly, copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(readonly, nonatomic) ASCredentialServiceIdentifier *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithFoundationCredentialIdentity:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3;

@end

