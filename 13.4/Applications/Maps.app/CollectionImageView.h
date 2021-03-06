//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CollectionHandlerObserver-Protocol.h"

@class NSString, UIButton, UIImageView, UIVisualEffectView;
@protocol CollectionHandlerInfo, CollectionImageViewDelegate;

__attribute__((visibility("hidden")))
@interface CollectionImageView : UIView <CollectionHandlerObserver>
{
    UIImageView *_mainImageView;
    UIImageView *_glyphImageView;
    UIButton *_editButton;
    UIVisualEffectView *_visualEffectView;
    _Bool _editing;
    id <CollectionHandlerInfo> _collectionInfo;
    id <CollectionImageViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <CollectionImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <CollectionHandlerInfo> collectionInfo; // @synthesize collectionInfo=_collectionInfo;
- (void)layoutSubviews;
- (void)_createViews;
- (void)didMoveToWindow;
- (void)_addVibrancyIfNeeded;
- (void)_updateGlyph;
- (void)_updateImages;
- (void)_enableShadow:(_Bool)arg1 imageView:(id)arg2;
- (void)collectionHandlerContentUpdated:(id)arg1;
- (void)collectionHandlerInfoUpdated:(id)arg1;
- (void)imageAction:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

