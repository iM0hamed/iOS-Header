//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class TSCH3DChartElementProperties, TSCH3DRenderProcessor, TSCH3DSceneRenderPipeline, TSCHChartSeries;

@interface TSCH3DRenderElementInfo : NSObject <NSCopying>
{
    _Bool _useBoundsGeometry;
    _Bool _twoPasses;
    _Bool _transparent;
    _Bool _geometryOnly;
    TSCH3DSceneRenderPipeline *_pipeline;
    TSCH3DChartElementProperties *_properties;
    TSCHChartSeries *_series;
    tvec2_3b141483 _index;
}

+ (id)infoWithPipeline:(id)arg1 properties:(id)arg2 series:(id)arg3 index:(tvec2_3b141483)arg4 useBoundsGeometry:(_Bool)arg5 twoPasses:(_Bool)arg6 transparent:(_Bool)arg7 geometryOnly:(_Bool)arg8;
- (id).cxx_construct;
@property(readonly, nonatomic) _Bool geometryOnly; // @synthesize geometryOnly=_geometryOnly;
@property(nonatomic) _Bool transparent; // @synthesize transparent=_transparent;
@property(nonatomic) _Bool twoPasses; // @synthesize twoPasses=_twoPasses;
@property(readonly, nonatomic) _Bool useBoundsGeometry; // @synthesize useBoundsGeometry=_useBoundsGeometry;
@property(readonly, nonatomic) tvec2_3b141483 index; // @synthesize index=_index;
@property(readonly, retain, nonatomic) TSCHChartSeries *series; // @synthesize series=_series;
@property(readonly, retain, nonatomic) TSCH3DChartElementProperties *properties; // @synthesize properties=_properties;
@property(readonly, retain, nonatomic) TSCH3DSceneRenderPipeline *pipeline; // @synthesize pipeline=_pipeline;
@property(readonly, retain, nonatomic) TSCH3DRenderProcessor *processor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPipeline:(id)arg1 properties:(id)arg2 series:(id)arg3 index:(tvec2_3b141483)arg4 useBoundsGeometry:(_Bool)arg5 twoPasses:(_Bool)arg6 transparent:(_Bool)arg7 geometryOnly:(_Bool)arg8;

@end

