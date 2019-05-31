/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAbstractRangeStatusItem.h>

@interface HFHumidityStatusItem : HFAbstractRangeStatusItem
+(id)controllableServiceTypes;
+(id)sensorServiceTypes;
+(id)currentValueCharacteristicType;
+(id)targetValueCharacteristicType;
+(id)minimumTargetValueCharacteristicType;
+(id)maximumTargetValueCharacteristicType;
+(id)currentModeCharacteristicTypes;
+(id)targetModeCharacteristicTypes;
+(unsigned long long)abstractCurrentModeInResponse:(id)arg1 ;
+(unsigned long long)abstractTargetModeInResponse:(id)arg1 ;
+(BOOL)isPercentRange;
+(/*^block*/id)displayValueComparator;
+(id)localizationKeyPrefix;
@end
