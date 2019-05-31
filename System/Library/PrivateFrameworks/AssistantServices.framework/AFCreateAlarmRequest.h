/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:37 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STAlarm;

@interface AFCreateAlarmRequest : AFSiriRequest {

	STAlarm* _alarm;

}

@property (nonatomic,retain) STAlarm * alarm;              //@synthesize alarm=_alarm - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(void)setAlarm:(STAlarm *)arg1 ;
-(STAlarm *)alarm;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
