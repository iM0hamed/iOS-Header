//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlayServices/CRSAppHistoryServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface CRSAppHistoryController : NSObject <CRSAppHistoryServerToClientInterface>
{
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)setSessionUIContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSessionEchoContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSessionUIContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchUIContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

