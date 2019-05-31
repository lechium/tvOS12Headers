/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFShowAlarmRequest : AFSiriRequest {

	NSArray* _alarms;

}

@property (nonatomic,copy) NSArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)alarms;
-(void)setAlarms:(NSArray *)arg1 ;
-(id)createResponse;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

