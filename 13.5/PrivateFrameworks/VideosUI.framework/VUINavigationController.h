//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAppNavigationController.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, VUIDocumentUIConfiguration;

__attribute__((visibility("hidden")))
@interface VUINavigationController : VUIAppNavigationController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>
{
    UITapGestureRecognizer *_gesture;
    VUIDocumentUIConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUIDocumentUIConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

