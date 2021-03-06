//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FRSubscriptionPlacardViewDelegate-Protocol.h"
#import "SXDocumentSectionItemProvider-Protocol.h"

@class FRSubscriptionHeaderContext, FRSubscriptionPlacardView, NSString;
@protocol FRSubscriptionHeaderViewControllerDelegate;

@interface FRSubscriptionHeaderViewController : UIViewController <FRSubscriptionPlacardViewDelegate, SXDocumentSectionItemProvider>
{
    _Bool _showingPrefetchedPurchase;
    id <FRSubscriptionHeaderViewControllerDelegate> _delegate;
    FRSubscriptionHeaderContext *_context;
    double _contentTopOffset;
    NSString *_placardCustomizedText;
    FRSubscriptionPlacardView *_subscriptionPlacardView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FRSubscriptionPlacardView *subscriptionPlacardView; // @synthesize subscriptionPlacardView=_subscriptionPlacardView;
@property(copy, nonatomic) NSString *placardCustomizedText; // @synthesize placardCustomizedText=_placardCustomizedText;
@property(nonatomic) _Bool showingPrefetchedPurchase; // @synthesize showingPrefetchedPurchase=_showingPrefetchedPurchase;
@property(nonatomic) double contentTopOffset; // @synthesize contentTopOffset=_contentTopOffset;
@property(retain, nonatomic) FRSubscriptionHeaderContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <FRSubscriptionHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)subscriptionPlacardViewDidTapLearnMore:(id)arg1;
- (void)subscriptionPlacardViewDidTapAlreadySubscriber:(id)arg1;
- (void)subscriptionPlacardViewDidTapGetSubscription:(id)arg1;
- (void)addSubscriptionNativeAdWithBannerView:(id)arg1;
- (void)layoutColors;
- (void)layoutSubviewsForSize:(struct CGSize)arg1;
- (id)sectionItemViewController;
- (double)sectionItemHeightForSize:(struct CGSize)arg1 traitCollection:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)setSubscribeButtonTitle:(id)arg1 subtitle:(id)arg2;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

