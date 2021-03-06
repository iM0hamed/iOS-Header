//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MapSelectionManagerState, SearchFieldItem, SearchInfo;
@protocol VenueCardItem;

@protocol VenueCardCoordinatorDataSource
- (SearchFieldItem *)searchFieldItemForVenueCardItem:(id <VenueCardItem>)arg1 previousItemInStack:(id <VenueCardItem>)arg2;
- (SearchInfo *)searchInfoForVenueCardItem:(id <VenueCardItem>)arg1 previousItemInStack:(id <VenueCardItem>)arg2;
- (MapSelectionManagerState *)mapSelectionStateForVenueCardItem:(id <VenueCardItem>)arg1 savePlaceCardSelectionState:(_Bool)arg2;
@end

