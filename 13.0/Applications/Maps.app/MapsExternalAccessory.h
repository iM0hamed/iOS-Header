//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory, MapsExternalAccessoryState;

__attribute__((visibility("hidden")))
@interface MapsExternalAccessory : NSObject
{
    EAAccessory *_accessory;
    MapsExternalAccessoryState *_currentState;
    MapsExternalAccessoryState *_lastState;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) MapsExternalAccessoryState *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) MapsExternalAccessoryState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (void)_disconnectFromVehicle;
- (void)_postNotificationsIfNeeded;
- (_Bool)_isCurrentStateEqualLastState;
- (void)_updateFromNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
@property(readonly, nonatomic) int primaryEngineType;
@property(readonly, nonatomic) _Bool isHybridEngineType;
@property(readonly, nonatomic) _Bool needsFuel;
@property(readonly, nonatomic) _Bool hasEngineType;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_accessoryDidUpdate:(id)arg1;
- (void)_accessoryDidUpdateVehicle:(id)arg1;
- (void)_accessoryDidConnect:(id)arg1;
- (void)_handleFake:(id)arg1;
- (void)_stopListenForDebugTestNotifications;
- (void)_startListenForDebugTestNotifications;
- (void)sendDestinationInformation:(id)arg1 identifier:(id)arg2;
- (void)dealloc;
- (id)init;

@end

