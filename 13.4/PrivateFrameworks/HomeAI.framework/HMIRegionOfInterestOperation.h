//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class HMICameraVideoFrame, NSError;

__attribute__((visibility("hidden")))
@interface HMIRegionOfInterestOperation : NSOperation
{
    struct __CVBuffer *_pixelBuffer;
    HMICameraVideoFrame *_frame;
    NSError *_error;
    struct CGSize _size;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) __weak HMICameraVideoFrame *frame; // @synthesize frame=_frame;
@property(readonly) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(readonly) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)dealloc;
- (void)main;
- (id)initWithFrame:(id)arg1 size:(struct CGSize)arg2;

@end

