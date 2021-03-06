//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBHardwareButtonServiceObserver-Protocol.h>

@class NSMutableArray, NSString, SBHomeGestureParticipant;
@protocol BSInvalidatable;

@interface SBHomeGestureArbiter : NSObject <BSDescriptionProviding, SBHardwareButtonServiceObserver>
{
    id <BSInvalidatable> _stateCaptureHandle;
    NSMutableArray *_participants;
    SBHomeGestureParticipant *_owningParticipant;
    SBHomeGestureParticipant *_hardwareButtonServiceParticipant;
    id <BSInvalidatable> _hardwareButtonObserverAssertion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BSInvalidatable> hardwareButtonObserverAssertion; // @synthesize hardwareButtonObserverAssertion=_hardwareButtonObserverAssertion;
@property(retain, nonatomic) SBHomeGestureParticipant *hardwareButtonServiceParticipant; // @synthesize hardwareButtonServiceParticipant=_hardwareButtonServiceParticipant;
@property(retain, nonatomic) SBHomeGestureParticipant *owningParticipant; // @synthesize owningParticipant=_owningParticipant;
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) id <BSInvalidatable> stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)_updateHardwareButtonServiceParticipant;
- (void)buttonService:(id)arg1 buttonKind:(long long)arg2 eventsConsumedDidChange:(unsigned long long)arg3;
- (void)_updateOwningParticipant;
- (void)_unregisterParticipant:(id)arg1;
- (void)_registerParticipant:(id)arg1;
- (id)participantWithIdentifier:(long long)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

