//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSData, NSString;

@interface PKAccountWebServiceStatementActionResponse : PKAccountWebServiceResponse
{
    NSData *_statementPDFData;
    NSString *_statementDataFilename;
    NSString *_statementDataHash;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *statementDataHash; // @synthesize statementDataHash=_statementDataHash;
@property(readonly, copy, nonatomic) NSString *statementDataFilename; // @synthesize statementDataFilename=_statementDataFilename;
@property(readonly, copy, nonatomic) NSData *statementPDFData; // @synthesize statementPDFData=_statementPDFData;
- (id)initWithData:(id)arg1;

@end

