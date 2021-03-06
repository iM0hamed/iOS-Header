//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GTTransportMessage;

@interface GTBufferedSendOperation : NSObject
{
    GTTransportMessage *_message;
    GTTransportMessage *_replyTo;
    struct dispatch_queue_s *_queue;
    unsigned long long _timeout;
    CDUnknownBlockType _replyBlock;
}

@property(nonatomic) CDUnknownBlockType replyBlock; // @synthesize replyBlock=_replyBlock;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) struct dispatch_queue_s *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) GTTransportMessage *replyTo; // @synthesize replyTo=_replyTo;
@property(retain, nonatomic) GTTransportMessage *message; // @synthesize message=_message;
- (void)dealloc;

@end

