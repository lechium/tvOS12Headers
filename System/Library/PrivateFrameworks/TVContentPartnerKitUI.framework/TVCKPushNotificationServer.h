/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@class APSConnection, NSData, NSLock, NSDictionary, NSOperationQueue, NSString;

@interface TVCKPushNotificationServer : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	APSConnection* _devAPSConnection;
	BOOL _tokenDone;
	BOOL _devTokenDone;
	NSData* _token;
	NSData* _devToken;
	NSLock* _listenersLock;
	NSDictionary* _listenersForTopics;
	NSOperationQueue* _notificationTypeOperationQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)start:(BOOL)arg1 ;
-(BOOL)isConnected;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)publicToken;
-(BOOL)isDevConnected;
-(id)devToken;
-(void)addListener:(id)arg1 forTopic:(id)arg2 ;
-(void)addPushNotificationType:(id)arg1 withParameters:(id)arg2 ;
-(void)removePushNotificationType:(id)arg1 ;
-(void)removeListener:(id)arg1 forTopic:(id)arg2 ;
-(void)_registerDeviceWithToken:(id)arg1 ;
-(void)_registerDeviceWithDevToken:(id)arg1 ;
-(void)_touchAPSDKeepAliveFile;
-(id)_aggregatedTopics;
-(void)_removeAPSDKeepAliveFile;
-(void)_updateAggregateTopics;
-(void)_enqueuePushNotificationTypeRequestWithURL:(id)arg1 body:(id)arg2 debugStr:(id)arg3 ;
-(id)_allListeners;
-(void)_tellListenersATokenChanged;
-(id)init;
-(void)dealloc;
-(void)stop;
@end

