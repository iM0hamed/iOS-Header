//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface SBAccountStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAppleAccount;
}

- (void).cxx_destruct;
@property(retain) ACAccount *primaryAppleAccount; // @synthesize primaryAppleAccount=_primaryAppleAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_queue_updatePrimaryAppleAccountAndNotify:(_Bool)arg1;
- (void)_updatePrimaryAppleAccount;
- (id)init;

@end

