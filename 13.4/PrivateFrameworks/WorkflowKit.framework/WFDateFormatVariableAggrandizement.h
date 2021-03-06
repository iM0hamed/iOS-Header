//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString;

@interface WFDateFormatVariableAggrandizement : WFVariableAggrandizement
{
}

+ (id)defaultAggrandizement;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)processedContentClasses:(id)arg1;
@property(readonly, nonatomic) _Bool includesTimeForISO8601;
@property(readonly, nonatomic) NSString *customDateFormat;
@property(readonly, nonatomic) NSString *relativeDateStyle;
@property(readonly, nonatomic) NSString *timeStyle;
@property(readonly, nonatomic) NSString *dateStyle;
- (id)initWithCustomDateFormat:(id)arg1;
- (id)initWithRFC2822DateStyle;
- (id)initWithISO8601DateStyleAndTime:(_Bool)arg1;
- (id)initWithRelativeTimeStyle;
- (id)initWithRelativeDateStyle:(id)arg1 timeStyle:(id)arg2;
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3;
- (id)initWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includesTimeForISO8601:(_Bool)arg5;

@end

