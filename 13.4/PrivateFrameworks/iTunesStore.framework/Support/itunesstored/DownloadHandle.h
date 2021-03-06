//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface DownloadHandle : NSObject <NSCopying>
{
    long long _downloadID;
    long long _transactionID;
}

@property(readonly, nonatomic) long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) long long downloadID; // @synthesize downloadID=_downloadID;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2;
- (id)init;

@end

