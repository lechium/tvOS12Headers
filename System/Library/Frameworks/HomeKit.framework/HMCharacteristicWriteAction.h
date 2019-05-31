/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class HMCharacteristic, NSString, NSUUID;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge> {

	HMCharacteristic* _characteristic;
	id _targetValue;

}

@property (nonatomic,retain) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id targetValue;                                   //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2 ;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)__configureWithContext:(id)arg1 actionSet:(id)arg2 ;
-(void)_updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_handleUpdates:(id)arg1 ;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 ;
-(void)updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMCharacteristic *)characteristic;
-(id)_serializeForAdd;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)targetValue;
-(void)setTargetValue:(id)arg1 ;
@end

