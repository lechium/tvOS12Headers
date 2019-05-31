/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSArray;

@interface HMDDeviceRegistrationEntry : HMFObject {

	HMDDevice* _device;
	NSArray* _accessoryUUIDList;

}

@property (nonatomic,readonly) HMDDevice * device;                       //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSArray * accessoryUUIDList;              //@synthesize accessoryUUIDList=_accessoryUUIDList - In the implementation block
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 accessoryList:(id)arg2 ;
-(NSArray *)accessoryUUIDList;
-(BOOL)isEqual:(id)arg1 ;
@end
