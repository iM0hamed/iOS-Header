//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class NSString;

@protocol MTSource <NSObject>
- (NSString *)sourceIdentifier;

@optional
- (_Bool)dontNotify;
- (_Bool)donatesIntent;
- (_Bool)isFromOtherDevice;
@end

