//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataSourceDelegate-Protocol.h"

@class DataSource;

@protocol ACDataSourceDelegate <DataSourceDelegate>

@optional
- (void)searchDataSource:(DataSource *)arg1 replaceQueryWithItem:(id)arg2;
- (void)searchDataSource:(DataSource *)arg1 addItem:(id)arg2;
- (_Bool)searchDataSource:(DataSource *)arg1 shouldFilterItem:(id)arg2;
@end

