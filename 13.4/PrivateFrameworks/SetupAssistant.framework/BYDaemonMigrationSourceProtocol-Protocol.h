//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SetupAssistant/NSObject-Protocol.h>

@class RPFileTransferSession;

@protocol BYDaemonMigrationSourceProtocol <NSObject>
- (void)setFileTransferTemplate:(RPFileTransferSession *)arg1;
- (void)launchSetupForMigration;
- (void)registerAsUserInterfaceHost:(void (^)(NSString *))arg1;
- (void)cancel;
@end

