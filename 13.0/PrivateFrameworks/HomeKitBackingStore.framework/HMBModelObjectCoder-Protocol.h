//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/NSObject-Protocol.h>

@class NSData;

@protocol HMBModelObjectCoder <NSObject>
+ (id)hmbDecodeData:(NSData *)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
- (NSData *)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
@end

