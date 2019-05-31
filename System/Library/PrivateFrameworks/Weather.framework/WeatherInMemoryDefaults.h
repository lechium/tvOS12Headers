/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:47 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/WeatherPreferencesPersistence.h>

@class NSMutableDictionary, NSString;

@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence> {

	BOOL _synchronizeWasCalled;
	NSMutableDictionary* _inMemoryStore;

}

@property (retain) NSMutableDictionary * inMemoryStore;              //@synthesize inMemoryStore=_inMemoryStore - In the implementation block
@property (readonly) BOOL synchronizeWasCalled;                      //@synthesize synchronizeWasCalled=_synchronizeWasCalled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInMemoryStore:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)inMemoryStore;
-(BOOL)synchronizeWasCalled;
-(id)arrayForKey:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)synchronize;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
@end
