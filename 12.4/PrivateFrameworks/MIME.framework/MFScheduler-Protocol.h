//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/NSObject-Protocol.h>

@protocol MFCancelable;

@protocol MFScheduler <NSObject>
- (id <MFCancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <MFCancelable>)performCancelableBlock:(void (^)(MFCancelationToken *))arg1;
- (void)performSyncBlock:(void (^)(void))arg1;
- (void)performBlock:(void (^)(void))arg1;
@end

