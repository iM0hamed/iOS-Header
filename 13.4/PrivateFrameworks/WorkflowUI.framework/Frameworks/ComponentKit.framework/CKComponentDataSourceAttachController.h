//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CKComponentDataSourceAttachController : NSObject
{
    NSMutableDictionary *_scopeIdentifierToAttachedViewMap;
}

- (void).cxx_destruct;
- (void)_detachComponentLayoutFromView:(id)arg1;
- (id)attachStateForScopeIdentifier:(int)arg1;
- (void)detachComponentLayoutWithScopeIdentifier:(int)arg1;
- (void)attachComponentLayout:(struct CKComponentLayout)arg1 withScopeIdentifier:(int)arg2 withBoundsAnimation:(struct CKComponentBoundsAnimation)arg3 toView:(id)arg4;
- (void)dealloc;
- (id)init;

@end

