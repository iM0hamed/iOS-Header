//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKPageController;

@protocol AKFormFeatureDetectorDelegate <NSObject>

@optional
- (double)maximumFeatureWidthForPage:(AKPageController *)arg1;
- (struct CGSize)defaultFeatureSizeForPage:(AKPageController *)arg1;
- (_Bool)wantsDefaultFeatures;
@end

