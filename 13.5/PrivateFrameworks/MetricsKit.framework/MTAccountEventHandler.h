//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTStandardEventHandler.h>

@protocol MTAccountEventHandlerDelegate;

@interface MTAccountEventHandler : MTStandardEventHandler
{
}

- (id)type:(id)arg1;
- (id)eventVersion:(id)arg1;
- (id)eventType;
- (id)knownFields;

// Remaining properties
@property(nonatomic) __weak id <MTAccountEventHandlerDelegate> delegate; // @dynamic delegate;

@end

