//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TRSetupHandlerDelegate;

@interface TRSetupHandler : NSObject
{
    id <TRSetupHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TRSetupHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleCompletionRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleActivationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleNetworkRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

