//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFLoggable-Protocol.h>

@class NSMutableArray, NSString;

@interface MFFileCompressionQueue : NSObject <EFLoggable>
{
    struct os_unfair_lock_s _fileCompressionQueueLock;
    NSMutableArray *_fileCompressionQueue;
}

+ (id)sharedInstance;
+ (id)log;
@property(nonatomic) struct os_unfair_lock_s fileCompressionQueueLock; // @synthesize fileCompressionQueueLock=_fileCompressionQueueLock;
@property(retain, nonatomic) NSMutableArray *fileCompressionQueue; // @synthesize fileCompressionQueue=_fileCompressionQueue;
- (void).cxx_destruct;
- (long long)size;
- (id)nextFile;
- (_Bool)hasNext;
- (void)addFile:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

