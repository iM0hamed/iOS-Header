//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _SPBucketSet : NSObject
{
    struct __CFDictionary *_members;
    NSObject<OS_dispatch_queue> *_queue;
    long long _count;
}

- (void).cxx_destruct;
@property long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)decay:(long long)arg1;
- (void)addValue:(long long)arg1 forKey:(id)arg2;
- (void)removeValueForKey:(id)arg1;
- (long long)valueForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

