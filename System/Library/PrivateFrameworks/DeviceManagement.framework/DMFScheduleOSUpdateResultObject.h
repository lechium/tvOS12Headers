/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString, NSError;

@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject {

	unsigned long long _action;
	NSString* _productKey;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long action;               //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * productKey;              //@synthesize productKey=_productKey - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)productKey;
-(id)initWithAction:(unsigned long long)arg1 productKey:(id)arg2 error:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)action;
-(NSError *)error;
@end

