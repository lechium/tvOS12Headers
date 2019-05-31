/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class NSArray, NSDate, NSString;

@interface TILaunchServicesLookup : NSObject <TIKeyboardActivityObserving> {

	NSArray* _cache;
	NSDate* _lastCacheUpdate;

}

@property (nonatomic,retain) NSArray * cache;                       //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSDate * lastCacheUpdate;              //@synthesize lastCacheUpdate=_lastCacheUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lookupAppNames;
+(void)enumerateInstalledApplicationNames:(/*^block*/id)arg1 ;
+(id)genreIDsForApplicationIdentifier:(id)arg1 ;
+(void)disableForTesting:(BOOL)arg1 ;
+(id)sharedInstance;
-(id)appNames;
-(void)resetCache;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(id)tryCache;
-(void)cacheNames:(id)arg1 ;
-(void)enumerateAppNames:(/*^block*/id)arg1 ;
-(NSDate *)lastCacheUpdate;
-(void)setLastCacheUpdate:(NSDate *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setCache:(NSArray *)arg1 ;
-(NSArray *)cache;
@end

