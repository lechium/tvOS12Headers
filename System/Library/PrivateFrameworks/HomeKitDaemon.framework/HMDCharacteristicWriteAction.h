/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@class NSUUID, HMDActionSet, HMDCharacteristic, NSString;

@interface HMDCharacteristicWriteAction : HMFObject <NSSecureCoding, HMDBackingStoreObjectProtocol> {

	NSUUID* _uuid;
	HMDActionSet* _actionSet;
	HMDCharacteristic* _characteristic;
	id _targetValue;

}

@property (nonatomic,copy,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,__weak,readonly) HMDActionSet * actionSet;                        //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,__weak,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id targetValue;                                             //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)dumpState;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(HMDCharacteristic *)characteristic;
-(id)initWithUUID:(id)arg1 characteristic:(id)arg2 targetValue:(id)arg3 actionSet:(id)arg4 ;
-(BOOL)isSecureAction;
-(id)actionInformation;
-(void)replaceCharacteristic:(id)arg1 ;
-(HMDActionSet *)actionSet;
-(void)_processWriteActionModelUpdated:(id)arg1 message:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(id)targetValue;
-(void)setTargetValue:(id)arg1 ;
@end
