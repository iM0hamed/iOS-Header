//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface FBProfileManager : NSObject
{
    _Bool _started;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSSet *_workQueue_managedApplicationBundleIDs;
    NSMutableDictionary *_workQueue_profilesBySignerIdentity;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_managedAppsChangedNotification:(id)arg1;
- (void)_workQueue_reloadManagedApplicationBundleIDs;
- (void)_workQueue_reloadProfiles;
- (void)_reloadProfiles;
- (id)profilesForSignerIdentity:(id)arg1;
- (_Bool)isManaged:(id)arg1;
@property(readonly, nonatomic, getter=isStarted) _Bool started; // @dynamic started;
- (void)startService;
- (void)dealloc;
- (id)init;

@end

