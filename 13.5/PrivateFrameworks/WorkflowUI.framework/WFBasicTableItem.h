//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFTableItem.h>

@class NSString, UIImage;

@interface WFBasicTableItem : WFTableItem
{
    NSString *_primaryText;
    NSString *_secondaryText;
    UIImage *_image;
    unsigned long long _primaryTextStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long primaryTextStyle; // @synthesize primaryTextStyle=_primaryTextStyle;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (_Bool)isEqual:(id)arg1;
- (void)configureCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4;

@end

