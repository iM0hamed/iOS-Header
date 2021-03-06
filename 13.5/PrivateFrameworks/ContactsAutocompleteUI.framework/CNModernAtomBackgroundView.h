//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNAtomView;

@interface CNModernAtomBackgroundView : UIView
{
    UIView *_selectedView;
    unsigned long long _selectionStyle;
    UIView *_separatorView;
    int _separatorStyle;
    _Bool _selected;
    double _scalingFactor;
    CNAtomView *_hostAtomView;
}

- (void).cxx_destruct;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(readonly, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) __weak CNAtomView *hostAtomView; // @synthesize hostAtomView=_hostAtomView;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
- (void)invalidateIntrinsicContentSize;
- (id)_chevronImage;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 style:(unsigned long long)arg3;
- (_Bool)isSelected;
- (void)_setSelectionStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)_backgroundBleedArea;
- (double)separatorWidth;
- (void)tintColorDidChange;
- (id)wrappedTintColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

