//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iCloudQuotaUI/AAUIServerHook-Protocol.h>
#import <iCloudQuotaUI/PSCloudStorageOffersManagerDelegate-Protocol.h>

@class AAUIServerHookResponse, ICQOffer, NSDictionary, NSString, NSURLSession, PSCloudStorageOffersManager;
@protocol AAUIServerHookDelegate, ICQServerHookDelegate;

@interface ICQUpgradeStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, AAUIServerHook>
{
    ICQOffer *_offer;
    NSURLSession *_session;
    PSCloudStorageOffersManager *_cloudStorageOffersManager;
    CDUnknownBlockType _completionHandler;
    id <ICQServerHookDelegate> _flowDelegate;
    NSDictionary *_clientInfo;
    long long _statusCode;
    id <AAUIServerHookDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AAUIServerHookDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_enableCloudPhotoLibraryWithCompletion:(CDUnknownBlockType)arg1;
- (void)manager:(id)arg1 didCompleteWithError:(id)arg2;
- (void)managerDidCancel:(id)arg1;
- (void)manager:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)manager:(id)arg1 willPresentViewController:(id)arg2;
- (id)upgradeStorageQueryKeySet;
- (id)upgradeStorageKeyBag;
- (id)upgradeStorageQueryDictionary;
- (id)storageContextJSONString;
- (id)upgradeStorageContextHeaderDictionary;
- (id)dummyRequestWithAccount:(id)arg1 token:(id)arg2;
- (id)parseParameters:(id)arg1;
- (void)beginPurchaseFlow;
@property(retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldMatchModel:(id)arg1;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)shouldMatchElement:(id)arg1;
- (id)initWithOffer:(id)arg1 flowDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

