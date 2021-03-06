//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiometricKit/BKOperation.h>

@class NSData;
@protocol BKEnrollOperationDelegate;

@interface BKEnrollOperation : BKOperation
{
    unsigned int _userID;
    NSData *_credentialSet;
}

@property(copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property(nonatomic) unsigned int userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) __weak id <BKEnrollOperationDelegate> delegate; // @dynamic delegate;

@end

