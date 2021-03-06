//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLResourceDataStore.h>

#import <PhotoLibraryServices/PLResourceDataStore-Protocol.h>

@class NSString, PLPhotoLibraryPathManager;

@interface PLSharedStreamsDataStore : PLResourceDataStore <PLResourceDataStore>
{
}

+ (id)supportedRecipes;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (unsigned int)storeClassID;
+ (unsigned int)_masterThumbRecipeID;
- (id)requiredExternalResourcesForMigratingOrImportingAsset:(id)arg1;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)canStreamResource:(id)arg1;
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (_Bool)canStoreExternalResource:(id)arg1;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)keyFromKeyStruct:(const void *)arg1;
- (id)descriptionForSubtype:(long long)arg1;
- (id)name;
- (unsigned int)_mainResourceTypeForAsset:(id)arg1;
- (short)_remoteAvailabilityForType:(unsigned int)arg1;
- (short)_localAvailabilityForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (id)_sharedStreamsExternalResourceForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (_Bool)_isDerivativeForSharedStreamsType:(unsigned int)arg1;
- (id)_utiStringForAsset:(id)arg1 type:(unsigned int)arg2;
- (void)_prepareForDownloadNotification:(id)arg1 atFileURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property(readonly) Class superclass;

@end

