/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLQuarantineFeedbackMessage : CPLFeedbackMessage {

	NSString* _reason;
	Class _recordClass;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) Class recordClass;              //@synthesize recordClass=_recordClass - In the implementation block
+(id)feedbackType;
-(id)serverMessage;
-(id)initWithClass:(Class)arg1 reason:(id)arg2 ;
-(Class)recordClass;
-(NSString *)reason;
@end
