//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchResponseChanges;

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject
{
    long long _fetchReason;
    VUIMediaItemEntityTypesFetchResponse *_fetchResponse;
    VUIMediaItemEntityTypesFetchResponseChanges *_fetchChanges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponseChanges *fetchChanges; // @synthesize fetchChanges=_fetchChanges;
@property(retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *fetchResponse; // @synthesize fetchResponse=_fetchResponse;
@property(nonatomic) long long fetchReason; // @synthesize fetchReason=_fetchReason;
- (id)description;
- (id)initWithFetchReason:(long long)arg1 fetchResponse:(id)arg2;
- (id)init;

@end

