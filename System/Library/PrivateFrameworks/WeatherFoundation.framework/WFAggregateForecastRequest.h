/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:42 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation;

@interface WFAggregateForecastRequest : WFTask {

	WFLocation* _location;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) WFLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) id completionHandler;               //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)handleResponse:(id)arg1 ;
-(void)handleCancellation;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)completionHandler;
-(void)cleanup;
-(WFLocation *)location;
-(void)setLocation:(WFLocation *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
@end

