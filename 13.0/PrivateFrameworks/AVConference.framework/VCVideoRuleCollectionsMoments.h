//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionsMoments : NSObject
{
    _Bool _isHEIFAndHEVCFormatEnabled;
}

+ (id)sharedInstance;
- (id)getMomentsVideoCodecs;
- (id)getMomentsImageTypes;
- (int)getMomentsCapabilities;
- (id)init;

@end

