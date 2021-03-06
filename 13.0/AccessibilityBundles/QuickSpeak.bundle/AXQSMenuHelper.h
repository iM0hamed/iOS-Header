//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UICalloutBar, UIMenuController;

@interface AXQSMenuHelper : NSObject
{
    _Bool _showingLanguageChoices;
    NSArray *_thirdPartyMenuItems;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *thirdPartyMenuItems; // @synthesize thirdPartyMenuItems=_thirdPartyMenuItems;
@property(nonatomic, getter=isShowingLanguageChoices) _Bool showingLanguageChoices; // @synthesize showingLanguageChoices=_showingLanguageChoices;
- (void).cxx_destruct;
- (id)menuItemForCalloutBarButton:(id)arg1;
- (void)saveThirdPartyMenuItemsIfNeeded:(id)arg1;
- (void)restoreMenu;
@property(readonly, nonatomic) UICalloutBar *calloutBar;
@property(readonly, nonatomic) UIMenuController *menuController;

@end

