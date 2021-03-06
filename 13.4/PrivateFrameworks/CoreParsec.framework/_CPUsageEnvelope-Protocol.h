//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPDeviceContext, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@protocol _CPUsageEnvelope <NSObject>
@property(readonly, nonatomic) unsigned long long whichKind;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSData *uuidBytes;
@property(retain, nonatomic) _CPDeviceContext *context;
@property(nonatomic) int totalSessions;
@property(nonatomic) int configuredLookbackTimeInDays;
@property(nonatomic) long long collectionEndTimestamp;
@property(nonatomic) long long collectionStartTimestamp;
@property(retain, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity;
@property(retain, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity;
@property(retain, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity;
@property(retain, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity;
@property(retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

