//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingResetJob : PLCloudSharingJob
{
}

+ (void)resetAllLocalState;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;

@end

