//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMDCKSyncState;

@protocol IMDCKSyncStateDelegate <NSObject>

@optional
- (void)syncStateDidUpdate:(IMDCKSyncState *)arg1;
- (void)syncStateWillUpdate:(IMDCKSyncState *)arg1;
@end

