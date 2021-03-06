/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:41 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface WFLocationQueryGeocodeCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _cacheAge;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	double _expirationInterval;

}

@property (assign,nonatomic) double expirationInterval;              //@synthesize expirationInterval=_expirationInterval - In the implementation block
-(BOOL)_shouldEvictObjectWithDate:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 withDate:(id)arg3 ;
-(double)expirationInterval;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setExpirationInterval:(double)arg1 ;
@end

