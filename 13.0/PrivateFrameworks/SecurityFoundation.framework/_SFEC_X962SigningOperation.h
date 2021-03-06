//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFSigningOperation-Protocol.h>

@class NSString, _SFECKeySpecifier;
@protocol SFDigestOperation;

@interface _SFEC_X962SigningOperation : NSObject <SFSigningOperation>
{
    id _x962SigningOperationInternal;
    id <SFDigestOperation> _digestOperation;
}

+ (_Bool)supportsSecureCoding;
@property(copy) id <SFDigestOperation> digestOperation; // @synthesize digestOperation=_digestOperation;
- (void).cxx_destruct;
@property(copy, nonatomic) _SFECKeySpecifier *signingKeySpecifier;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;
- (id)initWithKeySpecifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

