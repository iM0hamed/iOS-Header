//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDRemoteAction.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface DDPersonAction : DDRemoteAction
{
    CNContact *_contact;
    _Bool _contactExists;
}

+ (id)viewControllerProviderClass;
+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;
+ (id)supportedSchemes;
- (void).cxx_destruct;
- (_Bool)prefersActionMenuStyle;
- (struct CGSize)suggestedContentSize;
- (id)menuActions;
- (id)_menuActionsForPersonWithNumber:(id)arg1 email:(id)arg2;
- (id)_menuActionsForBusinessWithNumber:(id)arg1;
- (id)_appendActionsForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 class:(Class)arg3 filter:(id)arg4 scheme:(id)arg5;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;

@end

