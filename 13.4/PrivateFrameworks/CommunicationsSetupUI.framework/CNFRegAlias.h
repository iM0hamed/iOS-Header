//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAccount, NSString;

@interface CNFRegAlias : NSObject
{
    NSString *_alias;
    NSString *_displayName;
    IMAccount *_account;
    long long _givenAliasType;
    _Bool _selectedDeviceAlias;
    NSString *_deviceAliasIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) NSString *deviceAliasIdentifier; // @synthesize deviceAliasIdentifier=_deviceAliasIdentifier;
@property(nonatomic, getter=isSelectedDeviceAlias) _Bool selectedDeviceAlias; // @synthesize selectedDeviceAlias=_selectedDeviceAlias;
@property(nonatomic) long long givenAliasType; // @synthesize givenAliasType=_givenAliasType;
@property(retain, nonatomic) IMAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isLocalPhoneNumberAlias;
- (long long)localizedCaseInsensitiveCompare:(id)arg1;
- (id)description;
- (void)setDisplayName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (long long)validationErrorReason;
- (long long)validationStatus;
- (_Bool)validate;
- (_Bool)isDeviceAlias;
- (_Bool)isPhoneNumberAliasOnPhoneNumberAccount;
@property(readonly, nonatomic) long long type; // @dynamic type;
@property(readonly, retain, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)initWithAccount:(id)arg1 alias:(id)arg2;
- (id)initWithAlias:(id)arg1 type:(long long)arg2 selected:(_Bool)arg3 deviceAliasIdentifier:(id)arg4;

@end

