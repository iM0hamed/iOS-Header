//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQOffer, ICQUpgradeFlowOptions;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQRemoteUpgradeFlowManager : NSObject
{
    ICQOffer *_offer;
    ICQUpgradeFlowOptions *_flowOptions;
    id <ICQUpgradeFlowManagerDelegate> _delegate;
}

+ (void)renewCredentialsWithCompletion:(CDUnknownBlockType)arg1;
+ (void)commonHeadersForRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ICQUpgradeFlowManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) ICQUpgradeFlowOptions *flowOptions; // @synthesize flowOptions=_flowOptions;
@property(retain, nonatomic) ICQOffer *offer; // @synthesize offer=_offer;
- (void)beginRemoteFlow;

@end

