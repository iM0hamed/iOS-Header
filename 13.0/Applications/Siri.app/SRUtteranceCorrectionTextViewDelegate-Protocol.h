//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UITextViewDelegate-Protocol.h"

@class SRSpeechRecognizedCorrectionTextView;

@protocol SRUtteranceCorrectionTextViewDelegate <UITextViewDelegate>
- (void)utteranceTextDidReceiveReturnKey:(SRSpeechRecognizedCorrectionTextView *)arg1;
- (void)utteranceTextDidResignFirstResponder:(SRSpeechRecognizedCorrectionTextView *)arg1;
- (void)utteranceTextDidBecomeFirstResponder:(SRSpeechRecognizedCorrectionTextView *)arg1;
@end

