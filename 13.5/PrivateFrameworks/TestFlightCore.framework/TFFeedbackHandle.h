//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TestFlightCore/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSString, SBSRemoteAlertHandle, TFFeedbackHandleConfiguration;

@interface TFFeedbackHandle : NSObject <SBSRemoteAlertHandleObserver>
{
    TFFeedbackHandleConfiguration *_configuration;
    SBSRemoteAlertHandle *_internalHandle;
    NSString *_logKey;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) SBSRemoteAlertHandle *internalHandle; // @synthesize internalHandle=_internalHandle;
@property(readonly, nonatomic) TFFeedbackHandleConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)invalidateFeedbackViewController;
- (void)presentFeedbackViewController;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

