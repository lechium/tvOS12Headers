/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCKRemoteNotifierDelegate;
@class NSString, NSDistributedNotificationCenter;

@interface TVCKRemoteNotifier : NSObject {

	NSString* _remoteNotificationName;
	id<TVCKRemoteNotifierDelegate> _delegate;
	NSString* _notificationObject;
	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (nonatomic,copy) NSString * notificationObject;                                                  //@synthesize notificationObject=_notificationObject - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteNotificationName;                                     //@synthesize remoteNotificationName=_remoteNotificationName - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKRemoteNotifierDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
-(void)_didReceiveDistributedNotification:(id)arg1 ;
-(NSString *)notificationObject;
-(void)postNotificationWithUserInfo:(id)arg1 ;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(NSString *)remoteNotificationName;
-(id)initWithNotificationName:(id)arg1 ;
-(void)postNotification;
-(void)setNotificationObject:(NSString *)arg1 ;
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<TVCKRemoteNotifierDelegate>)arg1 ;
-(id<TVCKRemoteNotifierDelegate>)delegate;
@end

