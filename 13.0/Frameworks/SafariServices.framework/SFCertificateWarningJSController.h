//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariServices/SFCertificateWarningJSControllerMethods-Protocol.h>

@class SFWebProcessPlugInCertificateWarningController;

__attribute__((visibility("hidden")))
@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods>
{
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
}

- (void).cxx_destruct;
- (void)goBackSelected;
- (void)openClockSettings;
- (void)showCertificateInformation;
- (void)visitInsecureWebsiteWithTemporaryBypass;
- (void)visitInsecureWebsite;
- (void)pageLoaded;
- (id)initWithCertificateWarningController:(id)arg1;

@end

