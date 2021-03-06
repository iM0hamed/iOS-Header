//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "SWCRedactedDescription-Protocol.h"

@class NSData, NSDate, NSDictionary, NSError, NSNumber, NSString, SWCPatternList, SWCSubstitutionVariableList, _SWCApplicationIdentifier, _SWCDomain, _SWCServiceSpecifier;

@interface SWCEntry : NSObject <SWCRedactedDescription, NSSecureCoding>
{
    NSData *_lastErrorJSON;
    struct SWCFields _fields;
    _SWCApplicationIdentifier *_applicationIdentifier;
    NSString *_service;
    _SWCDomain *_domain;
    NSString *_applicationVersion;
    SWCPatternList *_patterns;
    SWCSubstitutionVariableList *_substitutionVariables;
    NSDate *_lastCheckedDate;
    NSNumber *_retryCount;
}

+ (_Bool)supportsSecureCoding;
+ (void)canonicalizeEntries:(id)arg1;
+ (id)new;
+ (id)entriesForBundleProxy:(id)arg1 enterpriseContext:(id)arg2;
+ (void)enumerateJSONResourceURLsForBundleURL:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)entriesForJSONObject:(id)arg1 domain:(id)arg2;
+ (id)_enterpriseEntriesWithContext:(id)arg1 forBundleProxy:(id)arg2 applicationIdentifier:(id)arg3;
+ (id)_associatedDomainsFromEntitlementForBundleProxy:(id)arg1;
+ (_Bool)_isBundleProxy:(id)arg1 linkedOnOrAfter:(id)arg2;
+ (id)_log;
+ (void)_addEntriesToOrderedSet:(id)arg1 forService:(id)arg2 fromAppsArray:(id)arg3 domain:(id)arg4;
+ (void)_addEntriesToOrderedSet:(id)arg1 forUniversalLinksFromDetailsDictionary:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4;
+ (void)_addEntriesToOrderedSet:(id)arg1 forUniversalLinksFromDetailsArray:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4;
+ (void)_addEntryToOrderedSet:(id)arg1 forUniversalLinksFromSingleDetailsDictionary:(id)arg2 domain:(id)arg3 substitutionVariables:(id)arg4;
+ (id)_entriesFromBuiltInJSONForBundleProxy:(id)arg1 applicationIdentifier:(id)arg2;
+ (void)_enumerateJSONFilesForBundleProxy:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(copy) NSDate *lastCheckedDate; // @synthesize lastCheckedDate=_lastCheckedDate;
@property(retain) SWCSubstitutionVariableList *substitutionVariables; // @synthesize substitutionVariables=_substitutionVariables;
@property(retain) SWCPatternList *patterns; // @synthesize patterns=_patterns;
@property(copy) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(readonly, copy) _SWCDomain *domain; // @synthesize domain=_domain;
@property(readonly, copy) NSString *service; // @synthesize service=_service;
@property(readonly, copy) _SWCApplicationIdentifier *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)redactedDescription;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(copy, nonatomic) NSError *lastError;
@property(readonly) NSDate *nextCheckDate;
@property(readonly, getter=isDownloadable) _Bool downloadable;
@property(readonly) struct SWCFields *fields;
- (unsigned long long)evaluateWithURLComponents:(id)arg1 matchingPattern:(id *)arg2;
- (void)canonicalizeWithObjectCache:(id)arg1;
- (void)canonicalizeObjectAtAddress:(id *)arg1 objectCache:(id)arg2;
@property(readonly) _SWCServiceSpecifier *serviceSpecifier;
- (void)logToFile:(struct __sFILE *)arg1 verbosity:(unsigned char)arg2;
@property(readonly) NSDictionary *propertyListRepresentation;
- (id)initWithServiceSpecifier:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1 service:(id)arg2 domain:(id)arg3;
- (id)init;

@end

