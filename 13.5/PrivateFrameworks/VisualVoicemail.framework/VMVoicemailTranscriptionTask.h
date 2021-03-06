//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VMVoicemailTranscriptionController;
@protocol OS_dispatch_queue;

@interface VMVoicemailTranscriptionTask : NSObject
{
    _Bool _taskRunning;
    _Bool _hasInsomniaAssertion;
    VMVoicemailTranscriptionController *_transcriptionController;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

+ (void)resetRetranscriptionTaskState;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasInsomniaAssertion; // @synthesize hasInsomniaAssertion=_hasInsomniaAssertion;
@property(nonatomic, getter=isTaskRunning) _Bool taskRunning; // @synthesize taskRunning=_taskRunning;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) __weak VMVoicemailTranscriptionController *transcriptionController; // @synthesize transcriptionController=_transcriptionController;
- (void)retranscribeAllVoicemails;
- (void)_endRetranscribingTask;
- (void)_startRetranscribingVoicemailsIfNecessaryTranscribingAllVoicemails:(_Bool)arg1;
- (void)processTranscriptForVoicemail:(id)arg1;
- (id)allVoicemailsTranscribedWithoutConfidence;
- (_Bool)voicemailWasTranscribedWithoutConfidence:(id)arg1;
- (id)allVoicemailsWithoutTranscription;
- (id)allVoicemailsWithTranscription;
- (id)allVoicemails;
- (id)voicemailsMatchingFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;
- (_Bool)alreadyAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (void)cancelAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (void)setAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (_Bool)confidenceModelExistsOnDevice;
- (_Bool)speechAssetHasConfidenceModel:(id)arg1;
- (id)speechAssetsWithConfidenceModelsOnDevice;
- (id)speechAssetsOnDevice;
- (_Bool)deviceHasSpeechAssets;
- (_Bool)shouldRunTranscriptionTask;
- (id)lastTaskExecutionDate;
- (void)setLastExecutionDate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

