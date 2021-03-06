//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSSceneLayer.h>

@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer
{
    NSString *_sceneID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (_Bool)isExternalSceneLayer;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)_succinctDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (long long)alignment;
- (id)initWithExternalSceneID:(id)arg1 trackingContext:(id)arg2;
- (id)initWithExternalSceneID:(id)arg1 level:(double)arg2;
- (id)_initWithCAContext:(id)arg1 fallbackLevel:(double)arg2 sceneID:(id)arg3;

@end

