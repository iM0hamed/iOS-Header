//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameController/GCExtendedGamepad.h>

#import <GameController/_GCACHomeButtonDelegate-Protocol.h>

@class NSString, _GCACHomeButton;

@interface _GCMFiExtendedGamepadControllerProfile : GCExtendedGamepad <_GCACHomeButtonDelegate>
{
    _GCACHomeButton *_acHome;
}

- (void).cxx_destruct;
- (id)menuButton;
- (void)toggleSuspendResume;
- (void)setPlayerIndex:(long long)arg1;
- (id)name;
- (id)initWithController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)determineControllerCapabilities:(id)arg1 initInfo:(struct GCExtendedGamepadInitWithControllerInitInfo *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

