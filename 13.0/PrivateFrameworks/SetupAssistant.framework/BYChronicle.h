//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BYChronicle : NSObject
{
    NSMutableDictionary *_featureEntries;
}

@property(retain, nonatomic) NSMutableDictionary *featureEntries; // @synthesize featureEntries=_featureEntries;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)entryForFeature:(unsigned long long)arg1;
- (void)addEntry:(id)arg1 forFeature:(unsigned long long)arg2;
- (void)recordFeatureShown:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

