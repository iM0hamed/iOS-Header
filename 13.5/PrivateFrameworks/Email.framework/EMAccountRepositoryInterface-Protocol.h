//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@protocol EMAccountRepositoryObserver;

@protocol EMAccountRepositoryInterface <NSObject>
- (void)registerObserver:(id <EMAccountRepositoryObserver>)arg1 completionHandler:(void (^)(NSArray *, id <EFCancelable>, NSError *))arg2;
@end

