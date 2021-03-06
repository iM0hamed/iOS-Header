//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PUIDTouchHistory : NSObject
{
    unsigned long long _depth;
    NSMutableArray *_locations;
    NSMutableArray *_timestamps;
}

- (void).cxx_destruct;
- (int)touchHistoryDepthForTimeDuration:(double)arg1 forComputingDerivative:(_Bool)arg2;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (void)reset;
- (void)updateWithLocation:(struct CGPoint)arg1 timestamp:(double)arg2;
- (id)init;
- (id)initWithDepth:(unsigned long long)arg1;

@end

