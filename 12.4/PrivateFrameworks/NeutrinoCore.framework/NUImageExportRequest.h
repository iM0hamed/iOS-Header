//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUExportRequest.h>

@class NSDictionary, NUColorSpace, NUImageExportFormat;

@interface NUImageExportRequest : NUExportRequest
{
    _Bool _renderToData;
    NUColorSpace *_colorSpace;
    NUImageExportFormat *_format;
    NSDictionary *_imageProperties;
    NSDictionary *_auxiliaryDataByType;
    CDStruct_1b6d18a9 _time;
}

@property(copy) NSDictionary *auxiliaryDataByType; // @synthesize auxiliaryDataByType=_auxiliaryDataByType;
@property(copy) NSDictionary *imageProperties; // @synthesize imageProperties=_imageProperties;
@property(nonatomic) _Bool renderToData; // @synthesize renderToData=_renderToData;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(copy, nonatomic) NUImageExportFormat *format; // @synthesize format=_format;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newRenderJob;
- (id)initWithComposition:(id)arg1 exportFormat:(id)arg2;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1;

@end

