//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SKUIStoreIdentifier;

__attribute__((visibility("hidden")))
@interface SKUIStoreItemRelationship : NSObject
{
    SKUIStoreIdentifier *_singleParent;
    NSSet *_chidItems;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *chidItems; // @synthesize chidItems=_chidItems;
@property(readonly, copy, nonatomic) SKUIStoreIdentifier *singleParent; // @synthesize singleParent=_singleParent;
- (id)initWithParent:(id)arg1 andChildren:(id)arg2;

@end

