//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSContextRelativePoint, NSString;

@interface PUIDPointerRecenteringContext : NSObject
{
    int _restrictingToPID;
    BKSContextRelativePoint *_contextRelativePointerPosition;
    NSString *_displayUUID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int restrictingToPID; // @synthesize restrictingToPID=_restrictingToPID;
@property(readonly, copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
@property(readonly, nonatomic) BKSContextRelativePoint *contextRelativePointerPosition; // @synthesize contextRelativePointerPosition=_contextRelativePointerPosition;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithContextRelativePointerPosition:(id)arg1 displayUUID:(id)arg2 restrictingToPID:(int)arg3;

@end

