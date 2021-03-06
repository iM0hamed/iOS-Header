//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSDrawables/TSKArchivedSelection-Protocol.h>

@class NSString, TSDInfoHyperlinkSelection, TSKSelection;

@interface TSDArchivedInfoHyperlinkSelection : TSPObject <TSKArchivedSelection>
{
    TSDInfoHyperlinkSelection *_hyperlinkSelection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSDInfoHyperlinkSelection *hyperlinkSelection; // @synthesize hyperlinkSelection=_hyperlinkSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSKSelection *selection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

