//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISparseRenderer : CIFilter
{
    CIImage *inputImage;
    CIImage *inputMatteImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
    NSNumber *inputApertureScaling;
    NSNumber *inputDraftMode;
    NSNumber *inputAperture;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(copy, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(copy, nonatomic) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel:(_Bool)arg1 alpha:(_Bool)arg2;
- (id)_lutKernel:(_Bool)arg1 alpha:(_Bool)arg2;
- (id)baseVecsLUT:(unsigned int)arg1;
- (id)stepsLUT:(unsigned int)arg1;
- (id)baseVecsLUTGenerator;
- (id)stepsLUTGenerator;
- (_Bool)_useD2XRenderer;
- (id)_packageParams:(_Bool)arg1 extent:(struct CGRect)arg2 image:(id)arg3 haveAlpha:(_Bool)arg4;

@end

