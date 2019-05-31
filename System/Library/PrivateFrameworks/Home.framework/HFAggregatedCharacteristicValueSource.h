/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HFServiceDescriptor;


@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching,NAIdentifiable,NSCopying>
@property (nonatomic,readonly) HFServiceDescriptor * primaryServiceDescriptor; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
@required
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1;
-(HFServiceDescriptor *)primaryServiceDescriptor;
-(id)readValuesForCharacteristicTypes:(id)arg1;
-(id)writeValuesForCharacteristicTypes:(id)arg1;
-(id)metadataForCharacteristicType:(id)arg1;
-(id)readValuesForServiceStateRecipe:(id)arg1;
-(id)writeValuesForCharacteristicRecipes:(id)arg1;
-(id)allCharacteristicsForCharacteristicType:(id)arg1;

@end

