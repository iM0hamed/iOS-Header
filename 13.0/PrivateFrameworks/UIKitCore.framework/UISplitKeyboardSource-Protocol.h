//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInputViewSetPlacementOwner-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardViewSource-Protocol.h>

@class UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIView, UIViewController;
@protocol UIInputViewSetPlacementApplicator;

@protocol UISplitKeyboardSource <_UIRemoteKeyboardViewSource, UIInputViewSetPlacementOwner>
@property(readonly, retain, nonatomic) id <UIInputViewSetPlacementApplicator> applicator;
@property(readonly, retain, nonatomic) UIInputViewSetPlacement *placement;
@property(readonly, retain, nonatomic) UIViewController *_inputViewController;
@property(readonly, nonatomic) struct CGPoint positionConstraintConstant;
@property(readonly, nonatomic) _Bool isChangingPlacement;
@property(readonly, retain, nonatomic) UIView *view;
- (void)finishSplitTransition;
- (void)prepareForSplitTransition;
- (UIInputViewSetNotificationInfo *)constructNotificationInfoForScrollWithMode:(unsigned long long)arg1;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1;
@end

