//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUMobileDevice, CUMobileDeviceDiscovery;

__attribute__((visibility("hidden")))
@interface CUMobileDeviceMonitorContext : NSObject
{
    CUMobileDevice *_device;
    CUMobileDeviceDiscovery *_discovery;
}

@property(retain, nonatomic) CUMobileDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) CUMobileDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;

@end

