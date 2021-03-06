//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKCalendar, EKStructuredLocation, EKSuggestedEventInfo, NSArray, NSDate, NSString, NSTimeZone, NSURL, UIColor;

@interface EKUIAutocompleteSearchResult : NSObject
{
    _Bool _allDay;
    _Bool _suggested;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSString *_location;
    NSString *_locationWithoutPrediction;
    EKStructuredLocation *_preferredLocation;
    NSArray *_alarms;
    NSArray *_attendees;
    NSURL *_URL;
    NSString *_notes;
    EKCalendar *_calendar;
    UIColor *_calendarColor;
    EKSuggestedEventInfo *_suggestionInfo;
    NSString *_foundInBundleID;
    NSString *_uniqueID;
}

+ (_Bool)_participantShouldBeUsedForAutocomplete:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSString *foundInBundleID; // @synthesize foundInBundleID=_foundInBundleID;
@property(retain, nonatomic) EKSuggestedEventInfo *suggestionInfo; // @synthesize suggestionInfo=_suggestionInfo;
@property(nonatomic, getter=isSuggested) _Bool suggested; // @synthesize suggested=_suggested;
@property(retain, nonatomic) UIColor *calendarColor; // @synthesize calendarColor=_calendarColor;
@property(retain, nonatomic) EKCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(retain, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property(retain, nonatomic) EKStructuredLocation *preferredLocation; // @synthesize preferredLocation=_preferredLocation;
@property(retain, nonatomic) NSString *locationWithoutPrediction; // @synthesize locationWithoutPrediction=_locationWithoutPrediction;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithUniqueID:(id)arg1;

@end

