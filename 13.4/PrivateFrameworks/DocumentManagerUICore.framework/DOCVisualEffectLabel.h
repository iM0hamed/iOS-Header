//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface DOCVisualEffectLabel : UIVisualEffectView
{
    UILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) long long textAlignment;
@property(nonatomic) long long numberOfLines;
@property(nonatomic) _Bool adjustsFontForContentSizeCategory; // @dynamic adjustsFontForContentSizeCategory;
@property(nonatomic) long long lineBreakMode; // @dynamic lineBreakMode;
@property(copy, nonatomic) UIFont *font; // @dynamic font;
@property(copy, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text; // @dynamic text;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (id)initWithEffect:(id)arg1;

@end

