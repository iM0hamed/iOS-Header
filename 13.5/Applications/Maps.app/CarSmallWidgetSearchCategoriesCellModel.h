//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ShortcutsRowCellModel.h"

@class BrowseCategory, UIImage;

__attribute__((visibility("hidden")))
@interface CarSmallWidgetSearchCategoriesCellModel : ShortcutsRowCellModel
{
    UIImage *_image;
    BrowseCategory *_category;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BrowseCategory *category; // @synthesize category=_category;
- (_Bool)vibrantBackground;
- (id)image;
- (id)subtitle;
- (id)title;
- (id)_maps_diffableDataSourceIdentifier;
- (id)initWithBrowseCategory:(id)arg1;

@end

