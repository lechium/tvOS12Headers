/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSNumber, HMDDevice;

@interface HMDResidentDeviceModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * deviceUUID; 
@property (nonatomic,retain) NSNumber * enabled; 
@property (nonatomic,retain) NSNumber * confirmed; 
@property (nonatomic,retain) HMDDevice * device; 
+(id)properties;
@end

