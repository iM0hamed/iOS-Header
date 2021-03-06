//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HKChartCacheDataSource;

@interface HKInteractiveChartOverlayNamedDataSource : NSObject
{
    id <HKChartCacheDataSource> _dataSource;
    NSString *_name;
    CDUnknownBlockType _contextTitleForTimeScope;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType contextTitleForTimeScope; // @synthesize contextTitleForTimeScope=_contextTitleForTimeScope;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <HKChartCacheDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)initWithDataSource:(id)arg1 named:(id)arg2 withContextTitleForTimeScope:(CDUnknownBlockType)arg3;

@end

