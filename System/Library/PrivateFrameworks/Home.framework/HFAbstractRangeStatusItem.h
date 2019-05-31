/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:36 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFStatusItem.h>

@interface HFAbstractRangeStatusItem : HFStatusItem
+(id)controllableServiceTypes;
+(id)sensorServiceTypes;
+(id)currentValueCharacteristicType;
+(id)targetValueCharacteristicType;
+(id)minimumTargetValueCharacteristicType;
+(id)maximumTargetValueCharacteristicType;
+(id)currentModeCharacteristicTypes;
+(id)targetModeCharacteristicTypes;
+(id)displayTitleStringForService:(id)arg1 withResponse:(id)arg2 multipleServices:(BOOL)arg3 updateOptions:(id)arg4 ;
+(unsigned long long)abstractCurrentModeInResponse:(id)arg1 ;
+(unsigned long long)abstractTargetModeInResponse:(id)arg1 ;
+(id)customValueFormatter;
+(BOOL)isPercentRange;
+(id)_defaultValueFormatter;
+(id)_localizedRangeStringForKey:(id)arg1 ;
+(/*^block*/id)displayValueComparator;
+(id)localizationKeyPrefix;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end

