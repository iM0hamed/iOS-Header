//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVibrancyEffect.h>

@class MTVisualStyling;

@interface _MTVisualStylingVibrancyEffect : UIVibrancyEffect
{
    MTVisualStyling *_visualStyling;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_visualStyling) MTVisualStyling *visualStyling; // @synthesize visualStyling=_visualStyling;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectConfig;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisualStyling:(id)arg1;

@end

