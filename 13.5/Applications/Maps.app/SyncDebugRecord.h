//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSArray, NSString, SyncDebugZone;

__attribute__((visibility("hidden")))
@interface SyncDebugRecord : NSObject
{
    SyncDebugZone *_owner;
    NSString *_title;
    NSArray *_displayableProperties;
    CKRecordID *_identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSArray *displayableProperties; // @synthesize displayableProperties=_displayableProperties;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)select;
- (id)initWithCKRecord:(id)arg1 contentsDescriptionHandler:(CDUnknownBlockType)arg2 owner:(id)arg3;

@end

