//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class UIView;
@protocol NTKComplicationImageView;

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView
{
    UIView<NTKComplicationImageView> *_imageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
@property(retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateForTemplateChange;
- (void)setUsesMediumLayout:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

