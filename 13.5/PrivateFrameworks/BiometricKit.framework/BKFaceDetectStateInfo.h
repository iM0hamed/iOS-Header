//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject
{
    _Bool _faceDetected;
    _Bool _tooCloseToCamera;
    _Bool _tooFarFromCamera;
    _Bool _multipleFaces;
    _Bool _flare;
    _Bool _occlusion;
    _Bool _partiallyOutOfView;
    NSNumber *_pitch;
    NSNumber *_yaw;
    NSNumber *_roll;
    unsigned long long _orientation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool partiallyOutOfView; // @synthesize partiallyOutOfView=_partiallyOutOfView;
@property(readonly, nonatomic) _Bool occlusion; // @synthesize occlusion=_occlusion;
@property(readonly, nonatomic) _Bool flare; // @synthesize flare=_flare;
@property(readonly, nonatomic) _Bool multipleFaces; // @synthesize multipleFaces=_multipleFaces;
@property(readonly, nonatomic) _Bool tooFarFromCamera; // @synthesize tooFarFromCamera=_tooFarFromCamera;
@property(readonly, nonatomic) _Bool tooCloseToCamera; // @synthesize tooCloseToCamera=_tooCloseToCamera;
@property(readonly, nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) NSNumber *roll; // @synthesize roll=_roll;
@property(readonly, nonatomic) NSNumber *yaw; // @synthesize yaw=_yaw;
@property(readonly, nonatomic) NSNumber *pitch; // @synthesize pitch=_pitch;
@property(readonly, nonatomic) _Bool faceDetected; // @synthesize faceDetected=_faceDetected;

@end

