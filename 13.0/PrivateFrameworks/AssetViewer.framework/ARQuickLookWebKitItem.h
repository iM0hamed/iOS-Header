//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItem.h>

#import <AssetViewer/QLPreviewItemPrivateCustomExtensionHandling-Protocol.h>

@class ARQuickLookPreviewItem, NSString;
@protocol ARQuickLookWebKitItemDelegate;

@interface ARQuickLookWebKitItem : QLItem <QLPreviewItemPrivateCustomExtensionHandling>
{
    id <ARQuickLookWebKitItemDelegate> _delegate;
    ARQuickLookPreviewItem *_previewItem;
}

@property(retain, nonatomic) ARQuickLookPreviewItem *previewItem; // @synthesize previewItem=_previewItem;
@property(nonatomic) __weak id <ARQuickLookWebKitItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMessageFromCustomExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)previewOptions;
- (id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4 previewItem:(id)arg5;
- (id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 previewItem:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

