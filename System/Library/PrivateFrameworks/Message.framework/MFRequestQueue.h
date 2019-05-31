/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:02:49 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock, NSMutableArray;

@interface MFRequestQueue : NSObject {

	NSConditionLock* _condition;
	NSMutableArray* _requests;
	NSMutableArray* _consumers;
	unsigned _waitingOutside;
	unsigned _waitingInside;

}
-(void)addRequests:(id)arg1 consumers:(id)arg2 ;
-(void)processRequests:(id)arg1 consumers:(id)arg2 ;
-(void)willAddRequests:(id)arg1 consumers:(id)arg2 ;
-(void)_processRequests:(id)arg1 consumers:(id)arg2 ;
-(void)processRequest:(id)arg1 consumer:(id)arg2 ;
-(void)addRequest:(id)arg1 consumer:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

