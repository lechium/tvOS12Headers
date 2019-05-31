/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _powerOn;
	BOOL _isDiscoverable;
	BOOL _isConnectable;
	BOOL _isScanning;
	NSString* _address;
	NSArray* _devices;

}

@property (assign,nonatomic) BOOL powerOn;                     //@synthesize powerOn=_powerOn - In the implementation block
@property (nonatomic,copy) NSString * address;                 //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL isDiscoverable;              //@synthesize isDiscoverable=_isDiscoverable - In the implementation block
@property (assign,nonatomic) BOOL isConnectable;               //@synthesize isConnectable=_isConnectable - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                  //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,copy) NSArray * devices;                  //@synthesize devices=_devices - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIsScanning:(BOOL)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)address;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(BOOL)isScanning;
-(BOOL)powerOn;
-(void)setPowerOn:(BOOL)arg1 ;
-(BOOL)isDiscoverable;
-(BOOL)isEqualToBluetoothStatus:(id)arg1 ;
-(void)setIsDiscoverable:(BOOL)arg1 ;
-(void)setIsConnectable:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isConnectable;
@end

