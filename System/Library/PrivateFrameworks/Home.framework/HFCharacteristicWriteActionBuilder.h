/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:35 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFActionBuilder.h>

@protocol NSCopying;
@class HMCharacteristic, HMCharacteristicWriteAction;

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder {

	HMCharacteristic* _characteristic;
	id<NSCopying> _targetValue;

}

@property (nonatomic,readonly) HMCharacteristicWriteAction * action; 
@property (nonatomic,retain) HMCharacteristic * characteristic;                   //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id<NSCopying> targetValue;                           //@synthesize targetValue=_targetValue - In the implementation block
+(Class)homeKitRepresentationClass;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(BOOL)updateWithActionBuilder:(id)arg1 ;
-(BOOL)requiresDeviceUnlock;
-(id)createNewAction;
-(id)copyForCreatingNewAction;
-(HMCharacteristic *)characteristic;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(id<NSCopying>)targetValue;
-(void)setTargetValue:(id<NSCopying>)arg1 ;
@end
