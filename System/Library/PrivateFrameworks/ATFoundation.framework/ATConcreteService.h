/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:52 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATService.h>
#import <ATFoundation/ATMessageLinkObserver.h>
#import <ATFoundation/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface ATConcreteService : ATService <ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _signalSource;
	double _startTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(BOOL)stop;
-(void)addObserver:(id)arg1 ;
-(BOOL)run;
@end

