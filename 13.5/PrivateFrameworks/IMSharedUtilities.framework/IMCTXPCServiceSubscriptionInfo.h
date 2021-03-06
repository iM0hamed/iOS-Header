//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionInfo, NSArray;

@interface IMCTXPCServiceSubscriptionInfo : NSObject
{
    CTXPCServiceSubscriptionInfo *_subscriptionInfo;
    NSArray *_phoneNumbersOfActiveSubscriptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *phoneNumbersOfActiveSubscriptions; // @synthesize phoneNumbersOfActiveSubscriptions=_phoneNumbersOfActiveSubscriptions;
@property(retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
- (id)__im_contactPreferredSubscriptionContextForChatHandleIDs:(id)arg1;
- (id)_senderIdentityManager;
- (id)__im_subscriptionContextForSenderIdentity:(id)arg1;
- (id)__im_subscriptionContextOrDefaultForForSimID:(id)arg1 phoneNumber:(id)arg2;
- (id)__im_subscriptionContextForForSimID:(id)arg1 phoneNumber:(id)arg2;
- (id)__im_subscriptionContextForPhoneNumberOrDefault:(id)arg1;
- (id)__im_subscriptionContextForForSimID:(id)arg1;
- (id)__im_subscriptionContextForPhoneNumber:(id)arg1;
- (id)__im_subscriptionContextOrDefaultForForSlotID:(long long)arg1;
- (id)__im_subscriptionContextForForSlotID:(long long)arg1;
- (id)__imSIMIDForSubscriptionSlot:(long long)arg1;
- (long long)__imSlotIDSForPhoneNumber:(id)arg1;
- (id)__im_labelForPhoneNumber:(id)arg1 simID:(id)arg2;
- (id)__im_phoneNumberForSlotIDOrDefault:(long long)arg1;
- (id)__im_phoneNumberForSlotID:(long long)arg1;
- (id)preferredOrDefaultSubscriptionContext;
- (id)__im_switchSubscriptionContextFromPhoneNumber:(id)arg1 simID:(id)arg2;
- (id)__im_switchSubscriptionContextFromSubscriptionContext:(id)arg1;
- (id)__im_preferredSubscriptionContext;
- (_Bool)__im_hasMultipleSubscriptions;
- (_Bool)__im_onlyHasActiveSlots;
- (_Bool)__im_containsPhoneNumber:(id)arg1;
- (id)subscriptions;
- (id)allSubscriptions;
- (id)__im_subscriptionsWithMMSSupport;
- (id)initWithSubscriptionInfo:(id)arg1;
- (id)description;

@end

