//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse
{
    INCurrencyAmount *_cancellationFee;
    NSDateComponents *_cancellationFeeThreshold;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDateComponents *cancellationFeeThreshold; // @synthesize cancellationFeeThreshold=_cancellationFeeThreshold;
@property(copy, nonatomic) INCurrencyAmount *cancellationFee; // @synthesize cancellationFee=_cancellationFee;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long code; // @dynamic code;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end

