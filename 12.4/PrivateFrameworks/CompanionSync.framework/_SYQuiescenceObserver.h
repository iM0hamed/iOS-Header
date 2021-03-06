//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSPointerArray;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _SYQuiescenceObserver : NSObject
{
    NSPointerArray *_quiescenceQueues;
    NSObject<OS_dispatch_group> *_allocationGroup;
    NSMutableSet *_allocations;
}

+ (id)sharedInstance;
+ (void)setQuiescenceEnabled:(_Bool)arg1;
+ (_Bool)isQuiescenceEnabled;
- (void).cxx_destruct;
- (void)notifyOnDeallocationComplete:(CDUnknownBlockType)arg1;
- (_Bool)waitForDeallocationCompleteWithTimeout:(double)arg1;
- (void)decrementAllocationCount:(id)arg1;
- (void)incrementAllocationCount:(id)arg1;
- (void)notifyOnQuiescence:(CDUnknownBlockType)arg1;
- (_Bool)waitForQuiescenceWithTimeout:(double)arg1;
- (void)registerQueue:(id)arg1;
- (id)init;

@end

