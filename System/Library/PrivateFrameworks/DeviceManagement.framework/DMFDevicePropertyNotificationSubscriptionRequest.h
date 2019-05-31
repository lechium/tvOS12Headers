/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:44 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSArray;

@interface DMFDevicePropertyNotificationSubscriptionRequest : DMFTaskRequest {

	NSArray* _propertyKeys;

}

@property (nonatomic,copy) NSArray * propertyKeys;              //@synthesize propertyKeys=_propertyKeys - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
