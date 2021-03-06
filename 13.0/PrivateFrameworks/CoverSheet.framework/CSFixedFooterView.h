//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewBase.h>

@class CSPageControl, CSShakableView, SBFPagedScrollView, SBUICallToActionLabel, SBUILegibilityLabel, UIView, _UILegibilitySettings;
@protocol SBUILegibility;

@interface CSFixedFooterView : CSCoverSheetViewBase
{
    _UILegibilitySettings *_legibilitySettings;
    CSShakableView *_callToActionShakeView;
    SBUICallToActionLabel *_callToActionLabel;
    SBUILegibilityLabel *_alternateCallToActionLabel;
    double _alternateCallToActionLabelOffset;
    UIView<SBUILegibility> *_statusTextView;
    CSPageControl *_pageControl;
    SBFPagedScrollView *_trackingScrollViewForPageControl;
}

@property(nonatomic) __weak SBFPagedScrollView *trackingScrollViewForPageControl; // @synthesize trackingScrollViewForPageControl=_trackingScrollViewForPageControl;
@property(readonly, nonatomic) CSPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIView<SBUILegibility> *statusTextView; // @synthesize statusTextView=_statusTextView;
@property(nonatomic) double alternateCallToActionLabelOffset; // @synthesize alternateCallToActionLabelOffset=_alternateCallToActionLabelOffset;
@property(retain, nonatomic) SBUILegibilityLabel *alternateCallToActionLabel; // @synthesize alternateCallToActionLabel=_alternateCallToActionLabel;
@property(retain, nonatomic) SBUICallToActionLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
@property(readonly, nonatomic) CSShakableView *callToActionShakeView; // @synthesize callToActionShakeView=_callToActionShakeView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateViewsForLegibilitySettings;
- (void)updatePageControl;
- (void)_layoutPageControl;
- (void)_layoutStatusTextView;
- (void)_layoutCallToActionView;
- (void)_addPageControl;
- (void)_addShakeView;
- (void)updateForLegibilitySettings:(id)arg1;
- (id)presentationRegions;
- (id)initWithFrame:(struct CGRect)arg1;

@end

