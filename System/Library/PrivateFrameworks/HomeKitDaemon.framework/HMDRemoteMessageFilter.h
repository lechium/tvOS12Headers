/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMessageFilter.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDHome, NSString;

@interface HMDRemoteMessageFilter : HMDMessageFilter <HMFLogging> {

	HMDHome* _home;

}

@property (nonatomic,__weak,readonly) HMDHome * home;               //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)shouldCheckMessage:(id)arg1 ;
-(HMDHome *)home;
-(id)logIdentifier;
-(id)initWithName:(id)arg1 home:(id)arg2 ;
-(BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3 ;
-(BOOL)_isTargetingHome:(id)arg1 ;
@end

