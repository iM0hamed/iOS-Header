//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface VVMSharedNetworkObserver : NSObject
{
    struct os_unfair_lock_s fLock;
    NSObject<OS_dispatch_queue> *fQueue;
    _Bool fIsObservingNetwork;
    NSMapTable *fDelegates;
    _Bool fIsNetworkReachable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isNetworkReachable;
- (void)networkReachabilityChanged:(id)arg1;
- (void)stopObservingNetworkSync;
- (void)startObservingNetworkSync;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

@end

