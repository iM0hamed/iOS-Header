//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MXAssetStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableDictionary *_storage;
    NSMutableSet *_loadingKeys;
    NSMutableDictionary *_fetchBlocks;
}

- (void).cxx_destruct;
- (void)fetchAssetForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAsset:(id)arg1 forKey:(id)arg2;
- (void)loadAssetForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

