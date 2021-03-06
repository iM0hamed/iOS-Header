//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSArray, NSMutableArray, VCAudioPayload, VCTransportSession;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitterConfig : NSObject
{
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_rtpVideo;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_afrcHandle;
    void *_controlInfoGenerator;
    AVCStatisticsCollector *_statisticsCollector;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_chosenAudioPayload;
    VCAudioPayload *_chosenDTXPayload;
    unsigned char _packetsPerBundle;
    _Bool _useRateControl;
    int _bundlingScheme;
    _Bool _isUseCaseWatchContinuity;
    _Bool _allowAudioSwitching;
    _Bool _supportsAdaptation;
    int _chosenRedPayloadType;
    _Bool _redEnabled;
    _Bool _includeRedSequenceOffset;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    _Bool _transmitROC;
    _Bool _needsPacketThread;
    int _operatingMode;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingParentID;
    VCTransportSession *_transportSession;
    _Bool _ignoreSilence;
    unsigned int _maxIDSStreamIdCount;
    NSArray *_streamIDs;
    unsigned int _tierNetworkBitrate;
    NSArray *_supportedNumRedundantPayload;
    _Bool _sendActiveVoiceOnly;
    _Bool _currentDTXEnable;
    unsigned char _mediaControlInfoVersion;
    _Bool _alwaysOnAudioRedundancyEnabled;
    _Bool _cellularAllowRedLowBitratesEnabled;
    _Bool _wifiAllowRedLowBitratesEnabled;
}

@property(nonatomic) _Bool wifiAllowRedLowBitratesEnabled; // @synthesize wifiAllowRedLowBitratesEnabled=_wifiAllowRedLowBitratesEnabled;
@property(nonatomic) _Bool cellularAllowRedLowBitratesEnabled; // @synthesize cellularAllowRedLowBitratesEnabled=_cellularAllowRedLowBitratesEnabled;
@property(nonatomic) _Bool alwaysOnAudioRedundancyEnabled; // @synthesize alwaysOnAudioRedundancyEnabled=_alwaysOnAudioRedundancyEnabled;
@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(nonatomic) int reportingParentID; // @synthesize reportingParentID=_reportingParentID;
@property(nonatomic) _Bool sendActiveVoiceOnly; // @synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly;
@property(retain, nonatomic) NSArray *supportedNumRedundantPayload; // @synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) unsigned int tierNetworkBitrate; // @synthesize tierNetworkBitrate=_tierNetworkBitrate;
@property(retain, nonatomic) NSArray *streamIDs; // @synthesize streamIDs=_streamIDs;
@property(nonatomic) _Bool needsPacketThread; // @synthesize needsPacketThread=_needsPacketThread;
@property(nonatomic) _Bool ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(nonatomic) _Bool transmitROC; // @synthesize transmitROC=_transmitROC;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) unsigned int redMaxDelay20ms; // @synthesize redMaxDelay20ms=_redMaxDelay20ms;
@property(nonatomic) unsigned int redNumPayloads; // @synthesize redNumPayloads=_redNumPayloads;
@property(nonatomic) _Bool includeRedSequenceOffset; // @synthesize includeRedSequenceOffset=_includeRedSequenceOffset;
@property(nonatomic, getter=isRedEnabled) _Bool redEnabled; // @synthesize redEnabled=_redEnabled;
@property(retain, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) struct AudioStreamBasicDescription inputFormat; // @synthesize inputFormat=_inputFormat;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) _Bool supportsAdaptation; // @synthesize supportsAdaptation=_supportsAdaptation;
@property(nonatomic) _Bool allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property(nonatomic) _Bool isUseCaseWatchContinuity; // @synthesize isUseCaseWatchContinuity=_isUseCaseWatchContinuity;
@property(nonatomic) int bundlingScheme; // @synthesize bundlingScheme=_bundlingScheme;
@property(nonatomic) _Bool useRateControl; // @synthesize useRateControl=_useRateControl;
@property(nonatomic) unsigned char packetsPerBundle; // @synthesize packetsPerBundle=_packetsPerBundle;
@property(nonatomic) int chosenRedPayloadType; // @synthesize chosenRedPayloadType=_chosenRedPayloadType;
@property(retain, nonatomic) VCAudioPayload *chosenDTXPayload; // @synthesize chosenDTXPayload=_chosenDTXPayload;
@property(retain, nonatomic) VCAudioPayload *chosenAudioPayload; // @synthesize chosenAudioPayload=_chosenAudioPayload;
@property(retain, nonatomic) NSMutableArray *audioPayloads; // @synthesize audioPayloads=_audioPayloads;
@property(nonatomic) struct tagHANDLE *afrcHandle; // @synthesize afrcHandle=_afrcHandle;
@property(nonatomic) struct tagHANDLE *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(nonatomic) void *controlInfoGenerator; // @synthesize controlInfoGenerator=_controlInfoGenerator;
@property(nonatomic) struct tagHANDLE *rtpVideo; // @synthesize rtpVideo=_rtpVideo;
@property(nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
- (id)description;
- (void)dealloc;

@end

