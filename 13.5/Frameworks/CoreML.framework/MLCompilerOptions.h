//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MLCompilerOptions : NSObject
{
    _Bool _dryRun;
    NSString *_platform;
    NSString *_platformVersion;
}

+ (id)defaultOptions;
- (void).cxx_destruct;
@property(retain) NSString *platformVersion; // @synthesize platformVersion=_platformVersion;
@property(retain) NSString *platform; // @synthesize platform=_platform;
@property _Bool dryRun; // @synthesize dryRun=_dryRun;
- (id)init;

@end

