//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface DispatchGroupWrapper : NSObject
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
- (void)notify:(CDUnknownBlockType)arg1;
- (void)executeWithDispatchGroup:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

