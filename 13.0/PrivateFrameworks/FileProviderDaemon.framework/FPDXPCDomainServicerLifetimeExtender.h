//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProviderDaemon/FPDLifetimeExtender-Protocol.h>
#import <FileProviderDaemon/FPDLifetimeServicing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDXPCDomainServicerLifetimeExtender : NSObject <FPDLifetimeExtender, FPDLifetimeServicing>
{
    int _requestEffectivePID;
    NSString *_prettyDescription;
    CDUnknownBlockType _stopBlock;
}

@property(copy, nonatomic) CDUnknownBlockType stopBlock; // @synthesize stopBlock=_stopBlock;
@property(retain) NSString *prettyDescription; // @synthesize prettyDescription=_prettyDescription;
@property int requestEffectivePID; // @synthesize requestEffectivePID=_requestEffectivePID;
- (void).cxx_destruct;
- (void)stopExtendingLifetime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

