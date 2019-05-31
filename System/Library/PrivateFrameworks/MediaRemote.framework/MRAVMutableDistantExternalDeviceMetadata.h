/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVDistantExternalDeviceMetadata.h>

@class NSString, MRSupportedProtocolMessages, _MRDeviceInfoMessageProtobuf;

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * hostName; 
@property (assign,nonatomic) long long hostPort; 
@property (nonatomic,retain) MRSupportedProtocolMessages * supportedMessages; 
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (assign,nonatomic) BOOL paired; 
@property (assign,nonatomic) BOOL usingSystemPairing; 
-(void)setHostPort:(long long)arg1 ;
-(void)setSupportedMessages:(MRSupportedProtocolMessages *)arg1 ;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(void)setUsingSystemPairing:(BOOL)arg1 ;
-(void)setHostName:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

