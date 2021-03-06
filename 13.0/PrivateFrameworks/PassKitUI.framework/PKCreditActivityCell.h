//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class NSString, PKDashboardCreditAccountItem, PKSpendingSummaryChartView, UIFont, UILabel;

@interface PKCreditActivityCell : PKDashboardCollectionViewCell
{
    UILabel *_labelTitle;
    NSString *_title;
    _Bool _isCompactUI;
    _Bool _useAccssibilityLayout;
    PKDashboardCreditAccountItem *_item;
    PKSpendingSummaryChartView *_chartView;
    UIFont *_titleFont;
}

@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) _Bool useAccssibilityLayout; // @synthesize useAccssibilityLayout=_useAccssibilityLayout;
@property(readonly, nonatomic) PKSpendingSummaryChartView *chartView; // @synthesize chartView=_chartView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PKDashboardCreditAccountItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

