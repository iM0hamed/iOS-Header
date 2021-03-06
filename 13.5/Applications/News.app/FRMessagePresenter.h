//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "SXMessagePresenter-Protocol.h"

@class NSString;
@protocol SXViewControllerPresenting;

@interface FRMessagePresenter : NSObject <MFMessageComposeViewControllerDelegate, SXMessagePresenter>
{
    id <SXViewControllerPresenting> _viewControllerPresenting;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXViewControllerPresenting> viewControllerPresenting; // @synthesize viewControllerPresenting=_viewControllerPresenting;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)presentMessage:(id)arg1;
- (_Bool)canPresentMessage;
- (id)initWithViewControllerPresenting:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

