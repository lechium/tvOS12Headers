/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:59:11 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock;

@interface GEOLogMsgPolicyConfiguration : NSObject {

	NSLock* _supportedPoliciesLock;

}
+(id)sharedLogMsgPolicyConfiguration;
-(void)_configureSupportedLogMsgPolicies;
-(id)_logMsgPolicyUsageForLogMessageType:(int)arg1 ;
-(id)supportedLogMsgPolicies;
-(id)init;
-(void)dealloc;
@end
