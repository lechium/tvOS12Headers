/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:43 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDLibnetcoreTCPStatsReport : PBCodable <NSCopying> {

	unsigned long long _tcpConnectionAccepts;
	unsigned long long _tcpConnectionAttempts;
	unsigned long long _tcpIPv4AvgRTT;
	unsigned long long _tcpIPv6AvgRTT;
	unsigned long long _tcpRecvPLR;
	unsigned long long _tcpSendPLR;
	unsigned long long _tcpSendReorderRate;
	unsigned long long _tcpSendTLRTO;
	SCD_Struct_AW13 _has;

}

@property (assign,nonatomic) BOOL hasTcpIPv4AvgRTT; 
@property (assign,nonatomic) unsigned long long tcpIPv4AvgRTT;                      //@synthesize tcpIPv4AvgRTT=_tcpIPv4AvgRTT - In the implementation block
@property (assign,nonatomic) BOOL hasTcpIPv6AvgRTT; 
@property (assign,nonatomic) unsigned long long tcpIPv6AvgRTT;                      //@synthesize tcpIPv6AvgRTT=_tcpIPv6AvgRTT - In the implementation block
@property (assign,nonatomic) BOOL hasTcpSendPLR; 
@property (assign,nonatomic) unsigned long long tcpSendPLR;                         //@synthesize tcpSendPLR=_tcpSendPLR - In the implementation block
@property (assign,nonatomic) BOOL hasTcpRecvPLR; 
@property (assign,nonatomic) unsigned long long tcpRecvPLR;                         //@synthesize tcpRecvPLR=_tcpRecvPLR - In the implementation block
@property (assign,nonatomic) BOOL hasTcpSendTLRTO; 
@property (assign,nonatomic) unsigned long long tcpSendTLRTO;                       //@synthesize tcpSendTLRTO=_tcpSendTLRTO - In the implementation block
@property (assign,nonatomic) BOOL hasTcpSendReorderRate; 
@property (assign,nonatomic) unsigned long long tcpSendReorderRate;                 //@synthesize tcpSendReorderRate=_tcpSendReorderRate - In the implementation block
@property (assign,nonatomic) BOOL hasTcpConnectionAttempts; 
@property (assign,nonatomic) unsigned long long tcpConnectionAttempts;              //@synthesize tcpConnectionAttempts=_tcpConnectionAttempts - In the implementation block
@property (assign,nonatomic) BOOL hasTcpConnectionAccepts; 
@property (assign,nonatomic) unsigned long long tcpConnectionAccepts;               //@synthesize tcpConnectionAccepts=_tcpConnectionAccepts - In the implementation block
-(void)setTcpIPv4AvgRTT:(unsigned long long)arg1 ;
-(void)setHasTcpIPv4AvgRTT:(BOOL)arg1 ;
-(BOOL)hasTcpIPv4AvgRTT;
-(void)setTcpIPv6AvgRTT:(unsigned long long)arg1 ;
-(void)setHasTcpIPv6AvgRTT:(BOOL)arg1 ;
-(BOOL)hasTcpIPv6AvgRTT;
-(void)setTcpSendPLR:(unsigned long long)arg1 ;
-(void)setHasTcpSendPLR:(BOOL)arg1 ;
-(BOOL)hasTcpSendPLR;
-(void)setTcpRecvPLR:(unsigned long long)arg1 ;
-(void)setHasTcpRecvPLR:(BOOL)arg1 ;
-(BOOL)hasTcpRecvPLR;
-(void)setTcpSendTLRTO:(unsigned long long)arg1 ;
-(void)setHasTcpSendTLRTO:(BOOL)arg1 ;
-(BOOL)hasTcpSendTLRTO;
-(void)setTcpSendReorderRate:(unsigned long long)arg1 ;
-(void)setHasTcpSendReorderRate:(BOOL)arg1 ;
-(BOOL)hasTcpSendReorderRate;
-(void)setTcpConnectionAttempts:(unsigned long long)arg1 ;
-(void)setHasTcpConnectionAttempts:(BOOL)arg1 ;
-(BOOL)hasTcpConnectionAttempts;
-(void)setTcpConnectionAccepts:(unsigned long long)arg1 ;
-(void)setHasTcpConnectionAccepts:(BOOL)arg1 ;
-(BOOL)hasTcpConnectionAccepts;
-(unsigned long long)tcpIPv4AvgRTT;
-(unsigned long long)tcpIPv6AvgRTT;
-(unsigned long long)tcpSendPLR;
-(unsigned long long)tcpRecvPLR;
-(unsigned long long)tcpSendTLRTO;
-(unsigned long long)tcpSendReorderRate;
-(unsigned long long)tcpConnectionAttempts;
-(unsigned long long)tcpConnectionAccepts;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

