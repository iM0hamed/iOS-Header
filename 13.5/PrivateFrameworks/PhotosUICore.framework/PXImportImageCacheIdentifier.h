//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PXImportImageCacheIdentifier : NSObject
{
    NSString *_assetUuid;
    unsigned long long _sizeType;
    long long _cacheIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long cacheIndex; // @synthesize cacheIndex=_cacheIndex;
@property(nonatomic) unsigned long long sizeType; // @synthesize sizeType=_sizeType;
@property(copy, nonatomic) NSString *assetUuid; // @synthesize assetUuid=_assetUuid;

@end

