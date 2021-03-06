//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet;

@interface MusicGenreResourceImagesCatalog : NSObject
{
    NSDictionary *_genreMappings;
    NSMutableSet *_unknownGenres;
}

+ (id)sharedGenreResourceImagesCatalog;
- (void).cxx_destruct;
- (id)_baseNameOfImageForGenreNamed:(id)arg1;
- (id)resourceURLForGenreNamed:(id)arg1;
- (void)registerGenreResouceImages;
- (id)nameOfImageForGenreNamed:(id)arg1;
- (id)init;

@end

