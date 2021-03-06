//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPQuestion.h"

#import "RAPMenuItem-Protocol.h"
#import "RAPWhichOneQuestionProtocol-Protocol.h"

@class NSArray, NSString, RAPDirectionsCategoryQuestion, Route, UIImage;
@protocol RAPUserDirectionRequest;

__attribute__((visibility("hidden")))
@interface RAPDirectionsWhichOneQuestion : RAPQuestion <RAPMenuItem, RAPWhichOneQuestionProtocol>
{
    unsigned long long _transportType;
    Route *_route;
    _Bool _isInitialQuestion;
    RAPDirectionsCategoryQuestion *_followUpQuestion;
    NSArray *_selectableDirectionsRequests;
    id <RAPUserDirectionRequest> _selectedValue;
    NSString *_localizedServerControlledDescription;
}

+ (_Bool)_canDisplayForContext:(id)arg1 transportMode:(unsigned long long)arg2;
+ (id)localizedTransitTitle;
@property(copy, nonatomic) NSString *localizedServerControlledDescription; // @synthesize localizedServerControlledDescription=_localizedServerControlledDescription;
@property(retain, nonatomic) id <RAPUserDirectionRequest> selectedValue; // @synthesize selectedValue=_selectedValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) int userAction;
- (_Bool)_followupQuestionsAreDirectionsRelated;
- (void)_fillSubmissionParameters:(id)arg1;
- (void)_fillSubmittableProblem:(id)arg1;
- (id)_alternateAuxiliaryControlsRecording;
@property(readonly, nonatomic) RAPDirectionsCategoryQuestion *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
- (_Bool)_isRecursivelyComplete;
- (_Bool)isComplete;
@property(readonly, nonatomic) Route *routeFromRecording;
@property(readonly, nonatomic) NSArray *selectableDirectionsRequests; // @synthesize selectableDirectionsRequests=_selectableDirectionsRequests;
@property(readonly, nonatomic) NSString *localizedSelectDirectionsRequestPrompt;
- (int)analyticTarget;
@property(readonly, nonatomic) long long questionCategory;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 selectableDirectionRequests:(id)arg3;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 transportType:(unsigned long long)arg3 selectableRequests:(id)arg4;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 transportType:(unsigned long long)arg3;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(readonly, nonatomic) NSString *localizedTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

