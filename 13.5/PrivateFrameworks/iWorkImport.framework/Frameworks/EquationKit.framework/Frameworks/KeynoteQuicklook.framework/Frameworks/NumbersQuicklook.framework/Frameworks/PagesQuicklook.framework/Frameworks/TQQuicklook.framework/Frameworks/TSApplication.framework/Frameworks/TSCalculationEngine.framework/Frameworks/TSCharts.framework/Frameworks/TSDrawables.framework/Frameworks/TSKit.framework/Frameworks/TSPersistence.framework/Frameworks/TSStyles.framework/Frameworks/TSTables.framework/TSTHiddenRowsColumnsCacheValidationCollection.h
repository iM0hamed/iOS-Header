//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

@interface TSTHiddenRowsColumnsCacheValidationCollection : NSObject
{
    NSMutableIndexSet *_visible;
    NSMutableIndexSet *_hidden;
    NSMutableIndexSet *_userVisible;
    NSMutableIndexSet *_userHidden;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableIndexSet *userHidden; // @synthesize userHidden=_userHidden;
@property(retain, nonatomic) NSMutableIndexSet *userVisible; // @synthesize userVisible=_userVisible;
@property(retain, nonatomic) NSMutableIndexSet *hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSMutableIndexSet *visible; // @synthesize visible=_visible;
- (id)init;

@end

