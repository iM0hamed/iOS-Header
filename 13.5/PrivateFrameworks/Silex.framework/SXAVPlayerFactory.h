//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAVPlayerFactory-Protocol.h>

@class NSString;
@protocol SXAVPlayerItemFactory;

@interface SXAVPlayerFactory : NSObject <SXAVPlayerFactory>
{
    int _audioMode;
    id <SXAVPlayerItemFactory> _playerItemFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXAVPlayerItemFactory> playerItemFactory; // @synthesize playerItemFactory=_playerItemFactory;
@property(readonly, nonatomic) int audioMode; // @synthesize audioMode=_audioMode;
- (id)createPlayerWithURL:(id)arg1;
- (id)initWithAudioMode:(int)arg1 playerItemFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

