//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NABridgedArticleViewerPageItemActionHandlerDelegateType-Protocol.h"

@class FCIssue, FRNextArticleButton, NABridgedArticleViewerPageItemActionHandler, NSString, UIBarButtonItem, UIViewController;
@protocol FRArticleBarButtonItemManagerDelegate, NABridgedToolbarIssueCoverBarButtonItemProviderType;

@interface FRArticleBarButtonItemManager : NSObject <NABridgedArticleViewerPageItemActionHandlerDelegateType>
{
    id <FRArticleBarButtonItemManagerDelegate> _delegate;
    UIBarButtonItem *_shareBarButtonItem;
    UIViewController *_viewController;
    UIBarButtonItem *_textResizeBarButtonItem;
    UIBarButtonItem *_nextBarButtonItem;
    UIBarButtonItem *_coverBarButtonItem;
    NSString *_articleID;
    FCIssue *_issue;
    FRNextArticleButton *_nextButton;
    long long _lastPositionedHorizontalSizeClass;
    long long _lastPositionedVerticalSizeClass;
    id <NABridgedToolbarIssueCoverBarButtonItemProviderType> _issueCoverButtonProvider;
    NABridgedArticleViewerPageItemActionHandler *_bridgedActionHandler;
}

+ (void)setBarButtonItem:(id)arg1 enabled:(_Bool)arg2 hidden:(_Bool)arg3;
@property(retain, nonatomic) NABridgedArticleViewerPageItemActionHandler *bridgedActionHandler; // @synthesize bridgedActionHandler=_bridgedActionHandler;
@property(retain, nonatomic) id <NABridgedToolbarIssueCoverBarButtonItemProviderType> issueCoverButtonProvider; // @synthesize issueCoverButtonProvider=_issueCoverButtonProvider;
@property(nonatomic) long long lastPositionedVerticalSizeClass; // @synthesize lastPositionedVerticalSizeClass=_lastPositionedVerticalSizeClass;
@property(nonatomic) long long lastPositionedHorizontalSizeClass; // @synthesize lastPositionedHorizontalSizeClass=_lastPositionedHorizontalSizeClass;
@property(retain, nonatomic) FRNextArticleButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) FCIssue *issue; // @synthesize issue=_issue;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(retain, nonatomic) UIBarButtonItem *coverBarButtonItem; // @synthesize coverBarButtonItem=_coverBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *textResizeBarButtonItem; // @synthesize textResizeBarButtonItem=_textResizeBarButtonItem;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIBarButtonItem *shareBarButtonItem; // @synthesize shareBarButtonItem=_shareBarButtonItem;
@property(nonatomic) __weak id <FRArticleBarButtonItemManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_toolbarViewController;
- (void)openURL:(id)arg1;
- (void)navigateToArticleID:(id)arg1;
- (void)presentWithViewController:(id)arg1;
- (void)setCoverViewButtonHidden:(_Bool)arg1;
- (void)setNextButtonAccessibilityValue:(id)arg1;
@property(nonatomic) _Bool shareButtonEnabled;
- (void)setBarButtonsEnabledWithVisibilityManager:(id)arg1;
- (id)createFixedSpacerBarButtonItemWithWidth:(double)arg1;
- (id)createFlexibleSpacerBarButtonItem;
- (id)createTextResizeBarButtonItem;
- (id)createShareBarButtonItem;
- (struct CGRect)frameForNextBarButton;
- (id)createCoverBarButtonItemWithIssue:(id)arg1;
- (id)createCoverBarButtonItemPlaceholder;
- (id)createNextBarButtonItem;
- (void)textResizeButtonPressed;
- (void)sharingButtonPressed;
- (void)doDislike:(id)arg1;
- (void)doLike:(id)arg1;
- (void)doTextResize:(id)arg1;
- (void)doShare:(id)arg1;
- (void)doNext:(id)arg1;
- (void)updateMagazineButtonAndPageBottomInsetForHeadline:(id)arg1 animated:(_Bool)arg2;
- (void)updateNextButtonWithSection:(id)arg1 animated:(_Bool)arg2;
- (void)setNextButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)positionBarButtonItemsWithVisibilityManager:(id)arg1 traitCollection:(id)arg2;
- (void)updateToolbarItems;
- (void)updateRightBarButtonItems;
- (void)updateLeftBarButtonItems;
- (void)updateBarButtonItemsWithVisibilityManager:(id)arg1 activityProvider:(id)arg2 traitCollection:(id)arg3;
- (id)initWithViewController:(id)arg1;

@end

