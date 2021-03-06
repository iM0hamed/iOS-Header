//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@class TIAutocorrectionList;

@interface TICandidatesOfferedEvent : TIUserAction
{
    TIAutocorrectionList *_candidates;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) TIAutocorrectionList *candidates; // @synthesize candidates=_candidates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 keyboardState:(id)arg2;

@end

