//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBBatteryWidgetVisibilityController : NSObject
{
}

+ (id)sharedInstance;
- (void)_makeVisible;
- (_Bool)_isVisible;
- (_Bool)_isAlwaysVisible;
- (void)_setVisibleIfNecessary:(_Bool)arg1;
- (_Bool)_containsExternalBattery;
- (void)_connectedDevicesDidChange;
- (id)init;

@end

