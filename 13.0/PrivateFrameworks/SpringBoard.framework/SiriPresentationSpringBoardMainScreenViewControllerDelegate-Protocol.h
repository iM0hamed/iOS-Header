//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SiriPresentationControllerDelegate-Protocol.h>

@class NSString;
@protocol SiriPresentation;

@protocol SiriPresentationSpringBoardMainScreenViewControllerDelegate <SiriPresentationControllerDelegate>
- (_Bool)siriPresentation:(id <SiriPresentation>)arg1 requestsDeviceUnlockWithPassword:(NSString *)arg2;
- (void)screenWakeIdleTimerResetRequested;
- (void)screenWakeRequested;
@end

