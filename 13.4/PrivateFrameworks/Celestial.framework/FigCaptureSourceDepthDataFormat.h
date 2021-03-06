//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureSourceFormat.h>

@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat
{
}

@property(readonly) _Bool RGBIRStereoFusionSupported;
@property(readonly) NSArray *supportedSemanticSegmentationMatteURNs;
@property(readonly) float portraitEffectsMatteMainImageDownscalingFactor;
- (CDStruct_79c71658)depthEngineOutputDimensions;
@property(readonly, getter=isStillImageOnlyDepthData) _Bool stillImageOnlyDepthData;
@property(readonly) CDStruct_79c71658 highResStillImageDimensions;
@property(readonly) float fieldOfView;
@property(readonly) float maxSupportedFrameRate;
@property(readonly) float minSupportedFrameRate;
@property(readonly) CDStruct_79c71658 dimensions;
- (struct opaqueCMFormatDescription *)formatDescription;
- (unsigned int)mediaType;
- (id)copyWithNewPixelFormat:(unsigned int)arg1;

@end

