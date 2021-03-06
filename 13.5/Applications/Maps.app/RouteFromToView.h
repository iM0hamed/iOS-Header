//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MapsThemeButton, NSArray, NSLayoutConstraint, NSString, RoutePlanningTiming, TransitCustomTimingBannerFormatter, UILabel, UIStackView;
@protocol RouteFromToViewDelegate;

__attribute__((visibility("hidden")))
@interface RouteFromToView : UIView
{
    NSLayoutConstraint *_topToOriginLabelConstraint;
    UIStackView *_secondRowStackView;
    NSLayoutConstraint *_fromLabelToBottomConstraint;
    NSArray *_thirdLineVisibleConstraints;
    UILabel *_fromLabel;
    MapsThemeButton *_originButton;
    UILabel *_originLabel;
    UILabel *_separatorLabel;
    MapsThemeButton *_timingButton;
    _Bool _interactiveOrigin;
    NSString *_originName;
    NSString *_destinationName;
    RoutePlanningTiming *_timing;
    id <RouteFromToViewDelegate> _delegate;
    UILabel *_destinationLabel;
    TransitCustomTimingBannerFormatter *_timingFormatter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TransitCustomTimingBannerFormatter *timingFormatter; // @synthesize timingFormatter=_timingFormatter;
@property(readonly, nonatomic) UILabel *destinationLabel; // @synthesize destinationLabel=_destinationLabel;
@property(nonatomic) __weak id <RouteFromToViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) RoutePlanningTiming *timing; // @synthesize timing=_timing;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(copy, nonatomic) NSString *originName; // @synthesize originName=_originName;
- (void)_timingButtonTapped:(id)arg1;
- (void)_originButtonTapped:(id)arg1;
- (void)_didTap:(id)arg1;
- (void)layoutSubviews;
- (void)_updateTimingButtonTitle;
- (id)_initialConstraints;
- (void)_createSubviews;
- (void)dealloc;
- (void)_customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithInteractiveOrigin:(_Bool)arg1;
- (id)initWithInteractiveOrigin:(_Bool)arg1 frame:(struct CGRect)arg2;

@end

