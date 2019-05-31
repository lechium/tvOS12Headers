/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:14 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSDate;

@interface HMDUserPushCache : HMFObject {

	HMDDevice* _device;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HMDDevice * device;                         //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(id)init;
@end

