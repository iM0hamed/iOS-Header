//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__AccessibilityStateObserverAccessibility_super.h"

@interface AccessibilityStateObserverAccessibility : __AccessibilityStateObserverAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_axUpdateForState;
- (void)didUpdate;
- (void)_axSetLastSnapDivisionsDescription:(id)arg1;
- (id)_axLastSnapDivisionsDescription;
- (void)_axSetLastSnapDivisionsLineID:(id)arg1;
- (id)_axLastSnapDivisionsLineID;
- (void)_axSetLastWorldPointType:(long long)arg1;
- (long long)_axLastWorldPointType;
- (void)_axSetNeedsAnnouncementForContinueMeasurement:(_Bool)arg1;
- (_Bool)_axNeedsAnnouncementForContinueMeasurement;
- (_Bool)axIsModeForMeasuring;
- (_Bool)axHasSuggestedRectangle;
- (_Bool)axHasConfirmedRectangle;
- (_Bool)_axHasRectangleWithState:(long long)arg1;
- (id)axOrderedWorldLineIDs;
- (id)axWorldRectangles;
- (id)axWorldLines;
- (id)axDescriptionForNumberOfPointsAndLines;

@end

