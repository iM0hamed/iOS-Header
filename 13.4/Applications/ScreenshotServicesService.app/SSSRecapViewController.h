//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UINavigationBarDelegate-Protocol.h"

@class NSString, RCPTimelineView, RCPVizualizerView, SSSScreenshot, UINavigationBar;

@interface SSSRecapViewController : UIViewController <UINavigationBarDelegate>
{
    RCPTimelineView *_timelineView;
    RCPVizualizerView *_traceView;
    UINavigationBar *_topBar;
    SSSScreenshot *_screenshot;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void)tapToRadar:(id)arg1 screenshot:(id)arg2;
- (id)tapToRadarURL;
- (void)_sharePushed:(id)arg1;
- (int)_preferredStatusBarVisibility;
- (void)viewDidLayoutSubviews;
- (long long)positionForBar:(id)arg1;
- (void)_donePushed:(id)arg1;
- (void)viewDidLoad;
- (void)finishLoadingScreenshot;
- (void)loadScreenshot;
- (id)initWithScreenshot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

