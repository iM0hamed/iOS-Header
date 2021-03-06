//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSCloudCallingURLController.h>

#import <TelephonyPreferences/TUCallCapabilitiesDelegatePrivate-Protocol.h>

@class NSString;

@interface TPSCloudCallingThumperProvisioningURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>
{
}

- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (id)capabilityProvisioningPostData;
- (_Bool)isCapabilityProvisioningURLInvalid;
- (id)capabilityProvisioningURL;
- (int)capabilityProvisioningStatus;
- (_Bool)isCapabilityEnabled;
@property(readonly, nonatomic, getter=isThumperProvisioningInProcess) _Bool thumperProvisioningInProcess;
@property(readonly, nonatomic) _Bool shouldShowUpgradeToThumperButton;
- (void)enableCapability;
- (void)webSheetCompletion;
- (_Bool)shouldShowEmergencyAddress;
- (id)requestTimeoutController;
- (id)initWithSubscriptionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

