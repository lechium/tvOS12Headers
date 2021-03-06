/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:06 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMDDataStreamTransportTcpListeningPort : NSObject <NSCopying> {

	unsigned short _tcpListeningPort;

}

@property (assign,nonatomic) unsigned short tcpListeningPort;              //@synthesize tcpListeningPort=_tcpListeningPort - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)setTcpListeningPort:(unsigned short)arg1 ;
-(unsigned short)tcpListeningPort;
-(id)initWithTcpListeningPort:(unsigned short)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

