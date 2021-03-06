//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTravelAdvisoryAuthority-Protocol.h>

@class NSString;

@interface CALNDefaultTravelAdvisoryAuthority : NSObject <CALNTravelAdvisoryAuthority>
{
}

+ (id)sharedInstance;
- (_Bool)travelStateIndicatesTravelingTowardDestination:(long long)arg1;
- (_Bool)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)arg1;
@property(readonly, nonatomic) double minimumAllowableTravelTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

