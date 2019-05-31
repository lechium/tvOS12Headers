/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface ICCloudContentTasteRequestListener : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _xpcConnection;

}
+(id)sharedCloudContentTasteRequestListener;
-(void)_setupContentTasteServiceConnection;
-(void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)_init;
@end

