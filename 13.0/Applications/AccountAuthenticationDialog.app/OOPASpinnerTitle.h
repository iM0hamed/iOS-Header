//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface OOPASpinnerTitle : UIView
{
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end

