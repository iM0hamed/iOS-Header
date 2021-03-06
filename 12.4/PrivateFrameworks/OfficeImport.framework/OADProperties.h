//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OADProperties : NSObject
{
    OADProperties *mParent;
    unsigned int mIsMerged:1;
    unsigned int mIsMergedWithParent:1;
}

+ (id)defaultProperties;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeUnnecessaryOverrides;
- (_Bool)isAnythingOverridden;
- (void)flatten;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (void)changeParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isMergedPropertyForSelector:(SEL)arg1;
- (id)possiblyInexistentOverrideForSelector:(SEL)arg1;
- (id)overrideForSelector:(SEL)arg1;
- (id)overrideForSelector:(SEL)arg1 mustExist:(_Bool)arg2;
- (void)setMergedWithParent:(_Bool)arg1;
- (_Bool)isMergedWithParent;
- (void)setMerged:(_Bool)arg1;
- (_Bool)isMerged;
- (void)setParent:(id)arg1;
- (void)p_setParent:(id)arg1;
- (void)dealloc;
- (id)parent;
- (id)initWithDefaults;
- (id)init;

@end

