//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NSNumber;
@protocol HUStepperCellDelegate;

@protocol HUStepperCellProtocol <NSObject>
@property(copy, nonatomic) NSNumber *stepperValue;
@property(copy, nonatomic) NSNumber *stepValue;
@property(copy, nonatomic) NSNumber *maximumValue;
@property(copy, nonatomic) NSNumber *minimumValue;
@property(nonatomic) __weak id <HUStepperCellDelegate> stepperCellDelegate;
@end

