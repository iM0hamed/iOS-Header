//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKAnchorDelegate-Protocol.h>

@class NSString;
@protocol MDRenderTarget;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate>
{
    shared_ptr_2fc78ff4 _anchor;
    _Bool _followsTerrain;
    struct CGPoint _screenPointInCanvas;
    struct LayoutContext *_lastLayoutContext;
    struct Coordinate2D<Degrees, double> _lastCoordinate;
    _Bool _isUpdating;
    double _pointsPerMeter;
    id <MDRenderTarget> _displayLayer;
}

@property(nonatomic) id <MDRenderTarget> displayLayer; // @synthesize displayLayer=_displayLayer;
@property(nonatomic) _Bool followsTerrain; // @synthesize followsTerrain=_followsTerrain;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)anchorWorldPointDidChange:(void *)arg1;
- (void)updateIfNeeded;
- (void)layoutWithContext:(struct LayoutContext *)arg1;
- (void)_updateCachedPointWithContext:(struct LayoutContext *)arg1;
- (shared_ptr_2fc78ff4)_anchorWithContext:(struct LayoutContext *)arg1;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (struct CGPoint)pointInLayer:(id)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)destroyAnchor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

