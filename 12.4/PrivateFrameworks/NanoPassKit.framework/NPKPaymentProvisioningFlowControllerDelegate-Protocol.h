//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NPKPaymentProvisioningFlowController, NPKPaymentProvisioningFlowStepContext;

@protocol NPKPaymentProvisioningFlowControllerDelegate <NSObject>
- (void)paymentProvisioningFlowController:(NPKPaymentProvisioningFlowController *)arg1 didTransitionFromStep:(unsigned long long)arg2 toStep:(unsigned long long)arg3 withContext:(NPKPaymentProvisioningFlowStepContext *)arg4;
@end

