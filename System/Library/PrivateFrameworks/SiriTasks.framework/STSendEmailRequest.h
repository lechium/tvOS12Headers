/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STEmailMessage;

@interface STSendEmailRequest : AFSiriRequest {

	STEmailMessage* _message;

}
+(BOOL)supportsSecureCoding;
-(id)createResponse;
-(BOOL)_makeAppFrontmost;
-(id)_initWithMessage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)message;
@end

