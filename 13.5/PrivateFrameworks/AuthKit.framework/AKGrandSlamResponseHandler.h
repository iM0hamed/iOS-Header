//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject
{
    AKAppleIDAuthenticationContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *context; // @synthesize context=_context;
- (void)_revokeDeviceTrust;
- (void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1;
- (void)handleResponseError:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

