//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFOfflineCacheReplayContextTransformation.h>

@class MFOfflineTransferFailureSnapshot, NSString;

@interface _MFTransferFailureReplayContextTransformation : MFOfflineCacheReplayContextTransformation
{
    NSString *_temporaryID;
    MFOfflineTransferFailureSnapshot *_snapshot;
}

+ (_Bool)supportsSecureCoding;
- (void)applyToReplayContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemporaryID:(id)arg1 transferFailureSnapshot:(id)arg2;

@end

