//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBInjectVelocitySwitcherModifierAction : SBSwitcherModifierAction
{
    SBAppLayout *_appLayout;
    struct CGPoint _velocity;
}

@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
@property(readonly, nonatomic) struct CGPoint velocity; // @synthesize velocity=_velocity;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithVelocity:(struct CGPoint)arg1 appLayout:(id)arg2;
- (long long)type;

@end

