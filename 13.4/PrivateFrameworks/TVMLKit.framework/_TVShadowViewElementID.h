//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface _TVShadowViewElementID : NSObject <NSCopying>
{
    IKViewElement *_viewElement;
    NSString *_itemID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithViewElement:(id)arg1;

@end

