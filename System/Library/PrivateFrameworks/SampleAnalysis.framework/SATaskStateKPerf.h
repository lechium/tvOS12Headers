/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:07:38 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SATaskState.h>

@interface SATaskStateKPerf : SATaskState {

	BOOL _filledSnap;
	BOOL _filledMem;
	BOOL _filledLatencyQoS;

}

@property (assign) BOOL filledSnap;                    //@synthesize filledSnap=_filledSnap - In the implementation block
@property (assign) BOOL filledMem;                     //@synthesize filledMem=_filledMem - In the implementation block
@property (assign) BOOL filledLatencyQoS;              //@synthesize filledLatencyQoS=_filledLatencyQoS - In the implementation block
-(BOOL)filledSnap;
-(void)setFilledSnap:(BOOL)arg1 ;
-(BOOL)filledMem;
-(void)setFilledMem:(BOOL)arg1 ;
-(BOOL)filledLatencyQoS;
-(void)setFilledLatencyQoS:(BOOL)arg1 ;
@end

