//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying>
{
    NSMutableArray *_passRelevancyTuples;
}

+ (Class)passRelevancyTuplesType;
@property(retain, nonatomic) NSMutableArray *passRelevancyTuples; // @synthesize passRelevancyTuples=_passRelevancyTuples;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)passRelevancyTuplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)passRelevancyTuplesCount;
- (void)addPassRelevancyTuples:(id)arg1;
- (void)clearPassRelevancyTuples;

@end

