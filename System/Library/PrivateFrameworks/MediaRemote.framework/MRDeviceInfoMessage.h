/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRDeviceInfoMessage : MRProtocolMessage {

	MRSupportedProtocolMessages* _supportedProtocolMessages;

}

@property (nonatomic,readonly) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (nonatomic,readonly) MRSupportedProtocolMessages * supportedProtocolMessages; 
-(unsigned long long)encryptionType;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(unsigned long long)_lastSupportedMessageType;
-(unsigned long long)_lastSupportedMessageTypeBeforeSupportedMessagesWereAddedToDeviceInfo;
-(id)initWithDeviceInfo:(id)arg1 ;
-(MRSupportedProtocolMessages *)supportedProtocolMessages;
-(unsigned long long)type;
@end

