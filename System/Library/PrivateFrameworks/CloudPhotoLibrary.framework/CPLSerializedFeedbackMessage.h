/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:45 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, CPLServerFeedbackMessage, NSString, NSDictionary;

@interface CPLSerializedFeedbackMessage : NSObject {

	NSUUID* _uuid;
	CPLServerFeedbackMessage* _serverMessage;
	NSString* _feedbackType;

}

@property (nonatomic,readonly) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * feedbackType;                               //@synthesize feedbackType=_feedbackType - In the implementation block
@property (nonatomic,readonly) CPLServerFeedbackMessage * serverMessage;              //@synthesize serverMessage=_serverMessage - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)plistRepresentationForMessages:(id)arg1 ;
+(id)messagesForPlistRepresentation:(id)arg1 ;
-(NSString *)feedbackType;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(CPLServerFeedbackMessage *)serverMessage;
-(id)initWithMessage:(id)arg1 ;
-(id)description;
-(NSUUID *)uuid;
-(NSDictionary *)dictionaryRepresentation;
@end
