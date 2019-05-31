/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:58:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBAttribute.h>

@class CBService, NSData, NSArray, CBPeripheral, NSNumber;

@interface CBCharacteristic : CBAttribute {

	BOOL _isBroadcasted;
	BOOL _isNotifying;
	CBService* _service;
	unsigned long long _properties;
	NSData* _value;
	NSArray* _descriptors;
	unsigned long long _valueTimestamp;
	CBPeripheral* _peripheral;
	NSNumber* _handle;
	NSNumber* _valueHandle;

}

@property (assign,nonatomic) CBService * service;                              //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                    //@synthesize properties=_properties - In the implementation block
@property (retain) NSData * value;                                             //@synthesize value=_value - In the implementation block
@property (retain) NSArray * descriptors;                                      //@synthesize descriptors=_descriptors - In the implementation block
@property (assign) BOOL isNotifying;                                           //@synthesize isNotifying=_isNotifying - In the implementation block
@property (nonatomic,readonly) unsigned long long valueTimestamp;              //@synthesize valueTimestamp=_valueTimestamp - In the implementation block
@property (nonatomic,readonly) CBPeripheral * peripheral;                      //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,readonly) NSNumber * handle;                              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSNumber * valueHandle;                         //@synthesize valueHandle=_valueHandle - In the implementation block
@property (readonly) BOOL isBroadcasted;                                       //@synthesize isBroadcasted=_isBroadcasted - In the implementation block
-(id)initWithService:(id)arg1 dictionary:(id)arg2 ;
-(void)setIsNotifying:(BOOL)arg1 ;
-(NSNumber *)valueHandle;
-(id)handleValueUpdated:(id)arg1 ;
-(id)handleValueWritten:(id)arg1 ;
-(id)handleValueBroadcasted:(id)arg1 ;
-(id)handleValueNotifying:(id)arg1 ;
-(id)handleDescriptorsDiscovered:(id)arg1 ;
-(BOOL)isBroadcasted;
-(BOOL)isNotifying;
-(unsigned long long)valueTimestamp;
-(CBService *)service;
-(void)setService:(CBService *)arg1 ;
-(NSNumber *)handle;
-(NSArray *)descriptors;
-(void)setDescriptors:(NSArray *)arg1 ;
-(CBPeripheral *)peripheral;
-(id)description;
-(void)invalidate;
-(NSData *)value;
-(void)setValue:(NSData *)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(unsigned long long)properties;
@end

