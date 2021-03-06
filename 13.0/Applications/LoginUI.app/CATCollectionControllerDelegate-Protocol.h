//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CATCollectionController;

@protocol CATCollectionControllerDelegate <NSObject>

@optional
- (void)controllerDidChangeSelectionIndexes:(CATCollectionController *)arg1;
- (void)controllerDidChangeContent:(CATCollectionController *)arg1;
- (void)controllerWillChangeContent:(CATCollectionController *)arg1;
- (void)controller:(CATCollectionController *)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controller:(CATCollectionController *)arg1 willChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;
@end

