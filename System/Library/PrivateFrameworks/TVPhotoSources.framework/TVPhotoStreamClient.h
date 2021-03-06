/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVPhotoSources.framework/TVPhotoSources
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface TVPhotoStreamClient : NSObject {

	NSXPCConnection* _connection;

}
+(id)sharedInstance;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchCollectionsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchAssetsForCollectionWithIdentifier:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchImageForAssetURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

