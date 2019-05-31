/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:55 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSString, NSData;

@interface NWSUDPSnapshot : NWSProtocolSnapshot {

	NSString* _processName;
	NSString* _uuid;
	NSString* _euuid;
	NSString* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_udp_descriptor _descriptor;
	unsigned _provider;

}
-(unsigned)trafficClass;
-(unsigned)interfaceIndex;
-(id)traditionalDictionary;
-(id)initWithCounts:(const nstat_counts*)arg1 UDPDescriptor:(nstat_udp_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 provider:(unsigned)arg5 ;
-(id)provider;
-(int)processID;
-(id)remoteAddress;
-(id)localAddress;
-(id)euuid;
-(id)vuuid;
-(BOOL)countsIncludeHeaderOverhead;
-(double)flowDuration;
-(BOOL)interfaceAWDL;
-(int)epid;
-(id)flowStartTimestamp;
-(BOOL)interfaceCellular;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceExpensive;
-(unsigned long long)flowStartContinuousTime;
-(id)description;
-(id)uuid;
-(id)processName;
@end

