//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaControls/MediaControlsVolumeSlider.h>

#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UINotificationFeedbackGenerator, UIView;
@protocol MediaControlsMasterVolumeSliderDelegate;

__attribute__((visibility("hidden")))
@interface MediaControlsMasterVolumeSlider : MediaControlsVolumeSlider <UIGestureRecognizerDelegate>
{
    UIView *_growingThumbView;
    double _forcePercent;
    float _initialX;
    _Bool _syncingEnabled;
    id <MediaControlsMasterVolumeSliderDelegate> _delegate;
    long long _syncState;
    UIImpactFeedbackGenerator *_positiveFeedbackGenerator;
    UINotificationFeedbackGenerator *_negativeFeedbackGenerator;
    UILongPressGestureRecognizer *_gestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(retain, nonatomic) UINotificationFeedbackGenerator *negativeFeedbackGenerator; // @synthesize negativeFeedbackGenerator=_negativeFeedbackGenerator;
@property(retain, nonatomic) UIImpactFeedbackGenerator *positiveFeedbackGenerator; // @synthesize positiveFeedbackGenerator=_positiveFeedbackGenerator;
@property(nonatomic) long long syncState; // @synthesize syncState=_syncState;
@property(nonatomic) __weak id <MediaControlsMasterVolumeSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled; // @synthesize syncingEnabled=_syncingEnabled;
- (void)layoutSubviews;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)shrinkThumbAfterDelay:(double)arg1;
- (void)handleLongPress:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)createThumbView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

