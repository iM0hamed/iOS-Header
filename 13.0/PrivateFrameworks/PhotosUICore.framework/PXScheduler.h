//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXScheduler : NSObject
{
    NSMutableArray *_pendingBlocks;
    _Bool _hasPendingPerformInDefaultRunLoopMode;
    _Bool _isPerformingPendingBlocks;
}

+ (id)sharedScheduler;
- (void).cxx_destruct;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)dispatchOnMainThreadWhenNotScrollingAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchOnMainThreadWhenNotScrolling:(CDUnknownBlockType)arg1;
- (void)_performPendingBlocks;
- (void)_performPendingBlocksIfNeeded;
- (void)_enteredDefaultRunLoopMode;
- (void)scrollViewWillLayoutSubviews;
- (void)scrollViewDidScroll;
- (void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchInMainTransaction:(CDUnknownBlockType)arg1;
- (id)init;

@end

