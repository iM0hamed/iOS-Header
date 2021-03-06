//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSDate, NSTimer, OKProgressArcLayer;

@interface OKRoundProgressView : UIView
{
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
    OKProgressArcLayer *__progressArcLayer;
    double __contentsScale;
    double _progress;
    long long _style;
}

@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic, setter=_setContentsScale:) double _contentsScale; // @synthesize _contentsScale=__contentsScale;
@property(retain, nonatomic, setter=_setProgressArcLayer:) OKProgressArcLayer *_progressArcLayer; // @synthesize _progressArcLayer=__progressArcLayer;
- (void)resetProgress;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)setInitialIncreaseRatePerFrame:(double)arg1;
- (void)_updateUIProgress;
- (void)increaseUIProgress:(id)arg1;
- (double)toRadian:(double)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (void)setPieRadius:(double)arg1;
- (void)_setupSubviews;
- (void)_updateSublayersContentsScale;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

