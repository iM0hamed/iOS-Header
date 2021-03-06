//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FTRegConnectionHandler, IMServiceImpl, NSArray;

@interface FTRegAccountMonitor : NSObject
{
    long long _serviceType;
    IMServiceImpl *_service;
    NSArray *_accounts;
    FTRegConnectionHandler *_connectionHandler;
    CDStruct_34e8bc21 _monitorFlags;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSArray *activeAccounts; // @synthesize activeAccounts=_accounts;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) IMServiceImpl *service; // @synthesize service=_service;
- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleAccountNotification:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (_Bool)_shouldHandleAccountNofication:(id)arg1;
- (void)_updateAccountState:(_Bool)arg1;
- (id)_activeAccounts;
- (id)logName;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;

@end

