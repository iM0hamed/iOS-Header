//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CollectionHandler.h"

@class GEOURLCollectionStorage, MKCollectionStorageRefiner, NSString;

__attribute__((visibility("hidden")))
@interface URLCollectionHandler : CollectionHandler
{
    GEOURLCollectionStorage *_collectionStorage;
    NSString *_identifier;
    MKCollectionStorageRefiner *_storageRefiner;
    _Bool _isRefining;
}

- (void).cxx_destruct;
- (int)showAction;
- (_Bool)containsMapItem;
- (_Bool)canBeSaved;
- (void)rebuildContent:(id)arg1;
- (_Bool)loadingData;
- (void)_resolvePlaces;
- (id)title;
- (id)identifier;
- (id)initWithStorage:(id)arg1 collectionOperation:(id)arg2;

@end

