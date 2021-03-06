//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupBatchRequest : PBRequest <NSCopying>
{
    NSMutableArray *_requests;
}

+ (Class)requestType;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)requestAtIndex:(unsigned long long)arg1;
- (unsigned long long)requestsCount;
- (void)addRequest:(id)arg1;
- (void)clearRequests;

@end

