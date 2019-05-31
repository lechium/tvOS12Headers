/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:03 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVCPacketRelayConnectionProtocol.h>

@class IDSDatagramChannel, IDSService, AVCPacketFilter;

@interface AVCPacketRelayIDSConnection : NSObject <AVCPacketRelayConnectionProtocol> {

	unsigned char _type;
	/*^block*/id _readHandler;
	BOOL _isDemuxNeeded;
	BOOL _isResumed;
	IDSDatagramChannel* _datagramChannel;
	IDSService* _packetRelayService;
	AVCPacketFilter* _packetFilter;

}

@property (assign) BOOL isResumed;                              //@synthesize isResumed=_isResumed - In the implementation block
@property (readonly) unsigned char type;                        //@synthesize type=_type - In the implementation block
@property (assign) BOOL isDemuxNeeded;                          //@synthesize isDemuxNeeded=_isDemuxNeeded - In the implementation block
@property (copy) id readHandler;                                //@synthesize readHandler=_readHandler - In the implementation block
@property (retain) AVCPacketFilter * packetFilter;              //@synthesize packetFilter=_packetFilter - In the implementation block
-(void)setReadHandler:(id)arg1 ;
-(id)readHandler;
-(void)readyToRead;
-(void)setPacketFilter:(AVCPacketFilter *)arg1 ;
-(BOOL)sendData:(const void*)arg1 size:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)isDemuxNeeded;
-(void)setIsDemuxNeeded:(BOOL)arg1 ;
-(AVCPacketFilter *)packetFilter;
-(BOOL)isResumed;
-(void)setIsResumed:(BOOL)arg1 ;
-(id)initWithIDSSocketDescriptor:(unsigned short)arg1 ;
-(id)initWithIDSDestination:(id)arg1 ;
-(void)dealloc;
-(unsigned char)type;
-(int)stop;
-(int)start;
@end

