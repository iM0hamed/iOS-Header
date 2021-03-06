//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveExperiments/NSCopying-Protocol.h>

@interface PREUMResponseItem : PBCodable <NSCopying>
{
    unsigned int _modelId;
    unsigned int _replyTextId;
    unsigned int _responseClassId;
    _Bool _isCustomResponse;
    struct {
        unsigned int modelId:1;
        unsigned int replyTextId:1;
        unsigned int responseClassId:1;
        unsigned int isCustomResponse:1;
    } _has;
}

@property(nonatomic) _Bool isCustomResponse; // @synthesize isCustomResponse=_isCustomResponse;
@property(nonatomic) unsigned int replyTextId; // @synthesize replyTextId=_replyTextId;
@property(nonatomic) unsigned int responseClassId; // @synthesize responseClassId=_responseClassId;
@property(nonatomic) unsigned int modelId; // @synthesize modelId=_modelId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIsCustomResponse;
@property(nonatomic) _Bool hasReplyTextId;
@property(nonatomic) _Bool hasResponseClassId;
@property(nonatomic) _Bool hasModelId;

@end

