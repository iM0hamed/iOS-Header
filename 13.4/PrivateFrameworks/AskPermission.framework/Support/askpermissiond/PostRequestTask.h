//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSURL;

@interface PostRequestTask : AMSTask
{
    ACAccount *_account;
    NSURL *_requestURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_requestIdentifierFromResult:(id)arg1 withError:(id *)arg2;
- (_Bool)_storeRequestWithResult:(id)arg1 error:(id *)arg2;
- (id)_serverRequestWithError:(id *)arg1;
- (id)perform;
- (id)initWithRequestURL:(id)arg1 account:(id)arg2;

@end

