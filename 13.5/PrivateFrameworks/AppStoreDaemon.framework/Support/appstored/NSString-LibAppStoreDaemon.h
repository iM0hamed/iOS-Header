//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSURL;

@interface NSString (LibAppStoreDaemon)
- (id)lib_volumePath;
- (id)lib_stringSantiziedAndTruncatedToLength:(unsigned long long)arg1;
- (id)lib_stringByLimitingToLength:(unsigned long long)arg1 addElipsis:(_Bool)arg2;
- (id)lib_stringByCopyingUTF8StringWithLength:(unsigned long long)arg1;
- (id)lib_digestMD5;
- (id)lib_accountDSIDValue;
@property(readonly) NSURL *tcr_url;
@property(readonly) unsigned long long tcr_unsignedLongLong;
@end

