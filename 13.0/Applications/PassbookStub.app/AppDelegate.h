//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "UIApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
}

- (id)_prefsURLWithHost:(id)arg1 path:(id)arg2 query:(id)arg3;
- (id)_prefsURL;
- (_Bool)_handleURLWithHost:(id)arg1 path:(id)arg2 query:(id)arg3;
- (_Bool)_handleUniversalLinkWithUserActivity:(id)arg1;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

