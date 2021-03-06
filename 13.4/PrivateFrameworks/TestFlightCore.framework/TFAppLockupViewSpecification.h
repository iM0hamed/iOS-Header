//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface TFAppLockupViewSpecification : NSObject
{
    double _titleLabelBaselineToFirstSubtitleLabelBaseline;
    double _firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
    UIFont *_titleLabelFont;
    UIFont *_subtitleLabelFont;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *subtitleLabelFont; // @synthesize subtitleLabelFont=_subtitleLabelFont;
@property(readonly, nonatomic) UIFont *titleLabelFont; // @synthesize titleLabelFont=_titleLabelFont;
@property(readonly, nonatomic) double firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline; // @synthesize firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline=_firstSubtitleLabelBaselineToSecondSubtitleLabelBaseline;
@property(readonly, nonatomic) double titleLabelBaselineToFirstSubtitleLabelBaseline; // @synthesize titleLabelBaselineToFirstSubtitleLabelBaseline=_titleLabelBaselineToFirstSubtitleLabelBaseline;
- (id)_subtitleFontStyle;
- (id)_createSubtitleLabelFontWithTraitCollection:(id)arg1;
- (id)_titleFontStyle;
- (id)_createTitleLabelFontWithTraitCollection:(id)arg1;
@property(readonly, nonatomic) double paddingBetweenIconAndText;
@property(readonly, nonatomic) struct CGSize iconSize;
@property(readonly, nonatomic) UIColor *iconPlaceholderColor;
@property(readonly, nonatomic) UIColor *subtitleTextColor;
@property(readonly, nonatomic) UIColor *titleTextColor;
- (id)initWithTraitCollection:(id)arg1;

@end

