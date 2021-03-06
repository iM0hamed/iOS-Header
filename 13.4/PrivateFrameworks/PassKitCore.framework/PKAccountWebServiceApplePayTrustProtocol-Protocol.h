//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSData, NSString, NSURL, PKApplePayTrustHashResponse;

@protocol PKAccountWebServiceApplePayTrustProtocol <NSObject>
@property(copy, nonatomic) NSData *publicKeyHash;
@property(retain, nonatomic) NSURL *baseURL;
@property(retain, nonatomic) PKApplePayTrustHashResponse *hashResponse;
- (NSData *)manifestHashWithReferenceIdentifier:(NSString *)arg1;
- (NSArray *)endpointComponents;
- (Class)signatureResponseClass;
@end

