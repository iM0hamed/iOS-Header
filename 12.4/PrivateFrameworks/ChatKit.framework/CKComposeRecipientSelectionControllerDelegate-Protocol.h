//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKRecipientSelectionControllerDelegate-Protocol.h>
#import <ChatKit/NSObject-Protocol.h>

@class CKComposeRecipientSelectionController, CKConversation;

@protocol CKComposeRecipientSelectionControllerDelegate <NSObject, CKRecipientSelectionControllerDelegate>
- (void)recipientSelectionController:(CKComposeRecipientSelectionController *)arg1 didSelectConversation:(CKConversation *)arg2;
@end

