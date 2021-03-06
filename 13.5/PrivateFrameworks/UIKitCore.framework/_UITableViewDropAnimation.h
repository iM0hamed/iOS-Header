//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragAnimating-Protocol.h>

@class NSMutableArray, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimation : NSObject <UIDragAnimating>
{
    _Bool _didBeginAnimation;
    UIDragItem *_dragItem;
    NSMutableArray *_animationsBlocks;
    NSMutableArray *_completionBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) NSMutableArray *animationsBlocks; // @synthesize animationsBlocks=_animationsBlocks;
@property(nonatomic, getter=_didBeginAnimation, setter=_setDidBeginAnimation:) _Bool didBeginAnimation; // @synthesize didBeginAnimation=_didBeginAnimation;
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
- (void)_executeCompletionBlocks;
- (void)_addClientBlocksToAnimator:(id)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (id)initWithDragItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

