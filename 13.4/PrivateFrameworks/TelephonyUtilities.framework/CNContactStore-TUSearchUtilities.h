//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNContactStore.h>

#import <TelephonyUtilities/TUContactsDataSource-Protocol.h>

@class NSString;

@interface CNContactStore (TUSearchUtilities) <TUContactsDataSource>
- (id)contactForDestinationId:(id)arg1 keysToFetch:(id)arg2;
- (id)contactForDestinationId:(id)arg1;
- (id)contactForIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)contactForIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

