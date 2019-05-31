/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TrackedFlowCounts : NSObject {

	BOOL _probedFlow;
	BOOL _probed3WHSStuckFlow;
	BOOL _probedReadStuckFlow;
	BOOL _probedWriteStuckFlow;
	unsigned long long _rxCellularBytes;
	unsigned long long _txCellularBytes;
	unsigned long long _rxWiFiBytes;
	unsigned long long _txWiFiBytes;
	unsigned long long _rxWiredBytes;
	unsigned long long _txWiredBytes;
	unsigned long long _rxPkts;
	unsigned long long _txPkts;
	unsigned long long _rxDupeBytes;
	unsigned long long _rxOOOBytes;
	unsigned long long _txReTxBytes;
	double _rttMinimumSecs;
	double _rttAverageSecs;
	double _rttVariation;

}

@property (assign,nonatomic) unsigned long long rxCellularBytes;              //@synthesize rxCellularBytes=_rxCellularBytes - In the implementation block
@property (assign,nonatomic) unsigned long long txCellularBytes;              //@synthesize txCellularBytes=_txCellularBytes - In the implementation block
@property (assign,nonatomic) unsigned long long rxWiFiBytes;                  //@synthesize rxWiFiBytes=_rxWiFiBytes - In the implementation block
@property (assign,nonatomic) unsigned long long txWiFiBytes;                  //@synthesize txWiFiBytes=_txWiFiBytes - In the implementation block
@property (assign,nonatomic) unsigned long long rxWiredBytes;                 //@synthesize rxWiredBytes=_rxWiredBytes - In the implementation block
@property (assign,nonatomic) unsigned long long txWiredBytes;                 //@synthesize txWiredBytes=_txWiredBytes - In the implementation block
@property (assign,nonatomic) unsigned long long rxPkts;                       //@synthesize rxPkts=_rxPkts - In the implementation block
@property (assign,nonatomic) unsigned long long txPkts;                       //@synthesize txPkts=_txPkts - In the implementation block
@property (assign,nonatomic) unsigned long long rxDupeBytes;                  //@synthesize rxDupeBytes=_rxDupeBytes - In the implementation block
@property (assign,nonatomic) unsigned long long rxOOOBytes;                   //@synthesize rxOOOBytes=_rxOOOBytes - In the implementation block
@property (assign,nonatomic) unsigned long long txReTxBytes;                  //@synthesize txReTxBytes=_txReTxBytes - In the implementation block
@property (assign,nonatomic) double rttMinimumSecs;                           //@synthesize rttMinimumSecs=_rttMinimumSecs - In the implementation block
@property (assign,nonatomic) double rttAverageSecs;                           //@synthesize rttAverageSecs=_rttAverageSecs - In the implementation block
@property (assign,nonatomic) double rttVariation;                             //@synthesize rttVariation=_rttVariation - In the implementation block
@property (assign,nonatomic) BOOL probedFlow;                                 //@synthesize probedFlow=_probedFlow - In the implementation block
@property (assign,nonatomic) BOOL probed3WHSStuckFlow;                        //@synthesize probed3WHSStuckFlow=_probed3WHSStuckFlow - In the implementation block
@property (assign,nonatomic) BOOL probedReadStuckFlow;                        //@synthesize probedReadStuckFlow=_probedReadStuckFlow - In the implementation block
@property (assign,nonatomic) BOOL probedWriteStuckFlow;                       //@synthesize probedWriteStuckFlow=_probedWriteStuckFlow - In the implementation block
-(unsigned long long)rxCellularBytes;
-(unsigned long long)txCellularBytes;
-(unsigned long long)rxWiFiBytes;
-(unsigned long long)txWiFiBytes;
-(unsigned long long)rxWiredBytes;
-(unsigned long long)txWiredBytes;
-(double)rttVariation;
-(unsigned long long)rxDupeBytes;
-(unsigned long long)rxOOOBytes;
-(unsigned long long)txReTxBytes;
-(void)setRxWiredBytes:(unsigned long long)arg1 ;
-(void)setTxWiredBytes:(unsigned long long)arg1 ;
-(void)setRxWiFiBytes:(unsigned long long)arg1 ;
-(void)setTxWiFiBytes:(unsigned long long)arg1 ;
-(void)setRxCellularBytes:(unsigned long long)arg1 ;
-(void)setTxCellularBytes:(unsigned long long)arg1 ;
-(void)setRxDupeBytes:(unsigned long long)arg1 ;
-(void)setRxOOOBytes:(unsigned long long)arg1 ;
-(void)setTxReTxBytes:(unsigned long long)arg1 ;
-(void)setRttMinimumSecs:(double)arg1 ;
-(void)setRttAverageSecs:(double)arg1 ;
-(void)setRttVariation:(double)arg1 ;
-(void)setRxPkts:(unsigned long long)arg1 ;
-(void)setTxPkts:(unsigned long long)arg1 ;
-(void)setProbedFlow:(BOOL)arg1 ;
-(void)setProbed3WHSStuckFlow:(BOOL)arg1 ;
-(void)setProbedReadStuckFlow:(BOOL)arg1 ;
-(void)setProbedWriteStuckFlow:(BOOL)arg1 ;
-(BOOL)probed3WHSStuckFlow;
-(unsigned long long)rxPkts;
-(unsigned long long)txPkts;
-(void)addFlowCounts:(id)arg1 ;
-(void)subtractFlowCounts:(id)arg1 ;
-(double)rttMinimumSecs;
-(double)rttAverageSecs;
-(BOOL)probedFlow;
-(BOOL)probedReadStuckFlow;
-(BOOL)probedWriteStuckFlow;
-(id)description;
@end

