/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:04:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCTransportStream : NSObject {

	unsigned _transportSessionID;
	int _vtpReceiveSocket;
	int _vtpCancelSocket;
	tagVCMediaQueueRef _mediaQueue;

}

@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;              //@synthesize mediaQueue=_mediaQueue - In the implementation block
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(tagVCMediaQueueRef)mediaQueue;
-(id)initWithTransportSessionID:(unsigned)arg1 options:(id)arg2 ;
-(int)VCTransportStreamSendPacket:(SCD_Struct_VC136*)arg1 ;
-(void)VCTransportStreamUnblock;
-(int)receivePacket:(SCD_Struct_VC136*)arg1 ;
-(void)dealloc;
@end
