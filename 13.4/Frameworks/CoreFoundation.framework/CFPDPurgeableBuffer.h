//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreFoundation/CFPDDataBuffer.h>

__attribute__((visibility("hidden")))
@interface CFPDPurgeableBuffer : CFPDDataBuffer
{
    struct __CFData *handle;
    unsigned long long allocSize;
    _Bool safe;
    _Bool usedMalloc;
}

- (void)dealloc;
- (_Bool)purgable;
- (void)endAccessing;
- (_Bool)beginAccessing;
- (unsigned long long)length;
- (void *)bytes;
- (id)initWithPropertyList:(void *)arg1;
- (id)initWithFileDescriptor:(int)arg1 size:(unsigned long long)arg2;

@end

