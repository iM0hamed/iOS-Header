//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SSAuthorizationMetricsController : NSObject
{
}

+ (id)_mtTopicForBuyParams:(id)arg1;
+ (id)_clientIDForAccount:(id)arg1 orUserID:(id)arg2;
+ (id)_clientIdForMetrics;
+ (id)_dialogEventForPaymentSheetPresentationErrorWithBuyParams:(id)arg1 error:(id)arg2;
+ (id)_dialogEventForPasswordAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4;
+ (id)_dialogEventForBiometricOptInWithResult:(_Bool)arg1 message:(id)arg2 topicName:(id)arg3 userAgent:(id)arg4 error:(id)arg5;
+ (id)_dialogEventForBiometricAuthorizationWithDialogId:(id)arg1 buyParams:(id)arg2 matchState:(long long)arg3 topicName:(id)arg4 userAgent:(id)arg5;
+ (id)userActionDictionaryForUserAction:(long long)arg1 didBiometricsLockout:(_Bool)arg2;
+ (id)userActionDictionaryForBiometricMatchState:(unsigned long long)arg1 didBiometricsLockout:(_Bool)arg2;
+ (id)dialogIdForMetricsDictionary:(id)arg1;
+ (id)authorizationDialogEventForParameters:(id)arg1;

@end

