//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCalendar.h>

@class NSDate, NSLocale, NSTimeZone;

@interface _NSAutoCalendar : NSCalendar
{
    struct _opaque_pthread_mutex_t _lock;
    NSCalendar *cal;
    NSLocale *changedLocale;
    NSTimeZone *changedTimeZone;
    unsigned long long changedFirstWeekday;
    unsigned long long changedMinimumDaysinFirstWeek;
    NSDate *changedGregorianStartDate;
}

@end

