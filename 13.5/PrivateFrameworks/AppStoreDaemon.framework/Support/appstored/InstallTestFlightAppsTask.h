//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray;

@interface InstallTestFlightAppsTask : Task
{
    NSArray *_installs;
    _Bool _reportRemoteProgress;
    NSArray *_processedExternalIDs;
}

+ (id)_transcodeDataArray:(id)arg1;
+ (id)_packageWithXPCMetadata:(id)arg1;
+ (id)_metadataWithXPCMetadata:(id)arg1;
+ (id)_installWithXPCMetadata:(id)arg1;
+ (id)taskWithXPCAppMetadata:(id)arg1 forDevice:(id)arg2 requestToken:(id)arg3;
- (void).cxx_destruct;
- (void)main;
@property(readonly) NSArray *processedExternalIDs; // @synthesize processedExternalIDs=_processedExternalIDs;
- (id)initWithInstalls:(id)arg1;

@end

