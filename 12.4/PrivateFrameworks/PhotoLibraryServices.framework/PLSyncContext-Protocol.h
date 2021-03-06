//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol NSFastEnumeration, PLSyncableDetectedFace, PLSyncablePerson;

@protocol PLSyncContext <NSObject>
@property(copy, nonatomic) NSArray *personUUIDsToDedupe;
@property(readonly, nonatomic) _Bool serverSupportsSuggestion;
@property(readonly, nonatomic) _Bool serverSupportsGraphHome;
@property(readonly, nonatomic) _Bool serverSupportsVision;
- (NSDictionary *)assetAdjustmentStateForCloudIdentifier:(NSString *)arg1;
- (_Bool)personUUIDIsDeleted:(NSString *)arg1;
- (id <PLSyncablePerson>)personForUUID:(NSString *)arg1;
- (void)deleteFaces:(id <NSFastEnumeration>)arg1;
- (id <PLSyncableDetectedFace>)makeFace;
@end

