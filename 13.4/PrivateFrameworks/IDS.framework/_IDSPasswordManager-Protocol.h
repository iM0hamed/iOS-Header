//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class NSString;

@protocol _IDSPasswordManager <NSObject>
- (void)setPassword:(NSString *)arg1 forUsername:(NSString *)arg2 onService:(NSString *)arg3 completionBlock:(void (^)(NSString *, NSString *, _Bool))arg4;
@end

