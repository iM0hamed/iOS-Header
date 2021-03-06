//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFArchiveWriter : NSObject
{
    struct archive *_archive;
}

@property(readonly, nonatomic) struct archive *archive; // @synthesize archive=_archive;
- (void)dealloc;
- (_Bool)finishWithError:(id *)arg1;
- (_Bool)writeArchiveEntry:(id)arg1 error:(id *)arg2;
- (id)initWithDestinationURL:(id)arg1 format:(id)arg2 error:(id *)arg3;

@end

