//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface BroadwayCardView : UIView
{
    _Bool _paused;
    struct CGSize _videoSizePoints;
}

@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) struct CGSize videoSizePoints; // @synthesize videoSizePoints=_videoSizePoints;
- (void)removeAnimationObserver:(id)arg1;
- (void)addAnimationObserver:(id)arg1;
- (void)setModelContents:(id)arg1;
- (void)setVideoURL:(id)arg1 sceneURL:(id)arg2;

@end

