/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDSymptomsNetworkAnalyticsRRCConnectedPeriod : PBCodable <NSCopying> {

	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _egressDlThroughputBps;
	unsigned long long _egressUlThroughputBps;
	unsigned long long _ingressDlThroughputBps;
	unsigned long long _ingressUlThroughputBps;
	unsigned long long _lastDisconnectedSecs;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _periodDurationTCEnabledUsecs;
	unsigned long long _periodDurationUsecs;
	unsigned long long _timestamp;
	unsigned long long _uniqueActiveAppCount;
	NSMutableArray* _activeNameDuringPeriods;
	unsigned _anyListener;
	unsigned _backgroundListeners;
	unsigned _countLQMTransitions;
	unsigned _egressLQM;
	unsigned _ingressLQM;
	int _periodType;
	unsigned _tcCountFlowDispositionBURST;
	unsigned _tcCountFlowDispositionDefault;
	unsigned _tcCountFlowDispositionDrop;
	unsigned _tcCountFlowDispositionFGFacetime;
	unsigned _tcCountFlowDispositionFGIMSG;
	unsigned _tcCountFlowDispositionKNOWNOTHER;
	unsigned _tcCountFlowDispositionLARGE;
	unsigned _tcCountFlowDispositionLARGEDL;
	unsigned _tcCountFlowDispositionLARGEUL;
	unsigned _tcCountFlowDispositionMail;
	unsigned _tcCountFlowDispositionMaps;
	unsigned _tcCountFlowDispositionMediaserverd;
	unsigned _tcCountFlowDispositionMusic;
	unsigned _tcCountFlowDispositionNSURLSessiond;
	unsigned _tcCountFlowDispositionNews;
	unsigned _tcCountFlowDispositionPUSH;
	unsigned _tcCountFlowDispositionPodcasts;
	unsigned _tcCountFlowDispositionRTCReportingd;
	unsigned _tcCountFlowDispositionSIRI;
	unsigned _tcCountFlowDispositionSafari;
	unsigned _tcCountFlowDispositionStocks;
	unsigned _tcCountFlowDispositionTCAV;
	unsigned _tcCountFlowDispositionTCBK;
	unsigned _tcCountFlowDispositionTCBKSYS;
	unsigned _tcCountFlowDispositionTCCTL;
	unsigned _tcCountFlowDispositionTCOAM;
	unsigned _tcCountFlowDispositionTCRD;
	unsigned _tcCountFlowDispositionTCRV;
	unsigned _tcCountFlowDispositionTCVI;
	unsigned _tcCountFlowDispositionTCVO;
	unsigned _tcCountFlowDispositionUNKNOWNOTHER;
	unsigned _tcCountFlowDispositionUndefined;
	unsigned _tcCountFlowDispositionWeather;
	unsigned _tcCountFlowDispositionWebkit;
	unsigned _tcDampeningSuppressed;
	unsigned _tcUpdates;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodType; 
@property (assign,nonatomic) int periodType;                                               //@synthesize periodType=_periodType - In the implementation block
@property (assign,nonatomic) BOOL hasAnyListener; 
@property (assign,nonatomic) unsigned anyListener;                                         //@synthesize anyListener=_anyListener - In the implementation block
@property (assign,nonatomic) BOOL hasBackgroundListeners; 
@property (assign,nonatomic) unsigned backgroundListeners;                                 //@synthesize backgroundListeners=_backgroundListeners - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodDurationUsecs; 
@property (assign,nonatomic) unsigned long long periodDurationUsecs;                       //@synthesize periodDurationUsecs=_periodDurationUsecs - In the implementation block
@property (assign,nonatomic) BOOL hasLastDisconnectedSecs; 
@property (assign,nonatomic) unsigned long long lastDisconnectedSecs;                      //@synthesize lastDisconnectedSecs=_lastDisconnectedSecs - In the implementation block
@property (assign,nonatomic) BOOL hasIngressLQM; 
@property (assign,nonatomic) unsigned ingressLQM;                                          //@synthesize ingressLQM=_ingressLQM - In the implementation block
@property (assign,nonatomic) BOOL hasCountLQMTransitions; 
@property (assign,nonatomic) unsigned countLQMTransitions;                                 //@synthesize countLQMTransitions=_countLQMTransitions - In the implementation block
@property (assign,nonatomic) BOOL hasEgressLQM; 
@property (assign,nonatomic) unsigned egressLQM;                                           //@synthesize egressLQM=_egressLQM - In the implementation block
@property (assign,nonatomic) BOOL hasIngressUlThroughputBps; 
@property (assign,nonatomic) unsigned long long ingressUlThroughputBps;                    //@synthesize ingressUlThroughputBps=_ingressUlThroughputBps - In the implementation block
@property (assign,nonatomic) BOOL hasIngressDlThroughputBps; 
@property (assign,nonatomic) unsigned long long ingressDlThroughputBps;                    //@synthesize ingressDlThroughputBps=_ingressDlThroughputBps - In the implementation block
@property (assign,nonatomic) BOOL hasEgressUlThroughputBps; 
@property (assign,nonatomic) unsigned long long egressUlThroughputBps;                     //@synthesize egressUlThroughputBps=_egressUlThroughputBps - In the implementation block
@property (assign,nonatomic) BOOL hasEgressDlThroughputBps; 
@property (assign,nonatomic) unsigned long long egressDlThroughputBps;                     //@synthesize egressDlThroughputBps=_egressDlThroughputBps - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                                   //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                                  //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                                 //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                                //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasUniqueActiveAppCount; 
@property (assign,nonatomic) unsigned long long uniqueActiveAppCount;                      //@synthesize uniqueActiveAppCount=_uniqueActiveAppCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeNameDuringPeriods;                     //@synthesize activeNameDuringPeriods=_activeNameDuringPeriods - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionUndefined; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionUndefined;                     //@synthesize tcCountFlowDispositionUndefined=_tcCountFlowDispositionUndefined - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCBKSYS; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCBKSYS;                       //@synthesize tcCountFlowDispositionTCBKSYS=_tcCountFlowDispositionTCBKSYS - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCBK; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCBK;                          //@synthesize tcCountFlowDispositionTCBK=_tcCountFlowDispositionTCBK - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCRD; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCRD;                          //@synthesize tcCountFlowDispositionTCRD=_tcCountFlowDispositionTCRD - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCOAM; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCOAM;                         //@synthesize tcCountFlowDispositionTCOAM=_tcCountFlowDispositionTCOAM - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCAV; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCAV;                          //@synthesize tcCountFlowDispositionTCAV=_tcCountFlowDispositionTCAV - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCRV; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCRV;                          //@synthesize tcCountFlowDispositionTCRV=_tcCountFlowDispositionTCRV - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCVI; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCVI;                          //@synthesize tcCountFlowDispositionTCVI=_tcCountFlowDispositionTCVI - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCVO; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCVO;                          //@synthesize tcCountFlowDispositionTCVO=_tcCountFlowDispositionTCVO - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionTCCTL; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionTCCTL;                         //@synthesize tcCountFlowDispositionTCCTL=_tcCountFlowDispositionTCCTL - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionLARGEUL; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionLARGEUL;                       //@synthesize tcCountFlowDispositionLARGEUL=_tcCountFlowDispositionLARGEUL - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionLARGEDL; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionLARGEDL;                       //@synthesize tcCountFlowDispositionLARGEDL=_tcCountFlowDispositionLARGEDL - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionLARGE; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionLARGE;                         //@synthesize tcCountFlowDispositionLARGE=_tcCountFlowDispositionLARGE - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionBURST; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionBURST;                         //@synthesize tcCountFlowDispositionBURST=_tcCountFlowDispositionBURST - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionSIRI; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionSIRI;                          //@synthesize tcCountFlowDispositionSIRI=_tcCountFlowDispositionSIRI - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionPUSH; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionPUSH;                          //@synthesize tcCountFlowDispositionPUSH=_tcCountFlowDispositionPUSH - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionKNOWNOTHER; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionKNOWNOTHER;                    //@synthesize tcCountFlowDispositionKNOWNOTHER=_tcCountFlowDispositionKNOWNOTHER - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionUNKNOWNOTHER; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionUNKNOWNOTHER;                  //@synthesize tcCountFlowDispositionUNKNOWNOTHER=_tcCountFlowDispositionUNKNOWNOTHER - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionDrop; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionDrop;                          //@synthesize tcCountFlowDispositionDrop=_tcCountFlowDispositionDrop - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionDefault; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionDefault;                       //@synthesize tcCountFlowDispositionDefault=_tcCountFlowDispositionDefault - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionFGFacetime; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionFGFacetime;                    //@synthesize tcCountFlowDispositionFGFacetime=_tcCountFlowDispositionFGFacetime - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionFGIMSG; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionFGIMSG;                        //@synthesize tcCountFlowDispositionFGIMSG=_tcCountFlowDispositionFGIMSG - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionMail; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionMail;                          //@synthesize tcCountFlowDispositionMail=_tcCountFlowDispositionMail - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionMaps; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionMaps;                          //@synthesize tcCountFlowDispositionMaps=_tcCountFlowDispositionMaps - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionMediaserverd; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionMediaserverd;                  //@synthesize tcCountFlowDispositionMediaserverd=_tcCountFlowDispositionMediaserverd - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionMusic; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionMusic;                         //@synthesize tcCountFlowDispositionMusic=_tcCountFlowDispositionMusic - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionNSURLSessiond; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionNSURLSessiond;                 //@synthesize tcCountFlowDispositionNSURLSessiond=_tcCountFlowDispositionNSURLSessiond - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionNews; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionNews;                          //@synthesize tcCountFlowDispositionNews=_tcCountFlowDispositionNews - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionPodcasts; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionPodcasts;                      //@synthesize tcCountFlowDispositionPodcasts=_tcCountFlowDispositionPodcasts - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionRTCReportingd; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionRTCReportingd;                 //@synthesize tcCountFlowDispositionRTCReportingd=_tcCountFlowDispositionRTCReportingd - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionWeather; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionWeather;                       //@synthesize tcCountFlowDispositionWeather=_tcCountFlowDispositionWeather - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionWebkit; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionWebkit;                        //@synthesize tcCountFlowDispositionWebkit=_tcCountFlowDispositionWebkit - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodDurationTCEnabledUsecs; 
@property (assign,nonatomic) unsigned long long periodDurationTCEnabledUsecs;              //@synthesize periodDurationTCEnabledUsecs=_periodDurationTCEnabledUsecs - In the implementation block
@property (assign,nonatomic) BOOL hasTcUpdates; 
@property (assign,nonatomic) unsigned tcUpdates;                                           //@synthesize tcUpdates=_tcUpdates - In the implementation block
@property (assign,nonatomic) BOOL hasTcDampeningSuppressed; 
@property (assign,nonatomic) unsigned tcDampeningSuppressed;                               //@synthesize tcDampeningSuppressed=_tcDampeningSuppressed - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionSafari; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionSafari;                        //@synthesize tcCountFlowDispositionSafari=_tcCountFlowDispositionSafari - In the implementation block
@property (assign,nonatomic) BOOL hasTcCountFlowDispositionStocks; 
@property (assign,nonatomic) unsigned tcCountFlowDispositionStocks;                        //@synthesize tcCountFlowDispositionStocks=_tcCountFlowDispositionStocks - In the implementation block
+(Class)activeNameDuringPeriodType;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)hasBytesIn;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(BOOL)hasBytesOut;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)hasPacketsIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(void)setPeriodType:(int)arg1 ;
-(void)setPeriodDurationUsecs:(unsigned long long)arg1 ;
-(unsigned long long)periodDurationUsecs;
-(void)setLastDisconnectedSecs:(unsigned long long)arg1 ;
-(void)setIngressUlThroughputBps:(unsigned long long)arg1 ;
-(void)setIngressDlThroughputBps:(unsigned long long)arg1 ;
-(void)setIngressLQM:(unsigned)arg1 ;
-(void)setEgressLQM:(unsigned)arg1 ;
-(void)setAnyListener:(unsigned)arg1 ;
-(void)setBackgroundListeners:(unsigned)arg1 ;
-(void)setEgressUlThroughputBps:(unsigned long long)arg1 ;
-(void)setEgressDlThroughputBps:(unsigned long long)arg1 ;
-(void)setTcCountFlowDispositionTCBKSYS:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionTCBK:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionTCRD:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionTCOAM:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionTCAV:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionTCRV:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionTCVI:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionTCVO:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionTCCTL:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionLARGEUL:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionLARGEDL:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionLARGE:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionBURST:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionSIRI:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionPUSH:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionKNOWNOTHER:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionUNKNOWNOTHER:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionFGFacetime:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionFGIMSG:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionMail:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionMaps:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionMediaserverd:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionMusic:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionNSURLSessiond:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionNews:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionPodcasts:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionRTCReportingd:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionSafari:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionStocks:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionWeather:(unsigned)arg1 ;
-(void)setTcCountFlowDispositionWebkit:(unsigned)arg1 ;
-(void)setUniqueActiveAppCount:(unsigned long long)arg1 ;
-(void)setActiveNameDuringPeriods:(NSMutableArray *)arg1 ;
-(void)setPeriodDurationTCEnabledUsecs:(unsigned long long)arg1 ;
-(void)addActiveNameDuringPeriod:(id)arg1 ;
-(unsigned long long)activeNameDuringPeriodsCount;
-(void)clearActiveNameDuringPeriods;
-(id)activeNameDuringPeriodAtIndex:(unsigned long long)arg1 ;
-(int)periodType;
-(void)setHasPeriodType:(BOOL)arg1 ;
-(BOOL)hasPeriodType;
-(id)periodTypeAsString:(int)arg1 ;
-(int)StringAsPeriodType:(id)arg1 ;
-(void)setHasAnyListener:(BOOL)arg1 ;
-(BOOL)hasAnyListener;
-(void)setHasBackgroundListeners:(BOOL)arg1 ;
-(BOOL)hasBackgroundListeners;
-(void)setHasPeriodDurationUsecs:(BOOL)arg1 ;
-(BOOL)hasPeriodDurationUsecs;
-(void)setHasLastDisconnectedSecs:(BOOL)arg1 ;
-(BOOL)hasLastDisconnectedSecs;
-(void)setHasIngressLQM:(BOOL)arg1 ;
-(BOOL)hasIngressLQM;
-(void)setCountLQMTransitions:(unsigned)arg1 ;
-(void)setHasCountLQMTransitions:(BOOL)arg1 ;
-(BOOL)hasCountLQMTransitions;
-(void)setHasEgressLQM:(BOOL)arg1 ;
-(BOOL)hasEgressLQM;
-(void)setHasIngressUlThroughputBps:(BOOL)arg1 ;
-(BOOL)hasIngressUlThroughputBps;
-(void)setHasIngressDlThroughputBps:(BOOL)arg1 ;
-(BOOL)hasIngressDlThroughputBps;
-(void)setHasEgressUlThroughputBps:(BOOL)arg1 ;
-(BOOL)hasEgressUlThroughputBps;
-(void)setHasEgressDlThroughputBps:(BOOL)arg1 ;
-(BOOL)hasEgressDlThroughputBps;
-(void)setHasUniqueActiveAppCount:(BOOL)arg1 ;
-(BOOL)hasUniqueActiveAppCount;
-(void)setTcCountFlowDispositionUndefined:(unsigned)arg1 ;
-(void)setHasTcCountFlowDispositionUndefined:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionUndefined;
-(void)setHasTcCountFlowDispositionTCBKSYS:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCBKSYS;
-(void)setHasTcCountFlowDispositionTCBK:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCBK;
-(void)setHasTcCountFlowDispositionTCRD:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCRD;
-(void)setHasTcCountFlowDispositionTCOAM:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCOAM;
-(void)setHasTcCountFlowDispositionTCAV:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCAV;
-(void)setHasTcCountFlowDispositionTCRV:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCRV;
-(void)setHasTcCountFlowDispositionTCVI:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCVI;
-(void)setHasTcCountFlowDispositionTCVO:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCVO;
-(void)setHasTcCountFlowDispositionTCCTL:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionTCCTL;
-(void)setHasTcCountFlowDispositionLARGEUL:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionLARGEUL;
-(void)setHasTcCountFlowDispositionLARGEDL:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionLARGEDL;
-(void)setHasTcCountFlowDispositionLARGE:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionLARGE;
-(void)setHasTcCountFlowDispositionBURST:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionBURST;
-(void)setHasTcCountFlowDispositionSIRI:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionSIRI;
-(void)setHasTcCountFlowDispositionPUSH:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionPUSH;
-(void)setHasTcCountFlowDispositionKNOWNOTHER:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionKNOWNOTHER;
-(void)setHasTcCountFlowDispositionUNKNOWNOTHER:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionUNKNOWNOTHER;
-(void)setTcCountFlowDispositionDrop:(unsigned)arg1 ;
-(void)setHasTcCountFlowDispositionDrop:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionDrop;
-(void)setTcCountFlowDispositionDefault:(unsigned)arg1 ;
-(void)setHasTcCountFlowDispositionDefault:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionDefault;
-(void)setHasTcCountFlowDispositionFGFacetime:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionFGFacetime;
-(void)setHasTcCountFlowDispositionFGIMSG:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionFGIMSG;
-(void)setHasTcCountFlowDispositionMail:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionMail;
-(void)setHasTcCountFlowDispositionMaps:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionMaps;
-(void)setHasTcCountFlowDispositionMediaserverd:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionMediaserverd;
-(void)setHasTcCountFlowDispositionMusic:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionMusic;
-(void)setHasTcCountFlowDispositionNSURLSessiond:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionNSURLSessiond;
-(void)setHasTcCountFlowDispositionNews:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionNews;
-(void)setHasTcCountFlowDispositionPodcasts:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionPodcasts;
-(void)setHasTcCountFlowDispositionRTCReportingd:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionRTCReportingd;
-(void)setHasTcCountFlowDispositionWeather:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionWeather;
-(void)setHasTcCountFlowDispositionWebkit:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionWebkit;
-(void)setHasPeriodDurationTCEnabledUsecs:(BOOL)arg1 ;
-(BOOL)hasPeriodDurationTCEnabledUsecs;
-(void)setTcUpdates:(unsigned)arg1 ;
-(void)setHasTcUpdates:(BOOL)arg1 ;
-(BOOL)hasTcUpdates;
-(void)setTcDampeningSuppressed:(unsigned)arg1 ;
-(void)setHasTcDampeningSuppressed:(BOOL)arg1 ;
-(BOOL)hasTcDampeningSuppressed;
-(void)setHasTcCountFlowDispositionSafari:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionSafari;
-(void)setHasTcCountFlowDispositionStocks:(BOOL)arg1 ;
-(BOOL)hasTcCountFlowDispositionStocks;
-(unsigned)anyListener;
-(unsigned)backgroundListeners;
-(unsigned long long)lastDisconnectedSecs;
-(unsigned)ingressLQM;
-(unsigned)countLQMTransitions;
-(unsigned)egressLQM;
-(unsigned long long)ingressUlThroughputBps;
-(unsigned long long)ingressDlThroughputBps;
-(unsigned long long)egressUlThroughputBps;
-(unsigned long long)egressDlThroughputBps;
-(unsigned long long)uniqueActiveAppCount;
-(NSMutableArray *)activeNameDuringPeriods;
-(unsigned)tcCountFlowDispositionUndefined;
-(unsigned)tcCountFlowDispositionTCBKSYS;
-(unsigned)tcCountFlowDispositionTCBK;
-(unsigned)tcCountFlowDispositionTCRD;
-(unsigned)tcCountFlowDispositionTCOAM;
-(unsigned)tcCountFlowDispositionTCAV;
-(unsigned)tcCountFlowDispositionTCRV;
-(unsigned)tcCountFlowDispositionTCVI;
-(unsigned)tcCountFlowDispositionTCVO;
-(unsigned)tcCountFlowDispositionTCCTL;
-(unsigned)tcCountFlowDispositionLARGEUL;
-(unsigned)tcCountFlowDispositionLARGEDL;
-(unsigned)tcCountFlowDispositionLARGE;
-(unsigned)tcCountFlowDispositionBURST;
-(unsigned)tcCountFlowDispositionSIRI;
-(unsigned)tcCountFlowDispositionPUSH;
-(unsigned)tcCountFlowDispositionKNOWNOTHER;
-(unsigned)tcCountFlowDispositionUNKNOWNOTHER;
-(unsigned)tcCountFlowDispositionDrop;
-(unsigned)tcCountFlowDispositionDefault;
-(unsigned)tcCountFlowDispositionFGFacetime;
-(unsigned)tcCountFlowDispositionFGIMSG;
-(unsigned)tcCountFlowDispositionMail;
-(unsigned)tcCountFlowDispositionMaps;
-(unsigned)tcCountFlowDispositionMediaserverd;
-(unsigned)tcCountFlowDispositionMusic;
-(unsigned)tcCountFlowDispositionNSURLSessiond;
-(unsigned)tcCountFlowDispositionNews;
-(unsigned)tcCountFlowDispositionPodcasts;
-(unsigned)tcCountFlowDispositionRTCReportingd;
-(unsigned)tcCountFlowDispositionWeather;
-(unsigned)tcCountFlowDispositionWebkit;
-(unsigned long long)periodDurationTCEnabledUsecs;
-(unsigned)tcUpdates;
-(unsigned)tcDampeningSuppressed;
-(unsigned)tcCountFlowDispositionSafari;
-(unsigned)tcCountFlowDispositionStocks;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

