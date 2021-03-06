//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelFileAsset : MPModelObject
{
}

+ (id)allSupportedProperties;
+ (id)__qualityType_KEY;
+ (id)__purchaseBundleFilePath_KEY;
+ (id)__protectionType_KEY;
+ (id)__nonPurgeable_KEY;
+ (id)__fileSize_KEY;
+ (id)__filePath_KEY;

// Remaining properties
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(nonatomic, getter=isNonPurgeable) _Bool nonPurgeable; // @dynamic nonPurgeable;
@property(nonatomic) long long protectionType; // @dynamic protectionType;
@property(copy, nonatomic) NSString *purchaseBundleFilePath; // @dynamic purchaseBundleFilePath;
@property(nonatomic) long long qualityType; // @dynamic qualityType;

@end

