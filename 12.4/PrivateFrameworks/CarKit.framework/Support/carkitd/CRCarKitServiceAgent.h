//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRCarKitService-Protocol.h"
#import "CRCarPlayPreferencesDelegate-Protocol.h"
#import "CRVehicleAccessoryManagerDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class CRBluetoothManager, CRCarKitMonitoringServiceAgent, CRCarPlayPreferences, CRVehicleAccessoryManager, CRVehicleStore, CRWiFiCarManager, CRWirelessSessionAssertionManager, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface CRCarKitServiceAgent : NSObject <CRVehicleAccessoryManagerDelegate, CRCarPlayPreferencesDelegate, NSXPCListenerDelegate, CRCarKitService>
{
    CRCarKitMonitoringServiceAgent *_monitoringService;
    CRVehicleStore *_vehicleStore;
    CRVehicleAccessoryManager *_accessoryManager;
    CRCarPlayPreferences *_preferencesManager;
    CRBluetoothManager *_bluetoothManager;
    CRWiFiCarManager *_wifiManager;
    CRWirelessSessionAssertionManager *_assertionManager;
    NSMutableArray *_outstandingApprovalAlerts;
    NSMutableArray *_outstandingPairingAlerts;
    NSMutableArray *_outstandingEnableWiFiAlerts;
    NSNumber *_cachedCarPlayAllowedChangeValue;
    NSMutableDictionary *_serviceCountDuringAlertForBluetoothAddress;
}

@property(retain, nonatomic) NSMutableDictionary *serviceCountDuringAlertForBluetoothAddress; // @synthesize serviceCountDuringAlertForBluetoothAddress=_serviceCountDuringAlertForBluetoothAddress;
@property(nonatomic) NSNumber *cachedCarPlayAllowedChangeValue; // @synthesize cachedCarPlayAllowedChangeValue=_cachedCarPlayAllowedChangeValue;
@property(retain, nonatomic) NSMutableArray *outstandingEnableWiFiAlerts; // @synthesize outstandingEnableWiFiAlerts=_outstandingEnableWiFiAlerts;
@property(retain, nonatomic) NSMutableArray *outstandingPairingAlerts; // @synthesize outstandingPairingAlerts=_outstandingPairingAlerts;
@property(retain, nonatomic) NSMutableArray *outstandingApprovalAlerts; // @synthesize outstandingApprovalAlerts=_outstandingApprovalAlerts;
@property(retain, nonatomic) CRWirelessSessionAssertionManager *assertionManager; // @synthesize assertionManager=_assertionManager;
@property(retain, nonatomic) CRWiFiCarManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) CRBluetoothManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(retain, nonatomic) CRCarPlayPreferences *preferencesManager; // @synthesize preferencesManager=_preferencesManager;
@property(retain, nonatomic) CRVehicleAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property(retain, nonatomic) CRVehicleStore *vehicleStore; // @synthesize vehicleStore=_vehicleStore;
@property(nonatomic) __weak CRCarKitMonitoringServiceAgent *monitoringService; // @synthesize monitoringService=_monitoringService;
- (void).cxx_destruct;
- (void)_dismissReconnectionEnableWiFiAlerts;
- (void)_dismissReconnectionEnableWiFiAlertForVehicle:(id)arg1;
- (void)_presentReconnectionEnableWiFiAlertForVehicle:(id)arg1;
- (void)_dismissPairingAlerts;
- (void)_dismissPairingAlertForVehicleAccessory:(id)arg1;
- (void)_beginWiredPairingWithVehicleAccessory:(id)arg1 vehicle:(id)arg2;
- (void)_presentWiredBluetoothPairingAlertForVehicleAccessory:(id)arg1 vehicle:(id)arg2;
- (void)_dismissApprovalAlerts;
- (void)_dismissApprovalAlertForVehicleAccessory:(id)arg1;
- (void)_presentApprovalAlertForVehicleAccessory:(id)arg1;
- (_Bool)sendDeviceIdentifierForVehicleAccesory:(id)arg1 pairingStatus:(unsigned long long)arg2;
- (_Bool)attemptConnectionWithVehicles:(id)arg1;
- (_Bool)requestWiFiCredentialsIfNecessaryForVehicleAccessories:(id)arg1;
- (id)saveVehicle:(id)arg1;
- (id)pairedVehiclesConnectedOnBluetooth;
- (void)updateVehicle:(id)arg1 usingAccessory:(id)arg2;
- (void)enumerateVehiclesForAccessories:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)vehicleMatchingAccessory:(id)arg1 inVehicles:(id)arg2;
- (void)updateIncompletePairingsMatchingAccessories:(id)arg1;
- (void)handleCarPlayAttachedAccessories:(id)arg1;
- (void)handleCarPlayAttached;
- (id)_unknownPairingAccessoriesFromAccessories:(id)arg1;
- (id)_certificateSerialNumbersWithKnownPairing;
- (_Bool)_isVehicleActionable:(id)arg1;
- (_Bool)_isRestricted:(id *)arg1;
- (_Bool)postOutOfCarNotificationForVehicle:(id)arg1;
- (_Bool)postInCarNotificationForVehicle:(id)arg1;
- (void)handleVehicleStoreAvailabiltyDidChange:(id)arg1;
- (void)_handleCarPlayAllowedDidChange;
- (void)handleCarPlayAllowedDidChange;
- (void)accessoryManager:(id)arg1 didDisconnectVehicleAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didUpdateVehicleAccessory:(id)arg2;
- (void)accessoryManager:(id)arg1 didConnectVehicleAccessory:(id)arg2;
- (id)accessoryRadarDescription:(id)arg1;
- (void)handleCarPlayDiagnosticsWithDeviceScreenshotURL:(id)arg1 carScreenshotURL:(id)arg2 attachmentURLs:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)isCarPlayAllowedWithReply:(CDUnknownBlockType)arg1;
- (void)handleCarPlayRestrictionChangedWithReply:(CDUnknownBlockType)arg1;
- (void)isPairedWithCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)allowsConnectionsForCertificateSerial:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)allowsConnectionsForWiFiUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)saveWiFiCredentialsForAccessoryConnectionIdentifier:(unsigned long long)arg1 credentials:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)isBluetoothInCarWithReply:(CDUnknownBlockType)arg1;
- (void)handleDidDisconnectBluetoothAddress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handleDidConnectBluetoothAddress:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)hasVehiclesWithReply:(CDUnknownBlockType)arg1;
- (void)fetchAllVehiclesWithReply:(CDUnknownBlockType)arg1;
- (void)removeVehicle:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)saveVehicle:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

