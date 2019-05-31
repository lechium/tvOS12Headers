/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTEventStore.h>
#import <libobjc.A.dylib/RTEventStoreAppLaunch.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSString;

@interface RTEventStore : NSObject <RTEventStore, RTEventStoreAppLaunch, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _applicableEventClasses;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * applicableEventClasses;                //@synthesize applicableEventClasses=_applicableEventClasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)addEvent:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUnderlyingQueue:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(id)initWithApplicableEventClasses:(id)arg1 ;
-(NSArray *)applicableEventClasses;
-(void)fetchAllPredictionsWithHandler:(/*^block*/id)arg1 ;
-(void)clearAllEvents;
-(void)removeEvent:(id)arg1 ;
-(void)removeEvents:(id)arg1 ;
-(unsigned long long)countOfEvents;
-(void)_processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)storesEventOfClass:(Class)arg1 ;
-(double)getConfidence;
-(void)addAppLaunchEvent:(id)arg1 ;
-(void)setApplicableEventClasses:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
@end

