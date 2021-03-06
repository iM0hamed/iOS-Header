//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKBResizingKeyplaneCoordinator, UIView;

@protocol UIKBResizingKeyplaneCoordinatorCoordinatorDelegate <NSObject>
- (void)resizeKeyplaneAndRedraw:(_Bool)arg1;
- (UIView *)hostViewForResizingKeyplane:(UIKBResizingKeyplaneCoordinator *)arg1;
- (_Bool)keyplaneSupportsResizingGesture;
- (_Bool)keyplaneUsesResizingOffset;
@end

