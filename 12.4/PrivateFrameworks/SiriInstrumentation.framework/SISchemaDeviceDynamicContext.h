//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriInstrumentation/NSCopying-Protocol.h>

@class NSString, SISchemaLocation;

@interface SISchemaDeviceDynamicContext : PBCodable <NSCopying>
{
    double _timeIntervalSince1970;
    NSString *_countryCode;
    SISchemaLocation *_location;
    struct {
        unsigned int timeIntervalSince1970:1;
    } _has;
}

@property(nonatomic) double timeIntervalSince1970; // @synthesize timeIntervalSince1970=_timeIntervalSince1970;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) SISchemaLocation *location; // @synthesize location=_location;
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
@property(nonatomic) _Bool hasTimeIntervalSince1970;
@property(readonly, nonatomic) _Bool hasCountryCode;
@property(readonly, nonatomic) _Bool hasLocation;

@end

