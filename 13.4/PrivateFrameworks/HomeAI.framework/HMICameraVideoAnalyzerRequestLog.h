//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMICameraVideoAnalyzerRequest, NSString;

__attribute__((visibility("hidden")))
@interface HMICameraVideoAnalyzerRequestLog : HMFObject <HMFLogging>
{
    HMICameraVideoAnalyzerRequest *_request;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) __weak HMICameraVideoAnalyzerRequest *request; // @synthesize request=_request;
- (id)stringWithFormat:(id)arg1;
- (void)debug:(id)arg1;
- (void)info:(id)arg1;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

