//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class VUILabel, VUIProductInfoAiringLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductInfoAiringView : UIView
{
    VUIProductInfoAiringLayout *_layout;
    VUILabel *_infoLabel;
    _TVImageView *_logo;
}

+ (id)_tintColorForDataSource:(id)arg1 interfaceStyle:(long long)arg2;
+ (id)airingLogoWithImageDictionary:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)airingTextWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3;
+ (id)configureViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) _TVImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) VUILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) VUIProductInfoAiringLayout *layout; // @synthesize layout=_layout;
- (struct CGSize)layoutSubviewsWithSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

