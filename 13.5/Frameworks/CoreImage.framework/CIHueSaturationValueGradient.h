//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CIHueSaturationValueGradient : CIFilter
{
    NSNumber *inputValue;
    NSNumber *inputRadius;
    NSNumber *inputSoftness;
    NSNumber *inputDither;
    id inputColorSpace;
}

+ (id)customAttributes;
@property(retain, nonatomic) id inputColorSpace; // @synthesize inputColorSpace;
@property(retain, nonatomic) NSNumber *inputDither; // @synthesize inputDither;
@property(retain, nonatomic) NSNumber *inputSoftness; // @synthesize inputSoftness;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputValue; // @synthesize inputValue;
- (id)outputImage;
- (id)_kernelD;
- (id)_kernel;

@end

