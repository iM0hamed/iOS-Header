//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DACalDAV/REMDAAccountProviding-Protocol.h>

@class NSString, REMObjectID;

@interface REMDAAccountInfo : NSObject <REMDAAccountProviding>
{
    NSString *_accountID;
    REMObjectID *_rem_accountObjectID;
    NSString *_accountDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(retain, nonatomic) REMObjectID *rem_accountObjectID; // @synthesize rem_accountObjectID=_rem_accountObjectID;
@property(retain, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (id)loggingDescription;
- (id)initWithAccountID:(id)arg1 remAccountObjectID:(id)arg2 accountDescription:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

