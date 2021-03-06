//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAssetWriter, AVAssetWriterInput, AVCaptureDevice, AVCaptureSession, AVCaptureVideoPreviewLayer, CALayer, COSWristAttributeVisualDetector, COSWristDetectionHUD, NSObject, UITapGestureRecognizer;
@protocol COSMagicCodeScannerDelegate, OS_dispatch_queue;

@interface COSMagicCodeScanner : UIView
{
    AVCaptureSession *_session;
    AVCaptureDevice *_device;
    AVCaptureVideoPreviewLayer *_previewLayer;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterInput;
    _Bool _shouldCaptureMagicCodeScan;
    _Bool _hasBegunCapture;
    _Bool _isClosingCapture;
    NSObject<OS_dispatch_queue> *_queue;
    struct HCImagePerspectiveReader *_reader;
    unsigned long long _readerUVWidth;
    unsigned long long _readerUVHeight;
    unsigned long long _readerUVBytesPerRow;
    double _watermark;
    struct __CFArray *_pixelBufferPyramidArray;
    struct OpaqueVTPixelTransferSession *_pixelTransferSession;
    double _lastWmTime;
    double _lastFrameTime;
    double _lastPayloadTime;
    double _nextFrameTime;
    float _lastWmProgress;
    unsigned int _missWmCount;
    _Bool _canUseCamera;
    _Bool _isScanningForCode;
    _Bool _showLensHUD;
    _Bool _lensOnlyMode;
    _Bool _lensCollectorMode;
    id <COSMagicCodeScannerDelegate> _delegate;
    COSWristAttributeVisualDetector *_detector;
    UITapGestureRecognizer *_debugUIRecognizer;
    CALayer *_progressBGLayer;
    CALayer *_progressLayer;
    COSWristDetectionHUD *_mlHUD;
}

@property(nonatomic) _Bool lensCollectorMode; // @synthesize lensCollectorMode=_lensCollectorMode;
@property(nonatomic) _Bool lensOnlyMode; // @synthesize lensOnlyMode=_lensOnlyMode;
@property(nonatomic) _Bool showLensHUD; // @synthesize showLensHUD=_showLensHUD;
@property(retain, nonatomic) COSWristDetectionHUD *mlHUD; // @synthesize mlHUD=_mlHUD;
@property(retain, nonatomic) CALayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CALayer *progressBGLayer; // @synthesize progressBGLayer=_progressBGLayer;
@property(retain, nonatomic) UITapGestureRecognizer *debugUIRecognizer; // @synthesize debugUIRecognizer=_debugUIRecognizer;
@property(readonly, nonatomic) COSWristAttributeVisualDetector *detector; // @synthesize detector=_detector;
@property(nonatomic) _Bool isScanningForCode; // @synthesize isScanningForCode=_isScanningForCode;
@property(readonly, nonatomic) _Bool canUseCamera; // @synthesize canUseCamera=_canUseCamera;
@property(nonatomic) __weak id <COSMagicCodeScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleRuntimeError:(id)arg1;
- (void)stopRunning;
- (void)startRunning;
- (void)setCameraAttributes;
- (void)_changeCameraConfiguration;
- (void)closeWriter;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ofType:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)layoutSubviews;
- (id)setupCameraSession;
- (void)setupAssetWriterIfNeeded;
- (void)toggleDebugUI:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

