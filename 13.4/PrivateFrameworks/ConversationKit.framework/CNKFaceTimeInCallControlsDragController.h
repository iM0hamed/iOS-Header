//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNKFaceTimeInCallControlsDragControllerDelegate;

@interface CNKFaceTimeInCallControlsDragController : NSObject
{
    // Error parsing type: , name: inCallControlsView
    // Error parsing type: , name: constraintsController
    // Error parsing type: , name: panGestureRecognizer
    // Error parsing type: , name: animation
    // Error parsing type: , name: delegate
    // Error parsing type: , name: disabledScrollViews
}

- (void).cxx_destruct;
- (id)init;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)resetGestureRecognizer;
- (id)initInCallControlsView:(id)arg1 constraintsController:(id)arg2;
@property(nonatomic, readonly) _Bool isDragging;
@property(nonatomic) __weak id <CNKFaceTimeInCallControlsDragControllerDelegate> delegate; // @synthesize delegate;

@end

