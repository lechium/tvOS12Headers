/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:13 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest {

	STMediaChannel* _channel;

}

@property (nonatomic,readonly) STMediaChannel * channel;              //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(STMediaChannel *)channel;
-(id)_initWithChannel:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
