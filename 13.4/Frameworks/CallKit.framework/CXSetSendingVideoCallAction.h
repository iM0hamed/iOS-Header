//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@interface CXSetSendingVideoCallAction : CXCallAction
{
    _Bool _sendingVideo;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isSendingVideo) _Bool sendingVideo; // @synthesize sendingVideo=_sendingVideo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 sendingVideo:(_Bool)arg2;

@end

