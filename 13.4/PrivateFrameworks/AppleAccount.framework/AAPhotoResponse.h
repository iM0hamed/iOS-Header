//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSData, NSString, NSValue;

@interface AAPhotoResponse : AAResponse
{
    NSData *_photoData;
    NSValue *_cropRect;
    NSString *_serverCacheTag;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *serverCacheTag; // @synthesize serverCacheTag=_serverCacheTag;
@property(readonly, nonatomic) NSValue *cropRect; // @synthesize cropRect=_cropRect;
@property(readonly, nonatomic) NSData *photoData; // @synthesize photoData=_photoData;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

