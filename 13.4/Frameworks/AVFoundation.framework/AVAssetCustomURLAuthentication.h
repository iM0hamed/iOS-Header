//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLAuthentication : NSObject
{
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (int)sendAuthResponse:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 disposition:(long long)arg3 credential:(id)arg4 authHandler:(struct OpaqueFigCustomURLHandler *)arg5;
+ (id)copyKeychainCredentialForUrl:(id)arg1;
- (int)_handleAuthChallenge:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(char *)arg3;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;

@end

