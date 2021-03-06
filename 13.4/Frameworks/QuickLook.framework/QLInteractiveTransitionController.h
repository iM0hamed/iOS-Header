//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLTransitionController.h>

#import <QuickLook/UIViewControllerInteractiveTransitioning-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLInteractiveTransitionController : QLTransitionController <UIViewControllerInteractiveTransitioning>
{
    double _initialTransitioningViewWidth;
    double _completeProgress;
}

@property(nonatomic) double completeProgress; // @synthesize completeProgress=_completeProgress;
- (void)_performForcedDismissal;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)updateTransitionWithProgress:(double)arg1 isFinal:(_Bool)arg2;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

