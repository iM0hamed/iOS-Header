//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class WFParameterEditorHostingCell;
@protocol WFParameterState;

@protocol WFParameterEditorHostingCellDelegate <NSObject>
- (void)parameterEditorCellDidInvalidateSize:(WFParameterEditorHostingCell *)arg1;
- (void)parameterEditorCell:(WFParameterEditorHostingCell *)arg1 didUpdateParameterState:(id <WFParameterState>)arg2;
@end

