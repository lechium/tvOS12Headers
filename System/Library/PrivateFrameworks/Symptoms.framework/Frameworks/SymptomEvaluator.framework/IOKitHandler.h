/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IOKitHandler : NSObject <ConfigurableObjectProtocol> {

	unsigned long long _ioHdl;
	unsigned _pwrConnect;
	unsigned _pwrNotifier;
	IONotificationPortRef _pwrPort;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _mostRecentAPWakeMachTime;
	unsigned long long _mostRecentAPSleepMachTime;

}

@property (nonatomic,readonly) unsigned long long mostRecentAPSleepMachTime; 
@property (nonatomic,readonly) unsigned long long mostRecentAPWakeMachTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureClass:(id)arg1 ;
+(id)sharedInstance;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(unsigned long long)mostRecentAPSleepMachTime;
-(void)enableIOKitPowerNotifications;
-(void)enableIOKitAssertionNotifications;
-(void)disableIOKitAssertionNotifications;
-(void)disableIOKitPowerNotifications;
-(void)reportIOPMAssertionException:(int)arg1 pid:(int)arg2 ;
-(unsigned long long)mostRecentAPWakeMachTime;
-(void)updateMostRecentAPSleepTime;
-(void)updateMostRecentAPWakeTime;
-(id)init;
-(void)dealloc;
-(NSString *)description;
@end

