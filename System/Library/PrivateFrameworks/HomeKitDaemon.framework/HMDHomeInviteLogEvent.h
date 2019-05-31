/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:09 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDHomeInviteLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	int _stage;
	int _responseType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int stage;                           //@synthesize stage=_stage - In the implementation block
@property (nonatomic,readonly) int responseType;                    //@synthesize responseType=_responseType - In the implementation block
+(id)homeInvitationWithStage:(int)arg1 ;
+(id)homeInvitationWithStage:(int)arg1 responseType:(int)arg2 ;
+(id)uuid;
-(int)responseType;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initInvitationWithStage:(int)arg1 responseType:(int)arg2 ;
-(int)stage;
@end
