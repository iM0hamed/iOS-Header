//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView, _TtC5Files11DOCSortView, _TtC5Files30DOCDisplayModeSegmentedControl;
@protocol _TtP5Files29DOCDisplayOptionsViewDelegate_;

@interface _TtC5Files21DOCDisplayOptionsView : UIView
{
    // Error parsing type: , name: displayOptionsViewOwner
    // Error parsing type: , name: contentView
    // Error parsing type: , name: stackView
    // Error parsing type: , name: configuration
    // Error parsing type: , name: visibilityState
    // Error parsing type: , name: visibilityStateBeforeInteraction
    // Error parsing type: , name: progressBeforeInteraction
    // Error parsing type: , name: currentScrollView
    // Error parsing type: , name: allowedDisplayModes
    // Error parsing type: , name: useEllipsisButton
    // Error parsing type: , name: sourceDisplayModes
    // Error parsing type: , name: displayOptionsDelegate
    // Error parsing type: , name: hideNewFolderButton
    // Error parsing type: , name: hideEllipsisButton
    // Error parsing type: , name: navigationController
    // Error parsing type: , name: scrollViewObservations
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)attachToNavigationController:(id)arg1;
- (id)accessibilityStackView;
- (void)updateLayout:(_Bool)arg1;
- (void)revealWithAnimated:(_Bool)arg1;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)moreActionsButtonWasPressed;
- (void)newFolderButtonWasPressed;
- (id)initWithCoder:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)initWithConfiguration:(id)arg1;
@property(nonatomic) __weak id <_TtP5Files29DOCDisplayOptionsViewDelegate_> displayOptionsDelegate; // @synthesize displayOptionsDelegate;
@property(nonatomic, readonly) _TtC5Files30DOCDisplayModeSegmentedControl *displayModeControl;
@property(nonatomic, readonly) _TtC5Files11DOCSortView *sortView;
@property(nonatomic, readonly) UIVisualEffectView *contentView; // @synthesize contentView;

@end

