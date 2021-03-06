//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class ASDBetaAppFeedback, ASDBetaAppVersion, NSArray, NSDate, NSNumber, NSString;

@interface BetaAppFeedbackMemoryEntity : SQLiteMemoryEntity
{
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
- (void)_removePendingImageUploadForURLString:(id)arg1;
- (id)_decodedArrayForProperty:(id)arg1 ofClass:(Class)arg2;
- (void)addSuccessfulImageUpload:(id)arg1;
@property(retain, nonatomic) NSArray *successfulImageUploads;
@property(nonatomic) unsigned long long state;
@property(retain, nonatomic) NSArray *pendingImageUploads;
@property(retain, nonatomic) NSDate *nextRetryDate;
@property(retain, nonatomic) ASDBetaAppFeedback *feedback;
@property int attemptCount;
@property(readonly, nonatomic) NSNumber *itemID;
@property(readonly, nonatomic) NSString *logKey;
@property(readonly, nonatomic) ASDBetaAppVersion *appVersion;
@property(readonly, nonatomic) NSNumber *accountDSID;

@end

