//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface TSCH3DShaderEffectsStates : NSObject <NSCopying>
{
    NSMutableDictionary *mObjects;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (void)setState:(id)arg1 forStateInfo:(id)arg2;
- (id)stateForStateInfo:(id)arg1 createIfNil:(_Bool)arg2;
- (id)valueStateForKey:(id)arg1;
- (void)setValueState:(id)arg1 forKey:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)init;

@end

