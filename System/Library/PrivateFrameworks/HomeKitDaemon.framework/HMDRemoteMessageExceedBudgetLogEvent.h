/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDRemoteMessageExceedBudgetLogEvent : HMDLogEvent {

	HMFRate _budgetRate;

}

@property (nonatomic,readonly) HMFRate budgetRate;              //@synthesize budgetRate=_budgetRate - In the implementation block
+(id)eventWithBudgetRate:(HMFRate)arg1 ;
+(id)identifier;
-(id)initWithBudgetRate:(HMFRate)arg1 ;
-(HMFRate)budgetRate;
@end
