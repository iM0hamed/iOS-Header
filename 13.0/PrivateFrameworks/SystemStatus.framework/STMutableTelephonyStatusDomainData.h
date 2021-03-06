//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatus/STTelephonyStatusDomainData.h>

#import <SystemStatus/STMutableStatusDomainData-Protocol.h>
#import <SystemStatus/STMutableStatusDomainDataDifferencing-Protocol.h>

@class NSString, STTelephonyStatusDomainSIMInfo;

@interface STMutableTelephonyStatusDomainData : STTelephonyStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>
{
}

- (_Bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateSIMTwoInfoWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSIMOneInfoWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isRadioModuleDead) _Bool radioModuleDead; // @dynamic radioModuleDead;
@property(nonatomic, getter=isDualSIMEnabled) _Bool dualSIMEnabled; // @dynamic dualSIMEnabled;
@property(nonatomic, getter=isCellularRadioCapabilityEnabled) _Bool cellularRadioCapabilityEnabled; // @dynamic cellularRadioCapabilityEnabled;
@property(copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMTwoInfo; // @dynamic SIMTwoInfo;
@property(copy, nonatomic) STTelephonyStatusDomainSIMInfo *SIMOneInfo; // @dynamic SIMOneInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

