//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TSUColor;

@interface TSPDataMetadata : TSPObject
{
    TSUColor *_fallbackColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) TSUColor *fallbackColor; // @synthesize fallbackColor=_fallbackColor;
-     // Error parsing type: v32@0:8^{DataMetadata=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Color}}16@24, name: saveToMessage:archiver:
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8r^{DataMetadata=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Color}}16@24, name: loadFromMessage:unarchiver:
- (void)loadFromUnarchiver:(id)arg1;
- (id)copyWithContext:(id)arg1;

@end

