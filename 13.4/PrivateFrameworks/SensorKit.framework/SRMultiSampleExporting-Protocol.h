//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SensorKit/NSObject-Protocol.h>

@class NSDictionary;
@protocol SRSampling;

@protocol SRMultiSampleExporting <NSObject>
- (NSDictionary *)sr_dictionaryRepresentationWithSample:(id <SRSampling>)arg1;
- (NSDictionary *)sr_endMultiSampleStream;
- (void)sr_beginMultiSampleStream;
@end

