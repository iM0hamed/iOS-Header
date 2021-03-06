//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class _UIBackdropView;
@protocol PKSpendingSummaryFooter;

@interface PKSpendingSummaryFooterContainer : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_topSeparatorView;
    UIView<PKSpendingSummaryFooter> *_currentFooter;
    UIView<PKSpendingSummaryFooter> *_nextFooter;
}

@property(retain, nonatomic) UIView<PKSpendingSummaryFooter> *nextFooter; // @synthesize nextFooter=_nextFooter;
@property(retain, nonatomic) UIView<PKSpendingSummaryFooter> *currentFooter; // @synthesize currentFooter=_currentFooter;
- (void).cxx_destruct;
- (void)setTransitionProgress:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

