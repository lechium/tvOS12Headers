/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSNumber;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _delayQueue;
	NSString* _cachedClientToken;
	NSDate* _cachedClientTokenExpiration;
	NSNumber* _cachedDSID;
	/*^block*/id _requestDelayBlock;

}
+(id)sharedProvider;
-(void)_handleITunesStoreAccountsChanged;
-(id)_activeAccountDSID;
-(id)cachedTokenAndResetCache:(BOOL)arg1 ;
-(/*^block*/id)_requestTokenWithDelay:(long long)arg1 ;
-(void)_handleRequestToken;
-(void)_handleTokenResponse:(id)arg1 tokenRequest:(id)arg2 ;
-(id)init;
@end

