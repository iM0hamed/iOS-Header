//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXAction, SXActionActivityGroup, SXActionPreviewActivity;

@protocol SXActionActivityProvider <NSObject>
- (id <SXActionActivityGroup>)activityGroupForAction:(id <SXAction>)arg1;

@optional
- (id <SXActionPreviewActivity>)previewActivityForAction:(id <SXAction>)arg1;
@end

