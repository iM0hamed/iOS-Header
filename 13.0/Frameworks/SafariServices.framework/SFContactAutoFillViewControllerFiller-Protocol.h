//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class CNContact, NSArray;

@protocol SFContactAutoFillViewControllerFiller <NSObject>
- (void)dismissCustomAutoFill;
- (void)performAutoFillWithMatchSelections:(NSArray *)arg1 doNotFill:(NSArray *)arg2 contact:(CNContact *)arg3;
@end

