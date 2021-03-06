//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNAudioOffsetEstimator : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;
    double _minimumObservableOffset;
    double _maximumObservableOffset;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) double maximumObservableOffset; // @synthesize maximumObservableOffset=_maximumObservableOffset;
@property(nonatomic) double minimumObservableOffset; // @synthesize minimumObservableOffset=_minimumObservableOffset;
@property(readonly, nonatomic) double offset;
@property(readonly, nonatomic) struct Box *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)sharedProcessorConfiguration;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (shared_ptr_f6ac7592)createGraph;
- (void)updateMinMaxDelayWithSampleRate:(float)arg1 micDelay:(float)arg2 refDelay:(float)arg3 eclen:(float)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

