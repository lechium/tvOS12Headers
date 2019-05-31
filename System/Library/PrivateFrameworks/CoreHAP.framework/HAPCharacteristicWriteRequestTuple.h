/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSData, NSNumber;

@interface HAPCharacteristicWriteRequestTuple : HMFObject {

	BOOL _timedWrite;
	BOOL _includeResponseValue;
	HAPCharacteristic* _characteristic;
	id _value;
	NSData* _authorizationData;
	unsigned long long _writeType;
	NSNumber* _enableEvents;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSData * authorizationData;                      //@synthesize authorizationData=_authorizationData - In the implementation block
@property (assign,nonatomic) BOOL timedWrite;                                 //@synthesize timedWrite=_timedWrite - In the implementation block
@property (assign,nonatomic) unsigned long long writeType;                    //@synthesize writeType=_writeType - In the implementation block
@property (assign,nonatomic) BOOL includeResponseValue;                       //@synthesize includeResponseValue=_includeResponseValue - In the implementation block
@property (nonatomic,retain) NSNumber * enableEvents;                         //@synthesize enableEvents=_enableEvents - In the implementation block
+(id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(BOOL)arg4 responseValue:(BOOL)arg5 type:(unsigned long long)arg6 ;
-(BOOL)includeResponseValue;
-(BOOL)timedWrite;
-(unsigned long long)writeType;
-(void)setEnableEvents:(NSNumber *)arg1 ;
-(NSNumber *)enableEvents;
-(void)setTimedWrite:(BOOL)arg1 ;
-(void)setIncludeResponseValue:(BOOL)arg1 ;
-(void)setWriteType:(unsigned long long)arg1 ;
-(HAPCharacteristic *)characteristic;
-(NSData *)authorizationData;
-(void)setAuthorizationData:(NSData *)arg1 ;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
@end

