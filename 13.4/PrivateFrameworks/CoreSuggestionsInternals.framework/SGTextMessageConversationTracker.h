//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLRUCache;

@interface SGTextMessageConversationTracker : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    _PASLRUCache *_conversations;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)clear;
- (id)addItem:(id)arg1;
- (id)addMessage:(id)arg1 withDetectedData:(id)arg2;
- (id)addMessage:(id)arg1;
- (id)conversationForIdentifier:(id)arg1;
- (id)init;

@end

