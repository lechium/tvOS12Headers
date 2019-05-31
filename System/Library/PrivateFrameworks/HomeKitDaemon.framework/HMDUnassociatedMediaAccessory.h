/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUnassociatedAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccessoryAdvertisement, NSString;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory <HMFLogging> {

	HMDAccessoryAdvertisement* _advertisement;

}

@property (retain) HMDAccessoryAdvertisement * advertisement;              //@synthesize advertisement=_advertisement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(Class)modelClass;
-(id)logIdentifier;
-(long long)associationOptions;
-(id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)dumpDescription;
-(HMDAccessoryAdvertisement *)advertisement;
-(id)initWithAdvertisement:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)updateAdvertisementData:(id)arg1 ;
-(void)setAdvertisement:(HMDAccessoryAdvertisement *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

