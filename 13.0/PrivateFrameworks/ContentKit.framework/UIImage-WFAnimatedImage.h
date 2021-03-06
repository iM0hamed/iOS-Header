//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

#import <ContentKit/DCImage-Protocol.h>

@class NSData;

@interface UIImage (WFAnimatedImage) <DCImage>
+ (id)wf_animatedImageWithContentsOfFile:(id)arg1;
+ (id)wf_animatedImageWithData:(id)arg1 scale:(double)arg2;
+ (id)wf_animatedImageWithData:(id)arg1;
+ (id)wf_imageWithColor:(id)arg1;
+ (_Bool)imageSizeIndicatesScreenshot:(struct CGSize)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 cgImagePropertyOrientation:(unsigned int)arg3;
- (id)wf_tintedImageWithColor:(id)arg1;
@property(readonly, nonatomic) _Bool isScreenshot;
@property(readonly, nonatomic) NSData *PNGRepresentation;
@property(readonly, nonatomic) unsigned int cgImagePropertyOrientation;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 cgImagePropertyOrientation:(unsigned int)arg3;
@end

