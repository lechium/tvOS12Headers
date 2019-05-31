/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:48 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) unsigned long long countOfOriginalImages; 
@property (nonatomic,readonly) unsigned long long countOfOriginalVideos; 
@property (nonatomic,readonly) unsigned long long countOfOriginalOthers; 
@property (nonatomic,readonly) unsigned long long sizeOfResourcesToUpload; 
@property (nonatomic,readonly) unsigned long long sizeOfOriginalResourcesToUpload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(unsigned long long)countOfOriginalImages;
-(unsigned long long)countOfOriginalVideos;
-(unsigned long long)countOfOriginalOthers;
-(BOOL)deleteResourcesToUploadWithUploadIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)storeResourcesToUpload:(id)arg1 withUploadIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)resourceTypesToUploadForUploadIdentifier:(id)arg1 ;
-(BOOL)shouldUploadResource:(id)arg1 ;
-(unsigned long long)sizeOfResourcesToUpload;
-(unsigned long long)sizeOfOriginalResourcesToUpload;
-(unsigned long long)scopeType;
-(BOOL)openWithError:(id*)arg1 ;
@end

