//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentInteractionTestRunner.h"

@interface ScrollTestProcessor : ContentInteractionTestRunner
{
    _Bool _startedScrollTest;
    int _scrollDelta;
}

@property(nonatomic) _Bool startedScrollTest; // @synthesize startedScrollTest=_startedScrollTest;
@property(nonatomic) int scrollDelta; // @synthesize scrollDelta=_scrollDelta;
- (_Bool)performActionForPage:(id)arg1;
- (_Bool)startPageAction:(id)arg1;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;

@end

