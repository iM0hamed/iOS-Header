//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@protocol NetworkStorageXPCProtocol
- (void)flushWithCompletionHandler:(void (^)(void))arg1;
- (void)totalBytesWrittenToDiskWithCompletionHandler:(void (^)(unsigned long long))arg1;
- (void)performSchemaCheckAndUpdate;
- (void)setMinSizeForVMCachedResource:(long long)arg1;
- (void)currentDiskUsageWithCompletionHandler:(void (^)(long long))arg1;
- (void)setMaxSize:(long long)arg1;
- (void)copyAllPartitionNamesWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)copyAllHostNamesForOptionalPartition:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)deleteAllHostNames:(NSArray *)arg1 forOptionalPartition:(NSString *)arg2;
- (void)deleteResponsesSinceDate:(NSDate *)arg1;
- (void)deleteAllResponses;
- (void)deleteResponseForRequestWithKey:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)addCachedResponseWithDictionary:(NSDictionary *)arg1 key:(NSString *)arg2;
- (void)createStorageTaskManagerForPath:(NSString *)arg1 maxSize:(long long)arg2 extension:(NSData *)arg3;
@end

