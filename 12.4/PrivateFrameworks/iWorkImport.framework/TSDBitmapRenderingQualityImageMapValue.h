//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDBitmapRenderingQualityImageMapValue : NSObject
{
    struct CGSize mMaxSize;
    struct CGImage *mDegradedImageRef;
}

@property(readonly, nonatomic) struct CGSize maxSize; // @synthesize maxSize=mMaxSize;
- (struct CGImage *)getDegradedImageRefFromProvider:(id)arg1 quality:(int)arg2 canvasScale:(float)arg3;
- (struct CGImage *)degradedImageRefForForProvider:(id)arg1 quality:(int)arg2 canvasScale:(float)arg3;
- (void)addSize:(struct CGSize)arg1;
- (void)dealloc;

@end

