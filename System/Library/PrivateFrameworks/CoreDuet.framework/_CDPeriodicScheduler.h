/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPeriodicScheduler.h>

@protocol _CDPeriodicScheduler <NSObject>
@required
-(void)registerJob:(id)arg1;
-(void)unregisterJob:(id)arg1;

@end


@class NSString;

@interface _CDPeriodicScheduler : NSObject <_CDPeriodicScheduler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)registerJob:(id)arg1 ;
-(void)unregisterJob:(id)arg1 ;
-(void)updateExecutionCriteriaOnJob:(id)arg1 ;
@end

