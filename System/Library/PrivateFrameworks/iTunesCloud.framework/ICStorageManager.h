/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ICStorageManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,readonly) unsigned long long storageSpaceAvailable; 
@property (nonatomic,readonly) BOOL cachingEnabled; 
+(id)sharedManager;
-(unsigned long long)storageSpaceAvailable;
-(BOOL)cachingEnabled;
-(void)ensureStorageIsAvailable:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
@end

