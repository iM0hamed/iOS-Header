//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UIActivityIndicatorView, UILabel;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView
{
    UILabel *_headerLabel;
    UIActivityIndicatorView *_spinner;
    struct UIEdgeInsets _insets;
    _Bool _showSpinner;
    NSString *_headerText;
}

+ (id)_labelFont;
+ (double)sectionHeight;
@property(nonatomic) _Bool showSpinner; // @synthesize showSpinner=_showSpinner;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;
- (void)_systemTextSizeChanged;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 showSpinner:(_Bool)arg3 insets:(struct UIEdgeInsets)arg4;

@end

