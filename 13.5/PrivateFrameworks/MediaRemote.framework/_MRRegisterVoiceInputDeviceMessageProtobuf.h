//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRVoiceInputDeviceDescriptorProtobuf;

@interface _MRRegisterVoiceInputDeviceMessageProtobuf : PBCodable <NSCopying>
{
    _MRVoiceInputDeviceDescriptorProtobuf *_descriptor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor; // @synthesize descriptor=_descriptor;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDescriptor;

@end

