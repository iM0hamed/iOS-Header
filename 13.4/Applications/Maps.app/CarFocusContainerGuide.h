//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIFocusContainerGuide.h>

#import "CarFocusGuideProtocol-Protocol.h"

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface CarFocusContainerGuide : UIFocusContainerGuide <CarFocusGuideProtocol>
{
    UIView *_debugView;
    NSArray *_activationConstraints;
}

+ (id)focusContainerGuideInstalledInView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *activationConstraints; // @synthesize activationConstraints=_activationConstraints;
@property(readonly, nonatomic) UIView *debugView; // @synthesize debugView=_debugView;
- (void)setEnabled:(_Bool)arg1;
- (id)init;

@end

