//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand
{
}

+ (id)clearScreenWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clearScreen;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAAceView *initialView;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

