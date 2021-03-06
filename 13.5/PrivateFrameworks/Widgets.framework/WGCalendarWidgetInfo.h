//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Widgets/WGWidgetInfo.h>

@class NSDate;

@interface WGCalendarWidgetInfo : WGWidgetInfo
{
    NSDate *_date;
}

+ (_Bool)isCalendarExtension:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setDate:) NSDate *date; // @synthesize date=_date;
- (void)_handleSignificantTimeChange:(id)arg1;
- (void)_resetIconsImpl;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (id)_queue_iconWithSize:(struct CGSize)arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4;
- (id)initWithExtension:(id)arg1;

@end

