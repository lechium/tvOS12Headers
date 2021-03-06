/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:01 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMFTimer, NSString;

@interface HMDUserPresenceFeedRetryTimer : NSObject <HMFLogging> {

	NSUUID* _timerID;
	HMFTimer* _retryTimer;
	unsigned long long _retryCount;

}

@property (nonatomic,readonly) NSUUID * timerID;                         //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,retain) HMFTimer * retryTimer;                      //@synthesize retryTimer=_retryTimer - In the implementation block
@property (nonatomic,readonly) double retryTimeInterval; 
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(id)logIdentifier;
-(NSUUID *)timerID;
-(double)retryTimeInterval;
-(BOOL)shouldRetryImmediately:(double)arg1 ;
-(HMFTimer *)retryTimer;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(void)startWithDelegate:(id)arg1 responseTime:(double)arg2 ;
-(id)init;
-(NSString *)description;
-(void)cancel;
@end

