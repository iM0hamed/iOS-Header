//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImageView.h>

#import <UIKitCore/_UIVisualEffectSubviewSource-Protocol.h>

@class NSArray, NSString, _UIVisualEffectViewBackdropCaptureGroup;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectImageView : UIImageView <_UIVisualEffectSubviewSource>
{
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    NSArray *_viewEffects;
    NSArray *_filters;
}

@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(readonly, copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
- (void).cxx_destruct;
- (id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(_Bool)arg3;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)_applyFilterValues:(id)arg1 baseName:(id)arg2 toLayer:(id)arg3;
- (void)removeViewEffects;
- (void)applyIdentityViewEffects;
- (void)applyRequestedViewEffects;
- (void)addViewEffects:(id)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)asBackdropView;
- (id)asImageView;
- (id)asView;
- (id)asLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

