//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MechanismBase/MechanismBase.h>

@interface MechanismACM : MechanismBase
{
    struct __ACMHandle *_acmContext;
    unsigned long long _acmFlags;
}

@property(readonly, nonatomic) unsigned long long acmFlags; // @synthesize acmFlags=_acmFlags;
@property(readonly, nonatomic) struct __ACMHandle *acmContext; // @synthesize acmContext=_acmContext;
- (id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 acmContextRecord:(id)arg3 request:(id)arg4;

@end

