//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDContainerLayout.h>

#import <iWorkImport/TSDWrappableParent-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSDCounterRotateLayout : TSDContainerLayout <TSDWrappableParent>
{
}

- (_Bool)descendentWrappablesContainsWrappable:(id)arg1;
- (id)descendentWrappables;
- (id)visibleGeometries;
- (_Bool)canFlip;
- (struct CGSize)minimumSize;
- (struct CGRect)boundsForStandardKnobs;
- (struct CGRect)frameForCulling;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)reliedOnLayouts;

@end

