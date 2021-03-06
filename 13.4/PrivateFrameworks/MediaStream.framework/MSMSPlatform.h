//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaStream/MSPlatform-Protocol.h>

@class ACAccountStore, NSData, NSString;

@interface MSMSPlatform : NSObject <MSPlatform>
{
    _Bool _isPerfLoggingEnabled;
    NSData *_pushToken;
    ACAccountStore *_accountStore;
}

+ (id)thePlatform;
- (void).cxx_destruct;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) _Bool isPerfLoggingEnabled; // @synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (id)theDaemon;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (_Bool)shouldEnableNewFeatures;
- (id)pushTokenForPersonID:(id)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)contentURLForPersonID:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (id)authTokenForPersonID:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (void)didDetectUnrecoverableCondition;
- (id)socketOptions;
- (_Bool)policyMayDownload;
- (_Bool)policyMayUpload;
- (_Bool)_mayPerformFileTransfer;
- (id)appBundleInfoString;
- (id)OSString;
- (id)hardwareString;
- (id)stringForSysctlKey:(id)arg1;
- (id)OSVersion;
- (id)UDID;
- (Class)deletePluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (Class)pluginClass;
- (id)pathMediaStreamDir;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;
- (void)_rereadDefaults;
- (_Bool)isPerformanceLoggingEnabled;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;
- (struct __CFString *)_facilityStringForFacility:(int)arg1;
- (_Bool)shouldLogAtLevel:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

