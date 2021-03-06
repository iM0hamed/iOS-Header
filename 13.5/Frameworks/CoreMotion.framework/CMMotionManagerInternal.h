//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

@interface CMMotionManagerInternal : NSObject
{
    double fAccelerometerUpdateInterval;
    double fGyroUpdateInterval;
    double fDeviceMotionUpdateInterval;
    double fMagnetometerUpdateInterval;
    _Bool fShowsDeviceMovementDisplay;
    struct unique_ptr<CLDeviceMotionLiteService, std::__1::default_delete<CLDeviceMotionLiteService>> fDeviceMotionLiteService;
    NSOperationQueue *_fDeviceMotionLiteClientQueue;
    CDUnknownBlockType _fDeviceMotionLiteFusedHandler;
    NSString *_fDeviceMotionLitePhysicalDeviceID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *fDeviceMotionLitePhysicalDeviceID; // @synthesize fDeviceMotionLitePhysicalDeviceID=_fDeviceMotionLitePhysicalDeviceID;
@property(copy, nonatomic) CDUnknownBlockType fDeviceMotionLiteFusedHandler; // @synthesize fDeviceMotionLiteFusedHandler=_fDeviceMotionLiteFusedHandler;
@property(retain, nonatomic) NSOperationQueue *fDeviceMotionLiteClientQueue; // @synthesize fDeviceMotionLiteClientQueue=_fDeviceMotionLiteClientQueue;
- (void)dealloc;
- (id)init;

@end

