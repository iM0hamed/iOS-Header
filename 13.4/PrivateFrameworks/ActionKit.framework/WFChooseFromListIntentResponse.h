//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class WFChooseFromListItem;

@interface WFChooseFromListIntentResponse : INIntentResponse
{
    long long _code;
}

@property(nonatomic) long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

// Remaining properties
@property(copy, nonatomic) WFChooseFromListItem *selectedItem; // @dynamic selectedItem;

@end

