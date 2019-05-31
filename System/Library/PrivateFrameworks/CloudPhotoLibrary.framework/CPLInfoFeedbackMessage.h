/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:46 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSDictionary;

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage {

	NSDictionary* _info;

}

@property (nonatomic,readonly) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)feedbackType;
-(id)serverMessage;
-(id)initWithInfo:(id)arg1 ;
-(NSDictionary *)info;
@end

