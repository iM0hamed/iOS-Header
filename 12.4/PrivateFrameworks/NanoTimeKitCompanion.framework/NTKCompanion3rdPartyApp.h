//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCompanionApp.h>

@class NRDevice, NSArray, NSString, NSURL;

@interface NTKCompanion3rdPartyApp : NTKCompanionApp
{
    _Bool _installed;
    NSString *_complicationClientIdentifier;
    NSURL *_urlToComplicationBundle;
    NSURL *_urlToWatchKitBundle;
    NRDevice *_device;
    NSArray *_supportedFamilies;
    NSString *_uniqueID;
}

+ (id)_urlsToGalleryBundleInApplicationWithContainerBundleId:(id)arg1;
+ (_Bool)_isValidComplicationsInformation:(id)arg1;
+ (_Bool)_isValidApplicationInformation:(id)arg1;
+ (id)_URLOfFirstItemWithExtension:(id)arg1 inDirectory:(id)arg2;
+ (id)companion3rdPartyAppWithInfo:(id)arg1 supportedComplicationFamilies:(id)arg2 device:(id)arg3;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSArray *supportedFamilies; // @synthesize supportedFamilies=_supportedFamilies;
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(nonatomic, getter=isInstalled) _Bool installed; // @synthesize installed=_installed;
@property(retain, nonatomic) NSURL *urlToWatchKitBundle; // @synthesize urlToWatchKitBundle=_urlToWatchKitBundle;
@property(retain, nonatomic) NSURL *urlToComplicationBundle; // @synthesize urlToComplicationBundle=_urlToComplicationBundle;
@property(retain, nonatomic) NSString *complicationClientIdentifier; // @synthesize complicationClientIdentifier=_complicationClientIdentifier;
- (void).cxx_destruct;
- (_Bool)_installStateFromAppConduitInstallState:(long long)arg1;
- (void)install;
- (id)complication;
- (_Bool)applicationHasBeenUpdated:(id)arg1;
- (id)appRegistrationDate;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithWatchAppId:(id)arg1 containerAppId:(id)arg2 complicationClientId:(id)arg3;
- (id)_initWithDevice:(id)arg1 applicationInfo:(id)arg2 galleryBundles:(id)arg3 watchKitBundle:(id)arg4;

@end

