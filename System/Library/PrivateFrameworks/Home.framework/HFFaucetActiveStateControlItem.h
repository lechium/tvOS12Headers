/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFPowerStateControlItem.h>

@interface HFFaucetActiveStateControlItem : HFPowerStateControlItem {

	unsigned long long _valveControlMode;

}

@property (nonatomic,readonly) unsigned long long valveControlMode;              //@synthesize valveControlMode=_valveControlMode - In the implementation block
+(id)na_identity;
-(id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 valveControlMode:(unsigned long long)arg2 displayResults:(id)arg3 ;
-(id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(unsigned long long)valveControlMode;
@end

