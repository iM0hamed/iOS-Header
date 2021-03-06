//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMessageVersion, NSData, NSString;

@interface HDCodableClinicalAccount : PBCodable <NSCopying>
{
    double _creationDate;
    double _lastFetchDate;
    double _lastFullFetchDate;
    double _modificationDate;
    NSString *_accountIdentifier;
    NSString *_gatewayExternalID;
    HDCodableMessageVersion *_messageVersion;
    NSString *_patientHash;
    NSData *_syncIdentifier;
    _Bool _userEnabled;
    struct {
        unsigned int creationDate:1;
        unsigned int lastFetchDate:1;
        unsigned int lastFullFetchDate:1;
        unsigned int modificationDate:1;
        unsigned int userEnabled:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HDCodableMessageVersion *messageVersion; // @synthesize messageVersion=_messageVersion;
@property(retain, nonatomic) NSString *patientHash; // @synthesize patientHash=_patientHash;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) double lastFullFetchDate; // @synthesize lastFullFetchDate=_lastFullFetchDate;
@property(retain, nonatomic) NSData *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(nonatomic) double lastFetchDate; // @synthesize lastFetchDate=_lastFetchDate;
@property(nonatomic) double modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) _Bool userEnabled; // @synthesize userEnabled=_userEnabled;
@property(retain, nonatomic) NSString *gatewayExternalID; // @synthesize gatewayExternalID=_gatewayExternalID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasMessageVersion;
@property(readonly, nonatomic) _Bool hasPatientHash;
@property(readonly, nonatomic) _Bool hasAccountIdentifier;
@property(nonatomic) _Bool hasLastFullFetchDate;
@property(readonly, nonatomic) _Bool hasSyncIdentifier;
@property(nonatomic) _Bool hasLastFetchDate;
@property(nonatomic) _Bool hasModificationDate;
@property(nonatomic) _Bool hasCreationDate;
@property(nonatomic) _Bool hasUserEnabled;
@property(readonly, nonatomic) _Bool hasGatewayExternalID;

@end

