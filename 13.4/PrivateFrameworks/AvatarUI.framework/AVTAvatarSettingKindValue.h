//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/NSCopying-Protocol.h>

@interface AVTAvatarSettingKindValue : NSObject <NSCopying>
{
    CDStruct_597dd055 _settingKind;
}

+ (id)valueWithSettingKind:(CDStruct_597dd055)arg1;
@property(readonly, nonatomic) CDStruct_597dd055 settingKind; // @synthesize settingKind=_settingKind;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSettingKind:(CDStruct_597dd055)arg1;

@end

