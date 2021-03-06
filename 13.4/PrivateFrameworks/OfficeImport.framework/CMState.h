//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OADColorMap, OADColorScheme, OCDDocument;

__attribute__((visibility("hidden")))
@interface CMState : NSObject
{
    OCDDocument *_document;
    NSMutableDictionary *components;
    NSMutableDictionary *htmlResource;
    NSString *mResourceUrlPrefix;
    OADColorMap *mColorMap;
    OADColorScheme *mColorScheme;
    id mResources;
    unsigned long long mSourceFormat;
    _Bool mIsThumbnail;
    _Bool mIsOnPhone;
    long long _textLevel;
}

- (void).cxx_destruct;
@property(retain) OCDDocument *document; // @synthesize document=_document;
@property unsigned long long sourceFormat; // @synthesize sourceFormat=mSourceFormat;
@property(retain) id resources; // @synthesize resources=mResources;
@property(retain) OADColorScheme *colorScheme; // @synthesize colorScheme=mColorScheme;
@property(retain) OADColorMap *colorMap; // @synthesize colorMap=mColorMap;
- (long long)textLevel;
- (void)popTextLevel;
- (void)pushTextLevel;
@property _Bool isOnPhone; // @synthesize isOnPhone=mIsOnPhone;
@property _Bool isThumbnail; // @synthesize isThumbnail=mIsThumbnail;
- (_Bool)isOffice12;
- (void)copyFromCMStateWithoutComponents:(id)arg1;
- (id)getHtmlResource;
- (void)setHtmlResource:(id)arg1;
- (id)resourceUrlPrefix;
- (void)setResourceUrlPrefix:(id)arg1;
- (void)setComponentWithName:(id)arg1 value:(id)arg2;
- (id)componentByName:(id)arg1;
- (id)init;

@end

