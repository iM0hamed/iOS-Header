//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate, NSDictionary, NSSet, NSString, PGGraphMomentNode, PGMemoryGenerator, PHAssetCollection;

@interface PGPotentialMemory : NSObject
{
    PHAssetCollection *_assetCollection;
    PGGraphMomentNode *_momentNode;
    NSSet *_momentNodes;
    long long _sourceType;
    unsigned long long _category;
    unsigned long long _subcategory;
    double _score;
    NSDate *_localDate;
    CLLocation *_location;
    NSSet *_peopleUUIDs;
    NSString *_eventName;
    double _contentScore;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSSet *_features;
    NSSet *_momentIDs;
    NSDictionary *_numberOfAssetsByMomentIDs;
    PGPotentialMemory *_upgradedPotentialMemory;
    PGMemoryGenerator *_upgradedMemoryGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PGMemoryGenerator *upgradedMemoryGenerator; // @synthesize upgradedMemoryGenerator=_upgradedMemoryGenerator;
@property(retain, nonatomic) PGPotentialMemory *upgradedPotentialMemory; // @synthesize upgradedPotentialMemory=_upgradedPotentialMemory;
@property(readonly) NSDictionary *numberOfAssetsByMomentIDs; // @synthesize numberOfAssetsByMomentIDs=_numberOfAssetsByMomentIDs;
@property(readonly) NSSet *momentIDs; // @synthesize momentIDs=_momentIDs;
@property(retain) NSSet *features; // @synthesize features=_features;
@property double contentScore; // @synthesize contentScore=_contentScore;
@property(retain) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain) NSSet *peopleUUIDs; // @synthesize peopleUUIDs=_peopleUUIDs;
@property(retain) CLLocation *location; // @synthesize location=_location;
@property(retain) NSDate *localDate; // @synthesize localDate=_localDate;
@property double score; // @synthesize score=_score;
@property unsigned long long subcategory; // @synthesize subcategory=_subcategory;
@property unsigned long long category; // @synthesize category=_category;
@property long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain) NSSet *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(retain) PGGraphMomentNode *momentNode; // @synthesize momentNode=_momentNode;
@property(retain) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
- (id)buildAssetCollectionUsingMemoryController:(id)arg1 withMinimumNumberOfAssets:(unsigned long long)arg2;
- (double)computeContentScoreUsingMemoryController:(id)arg1;
- (void)_resetOverlapCheck;
- (void)_prepareForOverlapCheck;
@property(readonly) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(readonly) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property(readonly) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNode:(id)arg3;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2;

@end

