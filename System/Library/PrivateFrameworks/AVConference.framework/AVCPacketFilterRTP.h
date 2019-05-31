/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:58 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVCPacketFilter.h>

@interface AVCPacketFilterRTP : AVCPacketFilter {

	unsigned _SSRC;
	unsigned char _type;

}
-(BOOL)isMatchedPacket:(const void*)arg1 size:(int)arg2 ;
-(BOOL)isRTCPPayload:(unsigned short)arg1 ;
-(BOOL)isPayloadTypeMatched:(BOOL)arg1 ;
-(id)initWithIncomingSSRC:(unsigned)arg1 acceptPacketType:(unsigned char)arg2 ;
@end

