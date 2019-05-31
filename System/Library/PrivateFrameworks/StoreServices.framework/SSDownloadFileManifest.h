/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {

	SSXPCConnection* _connection;
	long long _manifestType;

}

@property (readonly) long long manifestType; 
-(id)initWithManifestType:(long long)arg1 ;
-(void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)manifestType;
-(void)rebuildManifestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeItemWithAssetPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

