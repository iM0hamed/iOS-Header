//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/NSCopying-Protocol.h>

@protocol HFDynamicFormattingValue, HFIconDescriptor;

@interface HUQuickControlViewProfile : NSObject <NSCopying>
{
    unsigned long long _controlSize;
    id <HFDynamicFormattingValue> _supplementaryFormattedValue;
    id <HFIconDescriptor> _decorationIconDescriptor;
}

@property(retain, nonatomic) id <HFIconDescriptor> decorationIconDescriptor; // @synthesize decorationIconDescriptor=_decorationIconDescriptor;
@property(retain, nonatomic) id <HFDynamicFormattingValue> supplementaryFormattedValue; // @synthesize supplementaryFormattedValue=_supplementaryFormattedValue;
@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double gestureDragCoefficient;

@end

