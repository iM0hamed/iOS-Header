//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse
{
    PKServiceProviderPurchase *_updatedPurchase;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) PKServiceProviderPurchase *updatedPurchase; // @synthesize updatedPurchase=_updatedPurchase;
- (id)initWithData:(id)arg1;

@end

