//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SHSignature;

@interface SHMatch : NSObject
{
    NSArray *_mediaItems;
    SHSignature *_signature;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SHSignature *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
- (id)initWithMediaItems:(id)arg1 forSignature:(id)arg2;

@end

