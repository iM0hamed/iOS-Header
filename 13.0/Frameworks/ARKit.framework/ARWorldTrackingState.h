//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>
#import <ARKit/NSSecureCoding-Protocol.h>

@interface ARWorldTrackingState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _majorRelocalization;
    _Bool _minorRelocalization;
    _Bool _poseGraphUpdated;
    long long _state;
    long long _reason;
    long long _vioTrackingState;
    double _lastMajorRelocalizationTimestamp;
    double _originTimestamp;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double originTimestamp; // @synthesize originTimestamp=_originTimestamp;
@property(nonatomic) double lastMajorRelocalizationTimestamp; // @synthesize lastMajorRelocalizationTimestamp=_lastMajorRelocalizationTimestamp;
@property(nonatomic) long long vioTrackingState; // @synthesize vioTrackingState=_vioTrackingState;
@property(nonatomic) _Bool poseGraphUpdated; // @synthesize poseGraphUpdated=_poseGraphUpdated;
@property(nonatomic) _Bool minorRelocalization; // @synthesize minorRelocalization=_minorRelocalization;
@property(nonatomic) _Bool majorRelocalization; // @synthesize majorRelocalization=_majorRelocalization;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(nonatomic) long long state; // @synthesize state=_state;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

