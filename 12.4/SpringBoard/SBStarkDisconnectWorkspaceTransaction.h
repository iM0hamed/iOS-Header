//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

@class SBStarkScreenController;

@interface SBStarkDisconnectWorkspaceTransaction : SBMainWorkspaceTransaction
{
    SBStarkScreenController *_screenController;
    _Bool _invalidating;
}

- (void).cxx_destruct;
- (void)_didComplete;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1 starkScreenController:(id)arg2 invalidating:(_Bool)arg3;
- (id)initWithTransitionRequest:(id)arg1;

@end

