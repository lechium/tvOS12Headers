/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:16 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/LimitAdTracking.framework/LimitAdTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADOptInStatusClient : NSObject
+(id)sharedInstance;
-(id)advertisingIdentifier;
-(void)refreshOptInStatus;
-(void)setOptInStatus:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)advertisingIdentifierChanged:(/*^block*/id)arg1 ;
-(void)clearAdvertisingIdentifier;
@end

