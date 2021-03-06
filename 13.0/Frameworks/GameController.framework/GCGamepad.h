//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad, GCMotion;

@interface GCGamepad : NSObject
{
    _Bool _dpadFlippedY;
    GCMotion *_motion;
    GCControllerButtonInput *_button0;
    GCControllerButtonInput *_button1;
    GCControllerButtonInput *_button2;
    GCControllerButtonInput *_button3;
    GCController *_controller;
    CDUnknownBlockType _valueChangedHandler;
    GCControllerDirectionPad *_dpad;
    GCControllerButtonInput *_leftShoulder;
    GCControllerButtonInput *_rightShoulder;
    GCControllerButtonInput *_buttonMenu;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) GCControllerButtonInput *buttonMenu; // @synthesize buttonMenu=_buttonMenu;
@property(retain, nonatomic) GCControllerButtonInput *rightShoulder; // @synthesize rightShoulder=_rightShoulder;
@property(retain, nonatomic) GCControllerButtonInput *leftShoulder; // @synthesize leftShoulder=_leftShoulder;
@property(retain, nonatomic) GCControllerDirectionPad *dpad; // @synthesize dpad=_dpad;
@property(copy, nonatomic) CDUnknownBlockType valueChangedHandler; // @synthesize valueChangedHandler=_valueChangedHandler;
@property(nonatomic) __weak GCController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) GCControllerButtonInput *buttonY; // @synthesize buttonY=_button3;
@property(retain, nonatomic) GCControllerButtonInput *buttonX; // @synthesize buttonX=_button2;
@property(retain, nonatomic) GCControllerButtonInput *buttonB; // @synthesize buttonB=_button1;
@property(retain, nonatomic) GCControllerButtonInput *buttonA; // @synthesize buttonA=_button0;
- (void)set_motion:(id)arg1;
- (id)_motion;
- (void).cxx_destruct;
- (_Bool)isBluetoothAndUSBMirrored;
- (id)productCategory;
- (void)setAllowsRotation:(_Bool)arg1;
- (_Bool)allowsRotation;
- (void)setReportsAbsoluteDpadValues:(_Bool)arg1;
- (_Bool)reportsAbsoluteDpadValues;
- (void)setButton:(id)arg1 pressed:(_Bool)arg2;
- (void)setButton:(id)arg1 value:(double)arg2;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3;
- (void)setPlayerIndex:(long long)arg1;
- (id)saveSnapshot;
- (void)handleEvent:(struct __IOHIDEvent *)arg1;
- (id)name;
- (id)button3;
- (id)button2;
- (id)button1;
- (id)button0;
- (void)setControllerForElements;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(_Bool)arg2;
- (id)initWithController:(id)arg1;
- (id)init;

@end

