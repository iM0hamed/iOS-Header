//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXRequestWithSharedLinkHeader.h>

@class NSString;

@interface BOXFolderCreateRequest : BOXRequestWithSharedLinkHeader
{
    _Bool _requestAllFolderFields;
    NSString *_folderName;
    NSString *_parentFolderID;
    NSString *_requestDirectoryPath;
    NSString *_associateId;
}

@property(copy, nonatomic) NSString *associateId; // @synthesize associateId=_associateId;
@property(copy, nonatomic) NSString *requestDirectoryPath; // @synthesize requestDirectoryPath=_requestDirectoryPath;
@property(nonatomic) _Bool requestAllFolderFields; // @synthesize requestAllFolderFields=_requestAllFolderFields;
@property(retain, nonatomic) NSString *parentFolderID; // @synthesize parentFolderID=_parentFolderID;
@property(retain, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
- (void).cxx_destruct;
- (_Bool)shouldPerformBackgroundOperation;
- (struct NSString *)itemTypeForSharedLink;
- (id)itemIDForSharedLink;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFolderName:(id)arg1 parentFolderID:(id)arg2 associateId:(id)arg3;
- (id)initWithFolderName:(id)arg1 parentFolderID:(id)arg2;

@end

