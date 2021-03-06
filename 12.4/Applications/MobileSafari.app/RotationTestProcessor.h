//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContentInteractionTestRunner.h"

@interface RotationTestProcessor : ContentInteractionTestRunner
{
    int _iterationsRemaining;
    long long _testState;
}

@property(nonatomic) long long testState; // @synthesize testState=_testState;
@property(nonatomic) int iterationsRemaining; // @synthesize iterationsRemaining=_iterationsRemaining;
- (_Bool)performActionForPage:(id)arg1;
- (void)startRotation;
- (_Bool)startPageAction:(id)arg1;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;

@end

