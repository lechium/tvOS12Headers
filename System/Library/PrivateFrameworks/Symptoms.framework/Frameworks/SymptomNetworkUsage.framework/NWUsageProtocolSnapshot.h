/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
@class NSDate, NSString, NSUUID, NSDictionary, NSData;

@interface NWUsageProtocolSnapshot : NSObject {

	double _startStamp;
	double _snapStamp;
	unsigned _flags;
	update_subset_for_deltas _prev_items;
	nstat_msg_src_update_convenient _nstat_update;
	BOOL _closed;
	BOOL _startScreenStateOn;
	BOOL _snapshotScreenStateOn;
	BOOL _interfaceUnknown;
	BOOL _interfaceLoopback;
	BOOL _interfaceCellular;
	BOOL _interfaceCellularViaFallback;
	BOOL _interfaceWifi;
	BOOL _interfaceWired;
	BOOL _interfaceAWDL;
	BOOL _interfaceExpensive;
	BOOL _flowUsesChannels;
	unsigned _interfaceIndex;
	unsigned _receiveBufferSize;
	unsigned _receiveBufferUsed;
	unsigned _trafficClass;
	int _processID;
	int _epid;
	int _attributionReason;
	unsigned _startAppState;
	unsigned _snapshotAppState;
	unsigned __flow_flags;
	NSDate* _flowStartTimestamp;
	NSDate* _flowSnapshotTimestamp;
	unsigned long long _flowStartContinuousTime;
	double _flowDuration;
	unsigned long long _uniqueProcessID;
	NSString* _processName;
	unsigned long long _eupid;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSString* _attributedEntity;
	NSDictionary* _lookupResults;
	NSData* _localAddress;
	NSData* _remoteAddress;
	unsigned long long _networkActivityMapStartTime;
	unsigned long long _networkActivityMapPart1;
	unsigned long long _networkActivityMapPart2;

}

@property (readonly) unsigned _flow_flags;                                            //@synthesize _flow_flags=__flow_flags - In the implementation block
@property (readonly) const update_subset_for_deltas* _update_delta_ptr; 
@property (readonly) const nstat_msg_src_update_convenient* _update_ptr; 
@property (retain) NSString * attributedEntity;                                       //@synthesize attributedEntity=_attributedEntity - In the implementation block
@property (assign) int attributionReason;                                             //@synthesize attributionReason=_attributionReason - In the implementation block
@property (retain) NSDictionary * lookupResults;                                      //@synthesize lookupResults=_lookupResults - In the implementation block
@property (assign) unsigned startAppState;                                            //@synthesize startAppState=_startAppState - In the implementation block
@property (assign) BOOL startScreenStateOn;                                           //@synthesize startScreenStateOn=_startScreenStateOn - In the implementation block
@property (assign) unsigned snapshotAppState;                                         //@synthesize snapshotAppState=_snapshotAppState - In the implementation block
@property (assign) BOOL snapshotScreenStateOn;                                        //@synthesize snapshotScreenStateOn=_snapshotScreenStateOn - In the implementation block
@property (readonly) unsigned long long flowIdentifier; 
@property (readonly) NSDate * flowStartTimestamp;                                     //@synthesize flowStartTimestamp=_flowStartTimestamp - In the implementation block
@property (readonly) NSDate * flowSnapshotTimestamp;                                  //@synthesize flowSnapshotTimestamp=_flowSnapshotTimestamp - In the implementation block
@property (readonly) unsigned long long flowStartContinuousTime;                      //@synthesize flowStartContinuousTime=_flowStartContinuousTime - In the implementation block
@property (readonly) double flowDuration;                                             //@synthesize flowDuration=_flowDuration - In the implementation block
@property (readonly) BOOL closed;                                                     //@synthesize closed=_closed - In the implementation block
@property (readonly) unsigned long long rxPackets; 
@property (readonly) unsigned long long txPackets; 
@property (readonly) unsigned long long rxBytes; 
@property (readonly) unsigned long long txBytes; 
@property (readonly) unsigned long long rxCellularBytes; 
@property (readonly) unsigned long long rxWiFiBytes; 
@property (readonly) unsigned long long rxWiredBytes; 
@property (readonly) unsigned long long txCellularBytes; 
@property (readonly) unsigned long long txWiFiBytes; 
@property (readonly) unsigned long long txWiredBytes; 
@property (readonly) unsigned long long deltaRxPackets; 
@property (readonly) unsigned long long deltaRxBytes; 
@property (readonly) unsigned long long deltaTxPackets; 
@property (readonly) unsigned long long deltaTxBytes; 
@property (readonly) unsigned long long deltaRxCellularBytes; 
@property (readonly) unsigned long long deltaRxWiFiBytes; 
@property (readonly) unsigned long long deltaRxWiredBytes; 
@property (readonly) unsigned long long deltaTxCellularBytes; 
@property (readonly) unsigned long long deltaTxWiFiBytes; 
@property (readonly) unsigned long long deltaTxWiredBytes; 
@property (readonly) unsigned interfaceIndex;                                         //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (readonly) unsigned receiveBufferSize;                                      //@synthesize receiveBufferSize=_receiveBufferSize - In the implementation block
@property (readonly) unsigned receiveBufferUsed;                                      //@synthesize receiveBufferUsed=_receiveBufferUsed - In the implementation block
@property (readonly) unsigned trafficClass;                                           //@synthesize trafficClass=_trafficClass - In the implementation block
@property (readonly) unsigned long long uniqueProcessID;                              //@synthesize uniqueProcessID=_uniqueProcessID - In the implementation block
@property (readonly) int processID;                                                   //@synthesize processID=_processID - In the implementation block
@property (readonly) NSString * processName;                                          //@synthesize processName=_processName - In the implementation block
@property (readonly) unsigned long long eupid;                                        //@synthesize eupid=_eupid - In the implementation block
@property (readonly) int epid;                                                        //@synthesize epid=_epid - In the implementation block
@property (readonly) NSUUID * uuid;                                                   //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSUUID * euuid;                                                  //@synthesize euuid=_euuid - In the implementation block
@property (readonly) NSUUID * vuuid;                                                  //@synthesize vuuid=_vuuid - In the implementation block
@property (readonly) NSString * attributionReasonString; 
@property (readonly) BOOL startAppStateIsForeground; 
@property (readonly) NSString * startAppStateString; 
@property (readonly) BOOL snapshotAppStateIsForeground; 
@property (readonly) NSString * snapshotAppStateString; 
@property (readonly) NSData * localAddress;                                           //@synthesize localAddress=_localAddress - In the implementation block
@property (readonly) NSData * remoteAddress;                                          //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (readonly) BOOL interfaceUnknown;                                           //@synthesize interfaceUnknown=_interfaceUnknown - In the implementation block
@property (readonly) BOOL interfaceLoopback;                                          //@synthesize interfaceLoopback=_interfaceLoopback - In the implementation block
@property (readonly) BOOL interfaceCellular;                                          //@synthesize interfaceCellular=_interfaceCellular - In the implementation block
@property (readonly) BOOL interfaceCellularViaFallback;                               //@synthesize interfaceCellularViaFallback=_interfaceCellularViaFallback - In the implementation block
@property (readonly) BOOL interfaceWifi;                                              //@synthesize interfaceWifi=_interfaceWifi - In the implementation block
@property (readonly) BOOL interfaceWired;                                             //@synthesize interfaceWired=_interfaceWired - In the implementation block
@property (readonly) BOOL interfaceAWDL;                                              //@synthesize interfaceAWDL=_interfaceAWDL - In the implementation block
@property (readonly) BOOL interfaceExpensive;                                         //@synthesize interfaceExpensive=_interfaceExpensive - In the implementation block
@property (readonly) BOOL flowUsesChannels;                                           //@synthesize flowUsesChannels=_flowUsesChannels - In the implementation block
@property (readonly) unsigned long long networkActivityMapStartTime;                  //@synthesize networkActivityMapStartTime=_networkActivityMapStartTime - In the implementation block
@property (readonly) unsigned long long networkActivityMapPart1;                      //@synthesize networkActivityMapPart1=_networkActivityMapPart1 - In the implementation block
@property (readonly) unsigned long long networkActivityMapPart2;                      //@synthesize networkActivityMapPart2=_networkActivityMapPart2 - In the implementation block
+(double)_intervalWithContinuousTime:(unsigned long long)arg1 ;
+(id)_dateWithContinuousTime:(unsigned long long)arg1 ;
+(double)_referenceIntervalWithContinuousTime:(unsigned long long)arg1 ;
+(void)initialize;
-(unsigned)trafficClass;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(unsigned)interfaceIndex;
-(unsigned long long)rxPackets;
-(unsigned long long)txPackets;
-(BOOL)closed;
-(unsigned long long)flowIdentifier;
-(int)processID;
-(NSData *)remoteAddress;
-(NSData *)localAddress;
-(NSUUID *)euuid;
-(NSUUID *)vuuid;
-(double)flowDuration;
-(unsigned long long)rxCellularBytes;
-(unsigned long long)txCellularBytes;
-(unsigned long long)rxWiFiBytes;
-(unsigned long long)txWiFiBytes;
-(unsigned long long)rxWiredBytes;
-(unsigned long long)txWiredBytes;
-(BOOL)interfaceCellularViaFallback;
-(BOOL)interfaceAWDL;
-(int)epid;
-(NSDate *)flowStartTimestamp;
-(BOOL)interfaceCellular;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned)_rxDuplicateBytes;
-(unsigned)_rxOutOfOrderBytes;
-(unsigned)_txRetransmittedBytes;
-(unsigned)_deltaRxDuplicateBytes;
-(unsigned)_deltaRxOutOfOrderBytes;
-(unsigned)_deltaTxRetransmittedBytes;
-(double)_rttMinimum;
-(double)_rttAverage;
-(double)_rttVariation;
-(const nstat_msg_src_update_convenient*)_update_ptr;
-(id)_createNSUUIDForBytes:(unsigned char)arg1 ;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 ;
-(id)initWithUpdate:(const nstat_msg_src_update_convenient*)arg1 startTime:(double)arg2 flowFlags:(unsigned)arg3 previously:(update_subset_for_deltas*)arg4 ;
-(BOOL)flowUsesChannels;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceExpensive;
-(unsigned long long)flowStartContinuousTime;
-(NSDate *)flowSnapshotTimestamp;
-(NSString *)attributedEntity;
-(void)setAttributedEntity:(NSString *)arg1 ;
-(int)attributionReason;
-(void)setAttributionReason:(int)arg1 ;
-(unsigned)startAppState;
-(void)setStartAppState:(unsigned)arg1 ;
-(BOOL)startScreenStateOn;
-(void)setStartScreenStateOn:(BOOL)arg1 ;
-(void)setAttribution:(id)arg1 derivation:(int)arg2 ;
-(void)setAppState:(unsigned)arg1 screenStateOn:(BOOL)arg2 startAppState:(unsigned)arg3 startScreenStateOn:(BOOL)arg4 ;
-(void)setLookupResults:(NSDictionary *)arg1 ;
-(unsigned long long)deltaRxBytes;
-(unsigned long long)deltaTxBytes;
-(unsigned long long)deltaRxCellularBytes;
-(unsigned long long)deltaTxCellularBytes;
-(unsigned long long)deltaRxWiFiBytes;
-(unsigned long long)deltaTxWiFiBytes;
-(unsigned long long)deltaRxWiredBytes;
-(unsigned long long)deltaTxWiredBytes;
-(unsigned long long)_byteOverheadForPacketCount:(unsigned long long)arg1 ;
-(unsigned)snapshotAppState;
-(unsigned long long)_deltaForCurrentBytes:(unsigned long long)arg1 packets:(unsigned long long)arg2 prevBytes:(unsigned long long)arg3 prevPackets:(unsigned long long)arg4 ;
-(void)setSnapshotAppState:(unsigned)arg1 ;
-(void)setSnapshotScreenStateOn:(BOOL)arg1 ;
-(BOOL)startAppStateIsForeground;
-(NSString *)startAppStateString;
-(BOOL)snapshotAppStateIsForeground;
-(NSString *)snapshotAppStateString;
-(unsigned long long)deltaRxPackets;
-(unsigned long long)deltaTxPackets;
-(const update_subset_for_deltas*)_update_delta_ptr;
-(NSString *)attributionReasonString;
-(NSDictionary *)lookupResults;
-(BOOL)snapshotScreenStateOn;
-(unsigned)_flow_flags;
-(id)description;
-(NSUUID *)uuid;
-(NSString *)processName;
@end

