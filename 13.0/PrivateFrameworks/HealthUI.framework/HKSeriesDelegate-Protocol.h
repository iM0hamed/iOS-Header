//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKGraphSeries;

@protocol HKSeriesDelegate
- (void)autoscaleStateChangedForSeries:(HKGraphSeries *)arg1;
- (struct CGRect)screenRectForSeries:(HKGraphSeries *)arg1;
- (_Bool)seriesDrawingDuringTiling;
- (_Bool)seriesDrawingDuringAutoscale;
- (_Bool)seriesDrawingDuringScrolling;
- (struct UIEdgeInsets)virtualMarginInsets;
- (void)seriesDidInvalidatePaths:(HKGraphSeries *)arg1 newDataArrived:(_Bool)arg2;
@end

