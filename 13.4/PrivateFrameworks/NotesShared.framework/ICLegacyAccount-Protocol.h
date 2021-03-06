//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectID, NSSet, NSString;
@protocol ICLegacyFolder;

@protocol ICLegacyAccount <NSObject>
- (NSString *)localizedAttachmentsNotSupportedReason;
- (_Bool)preventMovingNotesToOtherAccounts;
- (_Bool)isManaged;
- (_Bool)supportsAttachments;
- (NSManagedObjectID *)objectID;
- (NSManagedObjectContext *)managedObjectContext;
- (id <ICLegacyFolder>)defaultFolder;
- (NSSet *)folders;
- (NSString *)emailAddress;
- (NSString *)accountIdentifier;
- (NSString *)objectIdentifier;
- (NSString *)name;
@end

