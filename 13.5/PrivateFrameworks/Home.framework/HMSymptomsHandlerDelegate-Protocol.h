//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMSymptomsHandler, NSSet;

@protocol HMSymptomsHandlerDelegate <NSObject>

@optional
- (void)fixSessionAvailabilityDidUpdateForSymptomsHandler:(HMSymptomsHandler *)arg1;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateSymptoms:(NSSet *)arg2;
@end

