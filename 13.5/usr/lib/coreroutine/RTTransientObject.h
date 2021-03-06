//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSRecursiveLock, RTTimer, RTTimerManager;
@protocol RTTransientObjectProtocol;

@interface RTTransientObject : NSProxy
{
    id <RTTransientObjectProtocol> _transientObjectDelegate;
    CDUnknownBlockType _backingObjectCreationBlock;
    id _backingObject;
    double _backingObjectExpirationTimeInterval;
    RTTimer *_backingObjectExpirationTimer;
    RTTimerManager *_timerManager;
    NSRecursiveLock *_lock;
    double _lastForwardedMessageTimeInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double lastForwardedMessageTimeInterval; // @synthesize lastForwardedMessageTimeInterval=_lastForwardedMessageTimeInterval;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) RTTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(retain, nonatomic) RTTimer *backingObjectExpirationTimer; // @synthesize backingObjectExpirationTimer=_backingObjectExpirationTimer;
@property(nonatomic) double backingObjectExpirationTimeInterval; // @synthesize backingObjectExpirationTimeInterval=_backingObjectExpirationTimeInterval;
@property(retain, nonatomic) id backingObject; // @synthesize backingObject=_backingObject;
@property(copy, nonatomic) CDUnknownBlockType backingObjectCreationBlock; // @synthesize backingObjectCreationBlock=_backingObjectCreationBlock;
@property(nonatomic) __weak id <RTTransientObjectProtocol> transientObjectDelegate; // @synthesize transientObjectDelegate=_transientObjectDelegate;
- (void)__invalidateBackingObject;
- (void)__handleBackingObjectTimerExpired;
- (void)__createTimerAssociatedWithBackingObject;
- (id)__createBackingObject;
- (void)touch;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithCreationBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2 timerManager:(id)arg3;
- (id)initWithCreationBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2;

@end

