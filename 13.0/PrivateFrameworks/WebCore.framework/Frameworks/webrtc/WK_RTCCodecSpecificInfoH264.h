//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/WK_RTCCodecSpecificInfo-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCCodecSpecificInfoH264 : NSObject <WK_RTCCodecSpecificInfo>
{
    unsigned long long _packetizationMode;
}

@property(nonatomic) unsigned long long packetizationMode; // @synthesize packetizationMode=_packetizationMode;
- (struct CodecSpecificInfo)nativeCodecSpecificInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

