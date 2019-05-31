/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:15 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DeviceTypeDeviceIdentity : NSObject {

	BOOL _is_fpga;
	BOOL _is_ipod;
	BOOL _is_ipad;
	BOOL _has_telephony;
	BOOL _should_hactivate;
	BOOL _is_internal_build;
	NSString* _product_type;
	NSString* _device_class;

}

@property (nonatomic,copy,readonly) NSString * product_type;              //@synthesize product_type=_product_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * device_class;              //@synthesize device_class=_device_class - In the implementation block
@property (nonatomic,readonly) BOOL is_fpga;                              //@synthesize is_fpga=_is_fpga - In the implementation block
@property (nonatomic,readonly) BOOL is_ipod;                              //@synthesize is_ipod=_is_ipod - In the implementation block
@property (nonatomic,readonly) BOOL is_ipad;                              //@synthesize is_ipad=_is_ipad - In the implementation block
@property (nonatomic,readonly) BOOL has_telephony;                        //@synthesize has_telephony=_has_telephony - In the implementation block
@property (nonatomic,readonly) BOOL should_hactivate;                     //@synthesize should_hactivate=_should_hactivate - In the implementation block
@property (nonatomic,readonly) BOOL is_internal_build;                    //@synthesize is_internal_build=_is_internal_build - In the implementation block
+(id)sharedInstance;
-(id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2 ;
-(id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3 ;
-(NSString *)product_type;
-(NSString *)device_class;
-(BOOL)is_fpga;
-(BOOL)is_ipod;
-(BOOL)is_ipad;
-(BOOL)has_telephony;
-(BOOL)should_hactivate;
-(BOOL)is_internal_build;
-(id)init;
@end

