//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIBackdropViewSettings;

@interface TabSnapshotRequest : NSObject
{
    double _topBackdropHeight;
    _UIBackdropViewSettings *_topBackdropSettings;
    unsigned long long _options;
    struct CGSize _size;
}

@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) _UIBackdropViewSettings *topBackdropSettings; // @synthesize topBackdropSettings=_topBackdropSettings;
@property(readonly, nonatomic) double topBackdropHeight; // @synthesize topBackdropHeight=_topBackdropHeight;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize)arg1 topBackdropHeight:(double)arg2 topBackdropSettings:(id)arg3 options:(unsigned long long)arg4;

@end

