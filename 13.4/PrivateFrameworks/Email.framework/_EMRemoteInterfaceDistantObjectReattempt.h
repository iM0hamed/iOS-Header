//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSInvocation;

__attribute__((visibility("hidden")))
@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject
{
    NSInvocation *_invocation;
    NSError *_error;
}

+ (id)recordedAttemptWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3;
- (void).cxx_destruct;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)perform;
- (id)debugDescription;
- (id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3;

@end

