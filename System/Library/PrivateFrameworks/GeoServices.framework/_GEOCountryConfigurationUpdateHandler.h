/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _GEOCountryConfigurationUpdateHandler : NSObject {

	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,copy) id callback;                                               //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(void)setCallback:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)callback;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
@end

