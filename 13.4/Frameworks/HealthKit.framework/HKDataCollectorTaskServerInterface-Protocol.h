//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKDevice, NSArray, NSDictionary, NSUUID;

@protocol HKDataCollectorTaskServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_synchronizeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_registerWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_insertDatums:(NSArray *)arg1 device:(HKDevice *)arg2 metadata:(NSDictionary *)arg3 batchUUID:(NSUUID *)arg4 registrationUUID:(NSUUID *)arg5 completion:(void (^)(_Bool, NSError *))arg6;
@end

