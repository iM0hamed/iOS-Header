//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ALSCGreenClient : NSObject
{
    _Bool _cachingAllowed;
    _Bool _key1Value;
    _Bool _key2Value;
    _Bool _key3Value;
}

@property(nonatomic) _Bool key3Value; // @synthesize key3Value=_key3Value;
@property(nonatomic) _Bool key2Value; // @synthesize key2Value=_key2Value;
@property(nonatomic) _Bool key1Value; // @synthesize key1Value=_key1Value;
- (_Bool)_attemptReadingValuesFromDiskAndUpdateFileState;
- (_Bool)_readGreenKeysFromDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool valuesFinalized;
- (id)init;

@end

