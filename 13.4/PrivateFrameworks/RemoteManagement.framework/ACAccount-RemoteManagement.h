//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (RemoteManagement)
@property(setter=rm_setmanagedByOlympus:) _Bool rm_managedByOlympus;
@property(copy, setter=rm_setPersonaIdentifier:) NSString *rm_personaIdentifier;
@property(copy, setter=rm_setRemoteManagingAccountIdentifier:) NSString *rm_remoteManagingAccountIdentifier;
@property(copy, setter=rm_setManagementSourceIdentifier:) NSString *rm_managementSourceIdentifier;
@property(copy, setter=rm_setEnrollmentToken:) NSString *rm_enrollmentToken;
@property(copy, setter=rm_setAltDSID:) NSString *rm_altDSID;
@property(copy, setter=rm_setDSID:) NSNumber *rm_DSID;
@end

