//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPreviewPresentationController.h>

#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>

@class MTMaterialView, NSString, UIView;

__attribute__((visibility("hidden")))
@interface MediaControlsPresentationController : UIPreviewPresentationController <UIGestureRecognizerDelegate>
{
    UIView *_presentingView;
    MTMaterialView *_materialView;
    struct CGPoint _sourcePoint;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(_Bool)arg2;
@property(retain, nonatomic) MTMaterialView *materialView; // @synthesize materialView=_materialView;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) struct CGPoint sourcePoint; // @synthesize sourcePoint=_sourcePoint;
@property(nonatomic) __weak UIView *presentingView; // @synthesize presentingView=_presentingView;
- (void).cxx_destruct;
- (void)_dismissTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (_Bool)shouldPresentInFullscreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

