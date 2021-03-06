//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DOCTagsCollectionViewDelegate-Protocol.h"
#import "_TtP5Files30DOCItemInfoContentTagsDelegate_-Protocol.h"

@class FPItem, _TtC5Files21DOCFileProviderSource, _TtC5Files32DOCItemInfoContentViewController;
@protocol _TtP5Files34DOCBrowserContainedActionReporting_;

@interface DOCItemInfoViewController : UIViewController <DOCTagsCollectionViewDelegate, _TtP5Files30DOCItemInfoContentTagsDelegate_>
{
    _TtC5Files21DOCFileProviderSource *_source;
    FPItem *_item;
    id <_TtP5Files34DOCBrowserContainedActionReporting_> _actionReporting;
    _Bool _isInfoInPopoverMode;
    _Bool _needsInitialPreferredContentSize;
    _Bool _viewDidAppear;
    _TtC5Files32DOCItemInfoContentViewController *_contentViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TtC5Files32DOCItemInfoContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
@property(nonatomic) _Bool needsInitialPreferredContentSize; // @synthesize needsInitialPreferredContentSize=_needsInitialPreferredContentSize;
@property(nonatomic) _Bool isInfoInPopoverMode; // @synthesize isInfoInPopoverMode=_isInfoInPopoverMode;
- (void)beginAddTagsWithItem:(id)arg1 controller:(id)arg2;
- (void)tagView:(id)arg1 didDeleteTag:(id)arg2;
- (void)displayAddTagsView;
- (void)displayTagView;
- (void)tagsCollectionView:(id)arg1 didSelectAddTagButton:(id)arg2;
- (id)item;
- (void)_updateNavigationBarVisibilityAnimated:(_Bool)arg1;
- (void)updatePreferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_updatePreferredContentSizeForFirstAppearance;
- (void)viewDidLoad;
- (id)initWithItem:(id)arg1 source:(id)arg2 configuration:(id)arg3 actionReporting:(id)arg4;

@end

