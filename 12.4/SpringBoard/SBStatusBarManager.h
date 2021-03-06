//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"

@class NSHashTable, NSMutableArray, NSString, UIWindow;

@interface SBStatusBarManager : NSObject <BSDescriptionProviding>
{
    NSHashTable *_statusBars;
    UIWindow *_recycledStatusBarsContainerWindow;
    NSMutableArray *_recycledStatusBars;
    NSHashTable *_hideStatusBarAssertions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)acquireHideFrontMostStatusBarAssertionForReason:(id)arg1;
- (_Bool)isFrontMostStatusBarHidden;
- (id)trailingStatusBarStyleRequest;
- (id)frontMostStatusBarStyleRequest;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)handleStatusBarTapWithEvent:(id)arg1;
- (void)recycleStatusBar:(id)arg1;
- (void)_removeStatusBarContainer:(id)arg1;
- (id)createStatusBarWithReason:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)createStatusBarWithReason:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

