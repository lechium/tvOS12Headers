/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, HMSetupAccessoryPayload;

@interface HFSetupAccessoryResult : NSObject {

	NSError* _error;
	HMSetupAccessoryPayload* _setupPayload;

}

@property (nonatomic,readonly) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) HMSetupAccessoryPayload * setupPayload;              //@synthesize setupPayload=_setupPayload - In the implementation block
+(BOOL)isHomeKitURL:(id)arg1 ;
-(HMSetupAccessoryPayload *)setupPayload;
-(BOOL)isAllZerosCode;
-(id)initWithPayload:(id)arg1 error:(id)arg2 ;
-(id)initWithSetupCode:(id)arg1 ;
-(id)initWithSetupURL:(id)arg1 ;
-(id)description;
-(id)initWithPayload:(id)arg1 ;
-(NSError *)error;
@end

