//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RAPAddressFields : NSObject
{
    NSString *_freeformAddress;
    NSString *_floor;
    NSString *_unit;
    NSString *_building;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *building; // @synthesize building=_building;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *floor; // @synthesize floor=_floor;
@property(copy, nonatomic) NSString *freeformAddress; // @synthesize freeformAddress=_freeformAddress;

@end

