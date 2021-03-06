//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PPRecordLoadingDelegate : NSObject
{
    NSString *_name;
    NSDate *_loadRecordsDetectedSince;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *loadRecordsDetectedSince; // @synthesize loadRecordsDetectedSince=_loadRecordsDetectedSince;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)resetRecordData;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)arg1;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)arg1;
- (unsigned char)recordLoadingSetup;
- (id)description;
- (id)initWithName:(id)arg1;

@end

