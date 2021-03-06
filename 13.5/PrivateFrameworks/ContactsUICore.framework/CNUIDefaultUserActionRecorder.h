//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionRecorder-Protocol.h>

@class CRRecentContactsLibrary, NSString;
@protocol CNUIDefaultUserActionRecorderEventFactory;

@interface CNUIDefaultUserActionRecorder : NSObject <CNUIUserActionRecorder>
{
    CRRecentContactsLibrary *_library;
    id <CNUIDefaultUserActionRecorderEventFactory> _eventFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNUIDefaultUserActionRecorderEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) CRRecentContactsLibrary *library; // @synthesize library=_library;
- (void)recordUserAction:(id)arg1;
- (id)initWithRecentsLibrary:(id)arg1 eventFactory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

