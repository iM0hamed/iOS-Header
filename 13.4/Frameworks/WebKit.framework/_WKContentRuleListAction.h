//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString;

@interface _WKContentRuleListAction : NSObject <WKObject>
{
    struct ObjectStorage<API::ContentRuleListAction> _action;
}

@property(readonly) struct Object *_apiObject;
@property(readonly, copy, nonatomic) NSArray *notifications;
@property(readonly, nonatomic) _Bool madeHTTPS;
@property(readonly, nonatomic) _Bool blockedCookies;
@property(readonly, nonatomic) _Bool blockedLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

