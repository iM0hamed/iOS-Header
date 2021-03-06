//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SACFAbstractClientCommand : SADomainCommand
{
}

+ (id)abstractClientCommandWithDictionary:(id)arg1 context:(id)arg2;
+ (id)abstractClientCommand;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool shouldCacheScript;
@property(copy, nonatomic) NSString *jsScript;
@property(copy, nonatomic) NSString *jsParameters;
@property(copy, nonatomic) NSArray *jsLibraries;
@property(copy, nonatomic) NSString *domain;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

