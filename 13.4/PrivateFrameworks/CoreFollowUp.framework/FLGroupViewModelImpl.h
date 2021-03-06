//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/FLGroupViewModel-Protocol.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel>
{
    NSMutableArray *_mutableItems;
    NSString *_identifier;
    NSString *_rowTitle;
    NSString *_groupTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(copy, nonatomic) NSString *rowTitle; // @synthesize rowTitle=_rowTitle;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)shouldCoalesceItems;
- (_Bool)restrictionEnabled;
@property(readonly, copy) NSString *description;
- (void)addItem:(id)arg1;
- (id)items;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

