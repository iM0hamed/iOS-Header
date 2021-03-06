//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SFSearchResult, SearchUIDragSource, SearchUIForceTouchGestureRecognizer, SearchUIImageView;
@protocol SearchUIFeedbackDelegate;

@interface SearchUIAppIconButton : UIButton
{
    id <SearchUIFeedbackDelegate> _delegate;
    SearchUIImageView *_appIconImageView;
    SearchUIForceTouchGestureRecognizer *_forceTouchRecognizer;
    SFSearchResult *_result;
    SearchUIDragSource *_dragSource;
}

@property(retain) SearchUIDragSource *dragSource; // @synthesize dragSource=_dragSource;
@property(retain) SFSearchResult *result; // @synthesize result=_result;
@property(retain) SearchUIForceTouchGestureRecognizer *forceTouchRecognizer; // @synthesize forceTouchRecognizer=_forceTouchRecognizer;
@property(retain) SearchUIImageView *appIconImageView; // @synthesize appIconImageView=_appIconImageView;
@property __weak id <SearchUIFeedbackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)searchUIForceTouchGestureRecognizer;
- (id)dragObject;
- (void)addForceTouchGestureRecognizerIfNecessaryForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)iconButtonPressed;
- (id)init;

@end

