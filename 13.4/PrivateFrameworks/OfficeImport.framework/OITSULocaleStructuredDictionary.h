//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLocale, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OITSULocaleStructuredDictionary : NSObject
{
    NSDictionary *_dictionary;
    NSMutableDictionary *_cldrLanguageScriptRegionForKey;
    NSMutableDictionary *_cldrLanguageScriptForKey;
    NSMutableDictionary *_workingDictionary;
    NSLocale *_workingLocale;
    _Bool _workingLocaleIsAutoUpdating;
    unsigned long long _autoUpdatingCount;
}

+ (id)numberFormatterSymbolsFallbackDictionary;
+ (id)dateFormatterSymbolsFallbackDictionary;
+ (id)dictionaryWithContentsOfFileForLocale:(id)arg1 inDirectory:(id)arg2 inBundle:(id)arg3;
- (void).cxx_destruct;
- (id)p_makeLocaleIdentifierWithLanguage:(id)arg1 script:(id)arg2 region:(id)arg3;
- (_Bool)p_extractLanguage:(id *)arg1 script:(id *)arg2 region:(id *)arg3 fromString:(id)arg4;
- (void)p_remakeWorkingDictionaryWithLocale:(id)arg1;
- (id)objectForKey:(id)arg1 locale:(id)arg2;
- (id)initWithDictionary:(id)arg1 locale:(id)arg2;

@end

