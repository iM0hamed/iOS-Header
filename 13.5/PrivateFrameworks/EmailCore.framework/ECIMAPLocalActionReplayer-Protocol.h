//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@protocol ECIMAPLocalActionReplayer
@property(retain, nonatomic) id <ECIMAPServerInterface> serverInterface;
@property(nonatomic) __weak id <ECIMAPLocalActionReplayerDelegate> delegate;
@end

