//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface EKExceptionDate : EKObject <NSCopying>
{
}

+ (Class)frozenClass;
@property(retain, nonatomic) NSDate *date;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1;

@end

