//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation
{
    ISOpenURLRequest *_request;
}

- (void).cxx_destruct;
- (_Bool)_openURL:(id)arg1;
- (id)_newSortedTargetsArray;
- (void)run;
@property(readonly) ISOpenURLRequest *openURLRequest;
- (id)initWithOpenURLRequest:(id)arg1;
- (id)init;

@end

