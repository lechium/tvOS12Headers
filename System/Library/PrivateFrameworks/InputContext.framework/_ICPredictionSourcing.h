/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ICPredictionSourcing
@required
-(void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(unsigned long long)arg4 handler:(/*^block*/id)arg5;
-(void)searchForMeCardRegionsWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2;
-(void)searchForMeCardEmailAddressesWithTimeout:(unsigned long long)arg1 handler:(/*^block*/id)arg2;
-(void)hibernate;
-(void)warmUp;

@end
