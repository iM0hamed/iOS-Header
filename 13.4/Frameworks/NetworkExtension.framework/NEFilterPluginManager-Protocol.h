//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NEFilterSettings, NSError;

@protocol NEFilterPluginManager
- (void)applySettings:(NEFilterSettings *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)acceptAgentClients;
- (void)setStatus:(long long)arg1 error:(NSError *)arg2;
- (void)createPacketChannelWithCompletionHandler:(void (^)(NSUUID *))arg1;
- (void)createContentFilterSocketWithCompletionHandler:(void (^)(NSFileHandle *))arg1;
@end

