//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface PULivePhotoEffectsToolController : PUPhotoEditToolController <UICollectionViewDelegate>
{
    NSArray *_collectionViewConstraints;
    id _editModelObserver;
    NSString *_analysisResultCacheKey;
    NSArray *__options;
    UICollectionView *__collectionView;
    UICollectionViewFlowLayout *__collectionViewLayout;
    NSDictionary *__analysisResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setAnalysisResult:) NSDictionary *_analysisResult; // @synthesize _analysisResult=__analysisResult;
@property(retain, nonatomic, setter=_setCollectionViewLayout:) UICollectionViewFlowLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property(retain, nonatomic, setter=_setCollectionView:) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(copy, nonatomic, setter=_setOptions:) NSArray *_options; // @synthesize _options=__options;
@property(copy, nonatomic) NSString *analysisResultCacheKey; // @synthesize analysisResultCacheKey=_analysisResultCacheKey;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

