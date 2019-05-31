/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineIDMapping : CPLEngineStorage <CPLAbstractObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)addDeleteEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)addAddEventForRecordWithLocalScopedIdentifier:(id)arg1 direction:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)localScopedIdentifierForCloudScopedIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(BOOL)markAllPendingIdentifiersForScopeWithIdentifier:(id)arg1 asFinalWithError:(id*)arg2 ;
-(id)cloudScopedIdentifierForLocalScopedIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(BOOL)addCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)setFinalCloudScopedIdentifier:(id)arg1 forPendingCloudScopedIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasPendingIdentifiers;
-(BOOL)removeMappingForCloudScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetAllFinalCloudIdentifiersForScopeWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)localScopedIdentifierForCloudScopedIdentifierIncludeRemappedRecords:(id)arg1 ;
-(id)setupCloudScopedIdentifier:(id)arg1 forLocalScopedIdentifier:(id)arg2 isFinal:(BOOL)arg3 direction:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)scopeType;
@end

