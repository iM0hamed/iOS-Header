//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADBannerView, NSError, NSString, SXAdController;

@protocol SXAdControllerDelegate <NSObject>

@optional
- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 didUnloadBannerView:(ADBannerView *)arg3 withError:(NSError *)arg4;
- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 didLoadBannerView:(ADBannerView *)arg3;
- (void)adController:(SXAdController *)arg1 componentWithIdentifier:(NSString *)arg2 failedToLoadBannerView:(ADBannerView *)arg3 error:(NSError *)arg4;
@end

