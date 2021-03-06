//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

#import <NeutrinoCore/NUTimeBased-Protocol.h>

@class NSString, NUColorSpace, NUPixelFormat;
@protocol NUExtentPolicy, NUMutableImage, NURegionPolicy, NUScalePolicy;

@interface NUImageRenderRequest : NURenderRequest <NUTimeBased>
{
    NUColorSpace *_colorSpace;
    id <NURegionPolicy> _regionPolicy;
    id <NUScalePolicy> _scalePolicy;
    id <NUExtentPolicy> _extentPolicy;
    NUPixelFormat *_pixelFormat;
    id <NUMutableImage> _targetImage;
    CDStruct_d58201db _tileSize;
    CDStruct_d58201db _borderSize;
}

- (void).cxx_destruct;
@property(retain) id <NUMutableImage> targetImage; // @synthesize targetImage=_targetImage;
@property CDStruct_912cb5d2 borderSize; // @synthesize borderSize=_borderSize;
@property CDStruct_912cb5d2 tileSize; // @synthesize tileSize=_tileSize;
@property(retain) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain) id <NUExtentPolicy> extentPolicy; // @synthesize extentPolicy=_extentPolicy;
@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property(retain) id <NURegionPolicy> regionPolicy; // @synthesize regionPolicy=_regionPolicy;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (long long)mediaComponentType;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end

