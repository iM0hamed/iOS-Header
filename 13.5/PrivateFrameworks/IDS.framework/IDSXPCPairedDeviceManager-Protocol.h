//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@protocol IDSXPCPairedDeviceManager <NSObject>
- (void)getPairedDeviceInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getLocalDeviceInfoWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
@end

