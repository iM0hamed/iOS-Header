//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)_updateTextColor;
- (void)tintColorDidChange;
- (id)description;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setUpConstraints;
- (void)setupSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

