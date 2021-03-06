//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface UsedApp : NSObject <NSCopying>
{
    _Bool _usingLasModified;
    NSString *_bundleID;
    NSDate *_lastLaunched;
    NSString *_matchedBucket;
    long long _usageWindowMatchType;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usingLasModified; // @synthesize usingLasModified=_usingLasModified;
@property(nonatomic) long long usageWindowMatchType; // @synthesize usageWindowMatchType=_usageWindowMatchType;
@property(copy, nonatomic) NSString *matchedBucket; // @synthesize matchedBucket=_matchedBucket;
@property(copy, nonatomic) NSDate *lastLaunched; // @synthesize lastLaunched=_lastLaunched;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBundleID:(id)arg1;

@end

