//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramSet : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _confidenceOfMostConfidentModel;
    int _durationSinceLastSuccessfulTraining;
    int _fallbackModelConfidence;
    NSMutableArray *_instances;
    int _modelType;
    struct {
        unsigned int timestamp:1;
        unsigned int confidenceOfMostConfidentModel:1;
        unsigned int durationSinceLastSuccessfulTraining:1;
        unsigned int fallbackModelConfidence:1;
        unsigned int modelType:1;
    } _has;
}

+ (Class)instanceType;
@property(nonatomic) int durationSinceLastSuccessfulTraining; // @synthesize durationSinceLastSuccessfulTraining=_durationSinceLastSuccessfulTraining;
@property(nonatomic) int confidenceOfMostConfidentModel; // @synthesize confidenceOfMostConfidentModel=_confidenceOfMostConfidentModel;
@property(nonatomic) int fallbackModelConfidence; // @synthesize fallbackModelConfidence=_fallbackModelConfidence;
@property(nonatomic) int modelType; // @synthesize modelType=_modelType;
@property(retain, nonatomic) NSMutableArray *instances; // @synthesize instances=_instances;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDurationSinceLastSuccessfulTraining;
@property(nonatomic) _Bool hasConfidenceOfMostConfidentModel;
@property(nonatomic) _Bool hasFallbackModelConfidence;
@property(nonatomic) _Bool hasModelType;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)instancesCount;
- (void)addInstance:(id)arg1;
- (void)clearInstances;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

