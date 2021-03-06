//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDBaseClient.h>

#import <AppStoreDaemon/NSXPCListenerDelegate-Protocol.h>

@class ASDManagedApplicationRequestOptions, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ASDManagedApplicationRequest : ASDBaseClient <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDManagedApplicationRequestOptions *_options;
}

- (void).cxx_destruct;
- (void)_setupConnection;
- (void)_sendRequestCompletionWithOptions:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)sendRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

