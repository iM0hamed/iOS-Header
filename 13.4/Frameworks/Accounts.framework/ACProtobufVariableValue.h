//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Accounts/NSCopying-Protocol.h>

@class ACProtobufDate, ACProtobufURL, ACProtobufUUID, ACProtobufVariableValueDictionary, ACProtobufVariableValueList, NSData, NSString;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValue : PBCodable <NSCopying>
{
    double _doubleValue;
    long long _integerValue;
    unsigned long long _unsignedIntegerValue;
    ACProtobufVariableValueList *_arrayValue;
    NSData *_dataValue;
    ACProtobufDate *_dateValue;
    ACProtobufVariableValueDictionary *_dictionaryValue;
    ACProtobufVariableValueList *_setValue;
    NSString *_stringValue;
    ACProtobufURL *_urlValue;
    ACProtobufUUID *_uuidValue;
    struct {
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int unsignedIntegerValue:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACProtobufVariableValueDictionary *dictionaryValue; // @synthesize dictionaryValue=_dictionaryValue;
@property(retain, nonatomic) ACProtobufVariableValueList *setValue; // @synthesize setValue=_setValue;
@property(retain, nonatomic) ACProtobufVariableValueList *arrayValue; // @synthesize arrayValue=_arrayValue;
@property(retain, nonatomic) ACProtobufURL *urlValue; // @synthesize urlValue=_urlValue;
@property(retain, nonatomic) ACProtobufDate *dateValue; // @synthesize dateValue=_dateValue;
@property(retain, nonatomic) ACProtobufUUID *uuidValue; // @synthesize uuidValue=_uuidValue;
@property(retain, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) unsigned long long unsignedIntegerValue; // @synthesize unsignedIntegerValue=_unsignedIntegerValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDictionaryValue;
@property(readonly, nonatomic) _Bool hasSetValue;
@property(readonly, nonatomic) _Bool hasArrayValue;
@property(readonly, nonatomic) _Bool hasUrlValue;
@property(readonly, nonatomic) _Bool hasDateValue;
@property(readonly, nonatomic) _Bool hasUuidValue;
@property(readonly, nonatomic) _Bool hasDataValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasUnsignedIntegerValue;
@property(nonatomic) _Bool hasIntegerValue;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(retain, nonatomic) id object;
- (_Bool)_setObject:(id)arg1;
- (id)initWithObjectValue:(id)arg1;

@end

