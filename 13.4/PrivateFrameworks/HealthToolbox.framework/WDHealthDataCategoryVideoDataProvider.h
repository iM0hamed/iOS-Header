//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDisplayCategory, NSString;

__attribute__((visibility("hidden")))
@interface WDHealthDataCategoryVideoDataProvider : NSObject
{
    HKDisplayCategory *_category;
    NSString *_importanceText;
    NSString *_descriptionText;
    NSString *_videoPosterImageName;
}

+ (id)videoURLManagerIdentifierForOnboarding;
+ (id)videoPosterImageNameForOnboarding;
+ (id)videoPosterImageNameForCategory:(id)arg1;
+ (id)videoPosterImageNameWithName:(id)arg1;
+ (id)descriptionTextForCategory:(id)arg1;
- (void).cxx_destruct;
- (id)videoURLManagerIdentifier;
- (id)videoPosterImageName;
- (id)descriptionText;
- (id)initWithCategory:(id)arg1;

@end

