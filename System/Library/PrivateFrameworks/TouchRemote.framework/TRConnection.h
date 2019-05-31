/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TRConnection : NSObject {

	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	/*^block*/id _eventMessageHandler;
	/*^block*/id _requestMessageHandler;

}

@property (nonatomic,copy) id interruptionHandler;                //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id eventMessageHandler;                //@synthesize eventMessageHandler=_eventMessageHandler - In the implementation block
@property (nonatomic,copy) id requestMessageHandler;              //@synthesize requestMessageHandler=_requestMessageHandler - In the implementation block
-(void)sendRequest:(id)arg1 ;
-(void)setEventMessageHandler:(id)arg1 ;
-(id)eventMessageHandler;
-(id)requestMessageHandler;
-(void)setRequestMessageHandler:(id)arg1 ;
-(void)invalidate;
-(void)sendResponse:(id)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
@end
