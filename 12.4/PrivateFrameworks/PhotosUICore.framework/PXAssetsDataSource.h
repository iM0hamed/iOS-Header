//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@interface PXAssetsDataSource : PXSectionedDataSource
{
}

- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (_Bool)hasCurationForAssetCollection:(id)arg1;
- (id)keyAssetsForAssetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)startingAssetReference;
- (id)assetReferenceForAssetReference:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (Class)objectReferenceClassForItem;
- (id)assetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)assetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)estimatedAssetsCountLocalizedString;
- (long long)aggregateMediaType;
- (long long)totalNumberOfItems;
- (id)photosGraphSuggestedContributions;
- (_Bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;
- (id)metadataAssetAtItemIndexPath:(struct PXSimpleIndexPath)arg1;

@end

