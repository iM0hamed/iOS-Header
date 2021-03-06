//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/FIUIChartBackgroundView.h>

@class NSArray, UIColor;

@interface FIUIChartDashedBackgroundView : FIUIChartBackgroundView
{
    NSArray *_linePositions;
    _Bool _shouldCenterLines;
    unsigned long long _numLines;
    UIColor *_color;
    long long _direction;
    long long _lineType;
}

@property(nonatomic) long long lineType; // @synthesize lineType=_lineType;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool shouldCenterLines; // @synthesize shouldCenterLines=_shouldCenterLines;
@property(nonatomic) unsigned long long numLines; // @synthesize numLines=_numLines;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawLine:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)_updateLinePositions;
- (id)initWithFrame:(struct CGRect)arg1;

@end

