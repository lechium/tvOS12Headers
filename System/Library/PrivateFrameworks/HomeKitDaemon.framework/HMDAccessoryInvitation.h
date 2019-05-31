/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:08 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDAccessory;

@interface HMDAccessoryInvitation : HMFObject <NSSecureCoding> {

	NSUUID* _identifier;
	HMDAccessory* _accessory;
	long long _state;

}

@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDAccessory *)accessory;
-(id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3 ;
-(NSUUID *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
@end

