//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UITextReplacementCandidate : TIKeyboardCandidateSingle
{
    UITextReplacement *_replacement;
}

+ (id)textReplacementCandidateForTextReplacement:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITextReplacement *replacement; // @synthesize replacement=_replacement;
- (id)label;
- (id)_initWithTextReplacement:(id)arg1;

@end

