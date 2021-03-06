//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CSActivationXPCClient : NSObject
{
    NSObject<OS_xpc_object> *_xpcConnection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)_decodeError:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyActivationEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)dealloc;
- (void)connect;
- (id)init;

@end

