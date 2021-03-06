//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface MapsEdgeConstraints : NSObject
{
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_rightConstraint;
    NSLayoutConstraint *_trailingConstraint;
}

+ (id)edgeConstraintsWithTop:(id)arg1 left:(id)arg2 bottom:(id)arg3 right:(id)arg4;
+ (id)edgeConstraintsWithTop:(id)arg1 leading:(id)arg2 bottom:(id)arg3 trailing:(id)arg4;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightConstraint; // @synthesize rightConstraint=_rightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftConstraint; // @synthesize leftConstraint=_leftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allConstraints;

@end

