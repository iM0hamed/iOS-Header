//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSArray, UILabel;

@interface FLHeaderCell : PSTableCell
{
    UILabel *_followTitle;
    UILabel *_followSubtitle;
    NSArray *_constraints;
}

+ (long long)cellStyle;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

