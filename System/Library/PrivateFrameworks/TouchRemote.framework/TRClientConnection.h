/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRConnection.h>

@class SFSession;

@interface TRClientConnection : TRConnection {

	SFSession* _session;

}

@property (retain) SFSession * session;              //@synthesize session=_session - In the implementation block
-(void)setSession:(SFSession *)arg1 ;
-(SFSession *)session;
-(void)sendRequest:(id)arg1 ;
-(void)setEventMessageHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)eventMessageHandler;
-(/*^block*/id)requestMessageHandler;
-(void)setRequestMessageHandler:(/*^block*/id)arg1 ;
-(void)connectToNearbyDevice:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)sendResponse:(id)arg1 ;
-(/*^block*/id)interruptionHandler;
-(void)setInterruptionHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)invalidationHandler;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)sendEvent:(id)arg1 ;
@end

