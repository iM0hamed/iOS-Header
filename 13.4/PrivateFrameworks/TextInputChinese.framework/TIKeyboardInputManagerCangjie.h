//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputChinese/TIKeyboardInputManagerShapeBased.h>

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased
{
    _Bool _suchengEnabled;
    _Bool _supportsEnglish;
}

+ (Class)wordSearchClass;
@property(nonatomic) _Bool supportsEnglish; // @synthesize supportsEnglish=_supportsEnglish;
@property(nonatomic) _Bool suchengEnabled; // @synthesize suchengEnabled=_suchengEnabled;
- (id)sortingMethods;
- (_Bool)isPunctuationInput;
- (id)cangjieAlphabetSet;
- (id)cangjieSet;
- (unsigned long long)cangjieInputType:(id)arg1 fromPopupVariant:(_Bool)arg2;
- (id)nonstopPunctuationCharacters;
- (id)defaultCandidate;
- (unsigned long long)initialSelectedIndex;
- (_Bool)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(_Bool)arg2;
- (void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2;
- (_Bool)selectedCandidateIsEnglish;
- (_Bool)firstCandidateIsEnglish;
- (void)updateMarkedText;
- (id)formattedSearchString;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(_Bool)arg3;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)syncWordSearch;
- (void)syncToLayoutState:(id)arg1;
- (_Bool)supportsNumberKeySelection;
- (id)keyboardBehaviors;

@end

