//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBImage, _SFPBPunchout;

@protocol _SFPBAppLink <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int imageAlign;
@property(retain, nonatomic) _SFPBImage *image;
@property(retain, nonatomic) _SFPBPunchout *appPunchout;
@property(copy, nonatomic) NSString *title;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

