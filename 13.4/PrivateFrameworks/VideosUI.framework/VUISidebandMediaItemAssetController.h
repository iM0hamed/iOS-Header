//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/TVPDownloadDelegate-Protocol.h>
#import <VideosUI/VUIDownloadManagerDelegate-Protocol.h>
#import <VideosUI/VUIMediaEntityAssetController-Protocol.h>

@class NSString, TVPDownload, VUIMediaEntityAssetControllerState, VUIMediaEntityType, VUIVideoManagedObject;
@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaItemAssetController : NSObject <VUIDownloadManagerDelegate, TVPDownloadDelegate, VUIMediaEntityAssetController>
{
    VUIVideoManagedObject *_videoManagedObjectInternal;
    NSObject<VUIMediaEntityIdentifier> *_mediaEntityIdentifierInternal;
    id <VUIMediaEntityAssetControllerDelegate> _delegateInternal;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_completionDispatchQueueInternal;
    VUIMediaEntityAssetControllerState *_stateInternal;
    TVPDownload *_downloadInternal;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TVPDownload *downloadInternal; // @synthesize downloadInternal=_downloadInternal;
@property(retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal; // @synthesize stateInternal=_stateInternal;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal; // @synthesize completionDispatchQueueInternal=_completionDispatchQueueInternal;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegateInternal; // @synthesize delegateInternal=_delegateInternal;
@property(retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifierInternal; // @synthesize mediaEntityIdentifierInternal=_mediaEntityIdentifierInternal;
@property(retain, nonatomic) VUIVideoManagedObject *videoManagedObjectInternal; // @synthesize videoManagedObjectInternal=_videoManagedObjectInternal;
- (void)_updateDownloadStateAndNotifyDelegates;
- (void)_updateObservedDownload;
- (void)download:(id)arg1 progressDidChange:(double)arg2;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)cancelAndRemoveDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)startDownloadAllowingCellular:(_Bool)arg1 quality:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property(readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property(readonly, nonatomic) _Bool supportsStartingDownload;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegate;
@property(readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property(readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithVideoManagedObject:(id)arg1 mediaEntityIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

