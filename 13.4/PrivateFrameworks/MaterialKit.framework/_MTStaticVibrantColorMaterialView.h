//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MaterialKit/MTMaterialView.h>

#import <MaterialKit/MTCoreMaterialVisualStylingProviderObserving-Protocol.h>

@class MTCoreMaterialVisualStylingProvider, NSMutableDictionary, NSString;

@interface _MTStaticVibrantColorMaterialView : MTMaterialView <MTCoreMaterialVisualStylingProviderObserving>
{
    NSMutableDictionary *_visualStyleCategoriesToCoreMaterialProviders;
    MTCoreMaterialVisualStylingProvider *_contentVisualStylingProvider;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_updateContentVisualStylingWithProvider:(id)arg1;
- (void)_updateContentVisualStylingIfNecessary;
- (void)_updateCoreMaterialVisualStylingProviders;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (id)_coreMaterialVisualStylingProviderForCategory:(id)arg1;
- (id)_materialLayer;
- (void)setContentReplacedWithSnapshot:(_Bool)arg1;
- (_Bool)isContentReplacedWithSnapshot;
- (void)setIgnoresScreenClip:(_Bool)arg1;
- (_Bool)ignoresScreenClip;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary:(_Bool)arg1;
- (_Bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustmentIfNecessary;
- (void)setUseBuiltInAlphaTransformerAndBackdropScaleAdjustment:(_Bool)arg1;
- (_Bool)useBuiltInAlphaTransformerAndBackdropScaleAdjustment;
- (void)setShouldCrossfade:(_Bool)arg1;
- (_Bool)shouldCrossfade;
- (void)setBackdropScaleAdjustment:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)backdropScaleAdjustment;
- (void)setCaptureOnly:(_Bool)arg1;
- (_Bool)isCaptureOnly;
- (void)setZoomEnabled:(_Bool)arg1;
- (_Bool)isZoomEnabled;
- (void)setBlurEnabled:(_Bool)arg1;
- (_Bool)isBlurEnabled;
- (void)layoutSubviews;
- (void)setRecipe:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

