//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMStillImageCaptureResult, NSDate, NSDictionary, NSError, NSString, NSURL;

@interface CAMStillImageLocalPersistenceResult : NSObject
{
    CAMStillImageCaptureResult *_captureResult;
    NSURL *_localDestinationURL;
    NSURL *_linkedDestinationURL;
    NSURL *_localAdjustmentsURL;
    NSString *_localDiagnosticsPath;
    NSString *_localFilteredPreviewPath;
    NSString *_localPersistenceUUID;
    NSDate *_creationDate;
    NSString *_uniformTypeIdentifier;
    long long _imageOrientation;
    NSDictionary *_metadata;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(readonly, copy, nonatomic) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *localPersistenceUUID; // @synthesize localPersistenceUUID=_localPersistenceUUID;
@property(readonly, copy, nonatomic) NSString *localFilteredPreviewPath; // @synthesize localFilteredPreviewPath=_localFilteredPreviewPath;
@property(readonly, copy, nonatomic) NSString *localDiagnosticsPath; // @synthesize localDiagnosticsPath=_localDiagnosticsPath;
@property(readonly, copy, nonatomic) NSURL *localAdjustmentsURL; // @synthesize localAdjustmentsURL=_localAdjustmentsURL;
@property(readonly, copy, nonatomic) NSURL *linkedDestinationURL; // @synthesize linkedDestinationURL=_linkedDestinationURL;
@property(readonly, copy, nonatomic) NSURL *localDestinationURL; // @synthesize localDestinationURL=_localDestinationURL;
@property(readonly, nonatomic) CAMStillImageCaptureResult *captureResult; // @synthesize captureResult=_captureResult;
- (void).cxx_destruct;
- (id)initWithCaptureResult:(id)arg1 atURL:(id)arg2 linkedURL:(id)arg3 localAdjustmentsURL:(id)arg4 diagnosticsPath:(id)arg5 filteredPreviewPath:(id)arg6 withUUID:(id)arg7 creationDate:(id)arg8 uniformTypeIdentifier:(id)arg9 orientation:(long long)arg10 metadata:(id)arg11 error:(id)arg12;

@end

