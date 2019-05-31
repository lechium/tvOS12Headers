/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 10:57:54 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkStatistics/NetworkStatistics-Structs.h>
@class NSString, NSDictionary;

@interface NWSSnapshot : NSObject {

	nstat_counts _counts;
	unsigned long long _changeSeqno;
	unsigned long long _sourceIdentifier;
	NSString* _provider;
	NSDictionary* _traditionalDictionary;

}

@property (readonly) unsigned _rxDuplicateBytes; 
@property (readonly) unsigned _rxOutOfOrderBytes; 
@property (readonly) unsigned _txRetransmittedBytes; 
@property (readonly) unsigned _connectAttempts; 
@property (readonly) unsigned _connectSuccesses; 
@property (readonly) double _rttMinimum; 
@property (readonly) double _rttAverage; 
@property (readonly) double _rttVariation; 
@property (readonly) unsigned long long rxPackets; 
@property (readonly) unsigned long long rxBytes; 
@property (readonly) unsigned long long txPackets; 
@property (readonly) unsigned long long txBytes; 
@property (readonly) unsigned long long rxCellularBytes; 
@property (readonly) unsigned long long rxWiFiBytes; 
@property (readonly) unsigned long long rxWiredBytes; 
@property (readonly) unsigned long long txCellularBytes; 
@property (readonly) unsigned long long txWiFiBytes; 
@property (readonly) unsigned long long txWiredBytes; 
@property (readonly) unsigned long long changeSeqno;                    //@synthesize changeSeqno=_changeSeqno - In the implementation block
@property (readonly) unsigned long long sourceIdentifier;               //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (readonly) NSString * provider;                               //@synthesize provider=_provider - In the implementation block
@property (readonly) NSDictionary * traditionalDictionary;              //@synthesize traditionalDictionary=_traditionalDictionary - In the implementation block
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(unsigned long long)rxPackets;
-(unsigned long long)txPackets;
-(NSDictionary *)traditionalDictionary;
-(id)_createCountsForProvider:(int)arg1 ;
-(id)_initWithCounts:(const nstat_counts*)arg1 sourceIdent:(unsigned long long)arg2 seqno:(unsigned long long)arg3 ;
-(unsigned)_connectAttempts;
-(unsigned)_connectSuccesses;
-(unsigned long long)changeSeqno;
-(NSString *)provider;
-(unsigned long long)sourceIdentifier;
-(unsigned long long)rxCellularBytes;
-(unsigned long long)txCellularBytes;
-(unsigned long long)rxWiFiBytes;
-(unsigned long long)txWiFiBytes;
-(unsigned long long)rxWiredBytes;
-(unsigned long long)txWiredBytes;
-(unsigned)_rxDuplicateBytes;
-(unsigned)_rxOutOfOrderBytes;
-(unsigned)_txRetransmittedBytes;
-(double)_rttMinimum;
-(double)_rttAverage;
-(double)_rttVariation;
-(id)description;
@end

