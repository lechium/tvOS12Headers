/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:00:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/EdgeSelection.h>

@class NPWaldo, NSString, NSDate;

@interface NPEdgeSelection : EdgeSelection {

	NPWaldo* _waldoInfo;
	NSString* _bestEdge;
	unsigned long long _bestEdgeRTT;
	unsigned long long _bestEdgeProbedRTT;
	NSString* _nextBestEdge;
	unsigned long long _nextBestEdgeRTT;
	NSDate* _probeDate;

}

@property (retain) NSString * bestEdge;                               //@synthesize bestEdge=_bestEdge - In the implementation block
@property (assign) unsigned long long bestEdgeRTT;                    //@synthesize bestEdgeRTT=_bestEdgeRTT - In the implementation block
@property (assign) unsigned long long bestEdgeProbedRTT;              //@synthesize bestEdgeProbedRTT=_bestEdgeProbedRTT - In the implementation block
@property (retain) NSString * nextBestEdge;                           //@synthesize nextBestEdge=_nextBestEdge - In the implementation block
@property (assign) unsigned long long nextBestEdgeRTT;                //@synthesize nextBestEdgeRTT=_nextBestEdgeRTT - In the implementation block
@property (retain) NSDate * probeDate;                                //@synthesize probeDate=_probeDate - In the implementation block
@property (assign,nonatomic,__weak) NPWaldo * waldoInfo;              //@synthesize waldoInfo=_waldoInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)bestEdge;
-(unsigned long long)bestEdgeRTT;
-(unsigned long long)bestEdgeProbedRTT;
-(NSString *)nextBestEdge;
-(unsigned long long)nextBestEdgeRTT;
-(void)trainEdgeSelection:(id)arg1 edgeRank:(unsigned long long)arg2 rtt:(unsigned long long)arg3 ;
-(void)setNextBestEdge:(NSString *)arg1 ;
-(void)setNextBestEdgeRTT:(unsigned long long)arg1 ;
-(NPWaldo *)waldoInfo;
-(void)getBestEdgeFromEdgeSelection;
-(BOOL)shouldProbeForEdgeSelection:(id)arg1 edgeRank:(long long*)arg2 edgeIndex:(long long*)arg3 bestEdgeLabel:(id*)arg4 ;
-(void)setBestEdge:(NSString *)arg1 ;
-(void)setBestEdgeRTT:(unsigned long long)arg1 ;
-(void)setBestEdgeProbedRTT:(unsigned long long)arg1 ;
-(NSDate *)probeDate;
-(void)setProbeDate:(NSDate *)arg1 ;
-(id)initWithWaldo:(id)arg1 signature:(id)arg2 interfaceType:(id)arg3 ;
-(void)updateEdgeSelection:(unsigned long long)arg1 ;
-(id)copyEdgeSelectionTelemetry;
-(void)setWaldoInfo:(NPWaldo *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

