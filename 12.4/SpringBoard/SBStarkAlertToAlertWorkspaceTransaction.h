//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBStarkWorkspaceTransaction.h"

@class SBAlert;

@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction
{
    _Bool _activationTriggeredFromStark;
    SBAlert *_activatingAlert;
    SBAlert *_deactivatingAlert;
}

- (void).cxx_destruct;
- (void)_begin;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1;

@end

