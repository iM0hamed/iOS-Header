//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFBufferedDataConsumer.h>

@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer
{
    int _SecCMSError;
    struct SecCmsEncoderStr *_encoder;
    struct SecCmsMessageStr *_message;
    NSMutableData *_singleShot;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int lastSecCMSError; // @synthesize lastSecCMSError=_SecCMSError;
- (id)data;
- (void)_appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)done;
- (long long)appendData:(id)arg1;
- (void)dealloc;
- (id)initForEncryptionWithCompositionSpecification:(id)arg1 error:(id *)arg2;
- (id)initForSigningWithSender:(id)arg1 compositionSpecification:(id)arg2 error:(id *)arg3;

@end

