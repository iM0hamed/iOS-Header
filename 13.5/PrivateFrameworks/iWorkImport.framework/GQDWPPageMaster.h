//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDWPPageMaster : NSObject <GQDNameMappable>
{
    struct __CFString *mHeaderIdentifier;
    struct __CFString *mFooterIdentifier;
}

+ (const struct StateSpec *)stateForReading;
- (struct __CFString *)footerIdentifier;
- (struct __CFString *)headerIdentifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

