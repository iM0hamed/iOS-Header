//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGPictureInPictureApplication : NSObject
{
    int _processIdentifier;
    NSString *_bundleIdentifier;
}

+ (id)pictureInPictureApplicationWithProcessIdentifier:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
- (void)dealloc;
- (id)init;
- (id)initWithProcessIdentifier:(int)arg1;

@end

