//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteManagement/RMCoreOrganizationSettings.h>

@class NSString, RMLocalOrganization;

@interface RMLocalOrganizationSettings : RMCoreOrganizationSettings
{
}

@property(copy, nonatomic) NSString *passcode; // @dynamic passcode;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;

// Remaining properties
@property(retain, nonatomic) RMLocalOrganization *organization; // @dynamic organization;

@end

