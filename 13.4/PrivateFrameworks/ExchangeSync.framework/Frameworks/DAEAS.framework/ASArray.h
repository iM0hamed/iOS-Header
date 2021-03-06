//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/ASParsingFrontingBasicType-Protocol.h>
#import <DAEAS/ASParsingWithSubItems-Protocol.h>

@class NSDictionary, NSMutableArray;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType>
{
    NSMutableArray *_items;
    NSDictionary *_subclassRuleSet;
}

+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
- (id)commonValue;
- (void)addItem:(id)arg1;
- (id)asParseRules;
- (id)description;
- (id)initWithSubclassRuleSet:(id)arg1;

@end

