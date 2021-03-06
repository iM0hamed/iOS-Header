//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUURLWrapper-Protocol.h>

@class NSData, NSString, NSURL, TSUURLTrackerFilePresenter;

__attribute__((visibility("hidden")))
@interface TSUURLTracker : NSObject <TSUURLWrapper>
{
    TSUURLTrackerFilePresenter *_filePresenter;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)stop;
- (void)resume;
- (void)pause;
@property(readonly) NSData *bookmarkData;
- (id)URLAndReturnError:(id *)arg1;
@property(readonly) NSURL *URL;
- (void)dealloc;
- (id)initWithBookmarkData:(id)arg1 delegate:(id)arg2;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

