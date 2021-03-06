//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>

@class ARImageData, MISSING_TYPE, NSString;

@interface AR2DSkeletonRawEspressoResult : NSObject <ARResultData>
{
    ARImageData *_imageDataForNeuralNetwork;
    ARImageData *_inputImageData;
    long long _rotationNeeded;
    struct __CVBuffer *_heatMapBuffer;
    struct __CVBuffer *_affinityMapBuffer;
    struct CGSize _regionOfInterest;
    MISSING_TYPE *_heatMapShape;
    MISSING_TYPE *_heatMapStrides;
    MISSING_TYPE *_affinityMapShape;
    MISSING_TYPE *_affinityMapStrides;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MISSING_TYPE *affinityMapStrides; // @synthesize affinityMapStrides=_affinityMapStrides;
@property(readonly, nonatomic) MISSING_TYPE *affinityMapShape; // @synthesize affinityMapShape=_affinityMapShape;
@property(readonly, nonatomic) struct __CVBuffer *affinityMapBuffer; // @synthesize affinityMapBuffer=_affinityMapBuffer;
@property(readonly, nonatomic) MISSING_TYPE *heatMapStrides; // @synthesize heatMapStrides=_heatMapStrides;
@property(readonly, nonatomic) MISSING_TYPE *heatMapShape; // @synthesize heatMapShape=_heatMapShape;
@property(readonly, nonatomic) struct __CVBuffer *heatMapBuffer; // @synthesize heatMapBuffer=_heatMapBuffer;
@property(readonly, nonatomic) struct CGSize regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
@property(readonly, nonatomic) long long rotationNeeded; // @synthesize rotationNeeded=_rotationNeeded;
@property(readonly, nonatomic) ARImageData *inputImageData; // @synthesize inputImageData=_inputImageData;
@property(readonly, nonatomic) ARImageData *imageDataForNeuralNetwork; // @synthesize imageDataForNeuralNetwork=_imageDataForNeuralNetwork;
- (void)dealloc;
- (id)initWithMLImage:(id)arg1 originalImageData:(id)arg2 rotationNeeded:(long long)arg3 regionOfInterest:(struct CGSize)arg4 heatMapBuffer:(struct __CVBuffer *)arg5 heatMapShape:(struct __CVBuffer *)arg6 heatMapStrides:affinityMapBuffer:affinityMapShape:affinityMapStrides: /* Error: Ran out of types for this method. */;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

