//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriTasks/STAlarmAction.h>

@class NSArray;

@interface STDeleteAlarmAction : STAlarmAction
{
    NSArray *_alarmIds;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)alarmIds;
- (id)_initWithAlarmIds:(id)arg1;

@end

