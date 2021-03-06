//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_socks5_server-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_nw_array, OS_nw_listener, OS_nw_parameters;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_socks5_server : NSObject <OS_nw_socks5_server>
{
    unsigned long long ss_id;
    NWConcrete_nw_socks5_server *ss_internally_retained_object;
    struct os_unfair_lock_s ss_lock;
    NSObject<OS_dispatch_queue> *ss_queue;
    NSObject<OS_nw_parameters> *ss_parameters;
    NSObject<OS_dispatch_queue> *ss_client_queue;
    CDUnknownBlockType ss_error;
    NSObject<OS_nw_listener> *ss_listener;
    NSObject<OS_nw_array> *ss_socks5_connections;
    unsigned int ss_shoes:1;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithParameters:(id)arg1 clientQueue:(id)arg2;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

