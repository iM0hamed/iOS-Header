//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCDemoMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation
{
}

- (id)_feedGroupForGroupConfig:(id)arg1 tagsByID:(id)arg2 headlinesByID:(id)arg3;
- (id)feedGroupsWithGroupConfigs:(id)arg1 tagsByID:(id)arg2 headlinesByID:(id)arg3;
- (id)_tagsPromiseWithGroupConfigs:(id)arg1;
- (id)_headlinesPromiseWithGroupConfigs:(id)arg1;
- (id)_demoGroupConfigsPromise;
- (void)performOperation;

@end

