/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationsResultObject : CATTaskResultObject {

	NSArray* _payloadDescriptions;

}

@property (nonatomic,copy) NSArray * payloadDescriptions;              //@synthesize payloadDescriptions=_payloadDescriptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)payloadDescriptions;
-(void)setPayloadDescriptions:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

