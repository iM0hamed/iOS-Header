//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class LPLinkMetadata, LPMetadataProviderSpecialization, NSError;

@protocol LPMetadataProviderSpecializationDelegate <NSObject>
- (void)metadataProviderSpecialization:(LPMetadataProviderSpecialization *)arg1 didFailWithError:(NSError *)arg2;
- (void)metadataProviderSpecialization:(LPMetadataProviderSpecialization *)arg1 didCompleteWithMetadata:(LPLinkMetadata *)arg2;
@end

