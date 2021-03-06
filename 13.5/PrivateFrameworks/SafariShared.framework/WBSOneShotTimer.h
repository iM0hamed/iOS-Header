//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface WBSOneShotTimer : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_fireDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool isValid;
- (void)invalidate;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

