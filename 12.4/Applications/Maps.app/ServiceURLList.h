//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ServiceURLList : NSObject
{
    NSString *_serviceName;
    NSString *_defaultsKey;
    NSMutableArray *_names;
    NSMutableArray *_urls;
    NSMutableArray *_infos;
    NSString *_defaultCustomURLString;
    CDUnknownBlockType _callback;
}

+ (id)defaultServiceURLLists;
@property(copy, nonatomic) NSString *defaultCustomURLString; // @synthesize defaultCustomURLString=_defaultCustomURLString;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (id)infoAtIndex:(unsigned long long)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (id)URLAtIndex:(unsigned long long)arg1;
- (void)addURL:(id)arg1 withName:(id)arg2 info:(id)arg3;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSString *defaultsKey;
@property(readonly, nonatomic) NSString *serviceName;
- (id)initWithName:(id)arg1 defaultsKey:(id)arg2;

@end

