//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>
#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_canonicalName;
    NSString *_uniqueClientId;
}

+ (id)clientInfoForNavdPredictions;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *uniqueClientId; // @synthesize uniqueClientId=_uniqueClientId;
@property(copy, nonatomic) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isNavdClientInfo;
- (_Bool)isCalendarClientInfo;
- (id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

