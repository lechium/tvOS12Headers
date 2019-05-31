/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:18 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSDate, CEMAnyPayload;

@interface CEMMessageBase : CEMPayloadBase {

	NSString* _messageType;
	NSString* _messageIdentifier;
	NSString* _messageInReplyTo;
	NSDate* _messageTimestamp;
	CEMAnyPayload* _messagePayload;

}

@property (nonatomic,copy) NSString * messageType;                      //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy) NSString * messageIdentifier;                //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * messageInReplyTo;                 //@synthesize messageInReplyTo=_messageInReplyTo - In the implementation block
@property (nonatomic,copy) NSDate * messageTimestamp;                   //@synthesize messageTimestamp=_messageTimestamp - In the implementation block
@property (nonatomic,copy) CEMAnyPayload * messagePayload;              //@synthesize messagePayload=_messagePayload - In the implementation block
+(id)messageForPayload:(id)arg1 error:(id*)arg2 ;
+(id)messageForData:(id)arg1 error:(id*)arg2 ;
-(void)setMessageType:(NSString *)arg1 ;
-(NSString *)messageType;
-(CEMAnyPayload *)messagePayload;
-(id)serialize;
-(NSString *)messageIdentifier;
-(void)setMessageIdentifier:(NSString *)arg1 ;
-(void)setMessagePayload:(CEMAnyPayload *)arg1 ;
-(id)serializeAsDataWithError:(id*)arg1 ;
-(BOOL)loadMessageFromDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)messageInReplyTo;
-(void)setMessageInReplyTo:(NSString *)arg1 ;
-(NSDate *)messageTimestamp;
-(void)setMessageTimestamp:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

