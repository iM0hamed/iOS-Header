//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCPurchase, NSString;

@interface FRPrefetchedPurchase : NSObject
{
    unsigned long long _prefetchPurchaseStatus;
    FCPurchase *_purchase;
    NSString *_title;
    NSString *_subtitle;
    NSString *_tagID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) FCPurchase *purchase; // @synthesize purchase=_purchase;
@property(nonatomic) unsigned long long prefetchPurchaseStatus; // @synthesize prefetchPurchaseStatus=_prefetchPurchaseStatus;

@end

