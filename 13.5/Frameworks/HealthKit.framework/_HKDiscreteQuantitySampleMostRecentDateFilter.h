//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSDate, NSString;

@interface _HKDiscreteQuantitySampleMostRecentDateFilter : _HKFilter
{
    NSString *_keyPath;
    unsigned long long _operatorType;
    NSDate *_comparisonDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 comparisonDate:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDate *comparisonDate; // @synthesize comparisonDate=_comparisonDate;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)_targetDateFromQuantitySample:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end

