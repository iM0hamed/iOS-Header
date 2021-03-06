//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface URLBagTimer : NSObject
{
    NSString *_bagKey;
    NSString *_cellularBagKey;
    double _defaultInterval;
    double _defaultWindow;
    CDUnknownBlockType _eventBlock;
    NSString *_identifier;
    _Bool _started;
    CDUnknownBlockType _preconditionsBlock;
    id _taskObserver;
}

+ (id)subscriptionRenewTimer;
+ (id)playActivityFeedFlushTimer;
@property(copy, nonatomic) CDUnknownBlockType preconditionsBlock; // @synthesize preconditionsBlock=_preconditionsBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(nonatomic) double defaultWindow; // @synthesize defaultWindow=_defaultWindow;
@property(nonatomic) double defaultInterval; // @synthesize defaultInterval=_defaultInterval;
@property(copy, nonatomic) NSString *cellularBagKey; // @synthesize cellularBagKey=_cellularBagKey;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
- (void).cxx_destruct;
- (double)_windowWithUserDefaultsKey:(id)arg1;
- (id)_userDefaultsKeyWindowOverride;
- (id)_userDefaultsKeyWiFiOverride;
- (id)_userDefaultsKeyLastTimeCheck;
- (id)_userDefaultsKeyCellularOverride;
- (double)_timerIntervalWithBagKey:(id)arg1 userDefaultsKey:(id)arg2;
- (double)_timerInterval;
- (void)_setLastFireDate:(id)arg1;
- (void)_resetBackgroundTaskJobs;
- (double)_readTimeIntervalFromUserDefaultsKey:(id)arg1;
- (id)_nextFireDateWithInterval:(double)arg1;
- (void)_fireTimer;
- (void)_attemptFireForJob:(id)arg1 withName:(id)arg2;
- (void)_addJobWithDate:(id)arg1 window:(double)arg2 allowsCellular:(_Bool)arg3;
- (void)start;
- (void)reset;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

