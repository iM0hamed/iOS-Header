//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBHomeAttribute, _INPBHomeContent, _INPBHomeEntity, _INPBIntentMetadata;

@protocol _INPBControlHomeIntent <NSObject>
+ (Class)entitiesType;
+ (Class)contentsType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long entitiesCount;
@property(copy, nonatomic) NSArray *entities;
@property(readonly, nonatomic) unsigned long long contentsCount;
@property(copy, nonatomic) NSArray *contents;
@property(readonly, nonatomic) _Bool hasAttribute;
@property(retain, nonatomic) _INPBHomeAttribute *attribute;
- (_INPBHomeEntity *)entitiesAtIndex:(unsigned long long)arg1;
- (void)addEntities:(_INPBHomeEntity *)arg1;
- (void)clearEntities;
- (_INPBHomeContent *)contentsAtIndex:(unsigned long long)arg1;
- (void)addContents:(_INPBHomeContent *)arg1;
- (void)clearContents;
@end

