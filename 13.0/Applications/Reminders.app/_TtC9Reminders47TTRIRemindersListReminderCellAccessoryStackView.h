//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIStackView.h>

@class MISSING_TYPE, NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface _TtC9Reminders47TTRIRemindersListReminderCellAccessoryStackView : UIStackView
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *viewModel;
    MISSING_TYPE *flaggedImageView;
    MISSING_TYPE *infoButton;
    MISSING_TYPE *subtaskCountLabel;
    MISSING_TYPE *subtaskDisclosureButton;
    MISSING_TYPE *appLinkButton;
    MISSING_TYPE *subtaskCountLabelWidthConstraint;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)appLinkButtonAction:(id)arg1;
- (void)subtaskDisclosureButtonAction:(id)arg1;
- (void)infoButtonAction:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *subtaskCountLabelWidthConstraint; // @synthesize subtaskCountLabelWidthConstraint;
@property(nonatomic) __weak UIButton *appLinkButton; // @synthesize appLinkButton;
@property(nonatomic) __weak UIButton *subtaskDisclosureButton; // @synthesize subtaskDisclosureButton;
@property(nonatomic) __weak UILabel *subtaskCountLabel; // @synthesize subtaskCountLabel;
@property(nonatomic) __weak UIButton *infoButton; // @synthesize infoButton;
@property(nonatomic) __weak UIImageView *flaggedImageView; // @synthesize flaggedImageView;

@end

