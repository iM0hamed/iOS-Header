//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBDomainAttributeManaging-Protocol.h>
#import <RunningBoard/RBStateCapturing-Protocol.h>

@class NSDictionary, NSString;
@protocol RBDomainAttributeDataProviding;

@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing>
{
    NSDictionary *_domainAttributeTemplatesByDomain;
    id <RBDomainAttributeDataProviding> _dataProvider;
}

- (void).cxx_destruct;
- (_Bool)_compareTargetBundleProperties:(id)arg1 withTargetProperties:(id)arg2;
- (void)_prepareAttributeTemplates;
- (id)captureState;
@property(readonly, copy, nonatomic) NSString *stateCaptureTitle;
- (_Bool)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
- (_Bool)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;
- (id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
- (id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
- (id)allEntitlements;
- (id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id *)arg4;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

