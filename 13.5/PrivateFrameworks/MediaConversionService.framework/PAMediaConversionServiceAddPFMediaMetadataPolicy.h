//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    unsigned char _type;
    id _value;
}

+ (_Bool)supportsSecureCoding;
+ (id)policyWithType:(unsigned char)arg1 value:(id)arg2;
- (void).cxx_destruct;
@property(retain) id value; // @synthesize value=_value;
@property unsigned char type; // @synthesize type=_type;
- (id)processMetadata:(id)arg1;
- (_Bool)metadataNeedsProcessing:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

