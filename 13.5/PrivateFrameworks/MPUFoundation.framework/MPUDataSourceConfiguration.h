//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MPUDataSourceConfiguration : NSObject
{
    Class _dataSourceClass;
    NSString *_dataSourceCachingKey;
    CDUnknownBlockType _defaultQueryCreationBlock;
    long long _entityType;
}

+ (id)configurationWithDataSourceClass:(Class)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long entityType; // @synthesize entityType=_entityType;
@property(copy, nonatomic) CDUnknownBlockType defaultQueryCreationBlock; // @synthesize defaultQueryCreationBlock=_defaultQueryCreationBlock;
@property(copy, nonatomic) NSString *dataSourceCachingKey; // @synthesize dataSourceCachingKey=_dataSourceCachingKey;
@property(readonly, nonatomic) Class dataSourceClass; // @synthesize dataSourceClass=_dataSourceClass;
- (id)initWithDataSourceClass:(Class)arg1;

@end

