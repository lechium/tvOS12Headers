/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMAssociatedMessageChatItem.h>

@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem {

	long long _messageAcknowledgmentType;

}

@property (nonatomic,readonly) long long messageAcknowledgmentType;              //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
-(id)_initWithItem:(id)arg1 sender:(id)arg2 messageAcknowledgmentType:(long long)arg3 ;
-(long long)messageAcknowledgmentType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

