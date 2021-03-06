//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_UIKeyboardArbitrationClient-Protocol.h"

@class NSXPCConnection;

@interface DRKeyboardArbiter : NSObject <_UIKeyboardArbitrationClient>
{
    NSXPCConnection *_connection;
    CDUnknownBlockType _errorHandler;
}

@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
- (void).cxx_destruct;
- (void)queue_setKeyboardDisabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queue_getDebugInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_applicationLostFocusWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_keyboardSuppressed:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)queue_keyboardChangedWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)setKeyboardTotalDisable:(_Bool)arg1 withFence:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)proxy;
- (void)disconnect;
- (void)connect;

@end

