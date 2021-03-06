//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface AAUICDPHelper : NSObject
{
    UIViewController *_presentingViewController;
    _Bool _forceInline;
}

+ (id)cdpContextForPrimaryAccountWithAuthenticationResults:(id)arg1;
+ (id)cdpContextForPrimaryAccount;
+ (id)cdpContextForAccount:(id)arg1;
+ (id)helperWithPresenter:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool forceInline; // @synthesize forceInline=_forceInline;
- (id)cdpStateControllerWithContext:(id)arg1;
- (id)cdpStateControllerForPrimaryAccount;

@end

