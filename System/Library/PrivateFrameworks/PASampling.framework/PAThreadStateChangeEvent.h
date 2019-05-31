/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:04 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASampleThreadData;

@interface PAThreadStateChangeEvent : NSObject {

	PASampleThreadData* _threadData;
	double _machTimestamp;
	unsigned long long _stateChangeType;

}

@property (assign,nonatomic) double machTimestamp;                            //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long stateChangeType;              //@synthesize stateChangeType=_stateChangeType - In the implementation block
@property (nonatomic,readonly) PASampleThreadData * threadData;               //@synthesize threadData=_threadData - In the implementation block
-(double)machTimestamp;
-(unsigned long long)stateChangeType;
-(PASampleThreadData *)threadData;
-(id)initUnknownThreadStateChangeEventWithTid:(unsigned long long)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3 ;
-(id)initWithThreadData:(id)arg1 machTime:(double)arg2 stateChangeType:(unsigned long long)arg3 ;
-(void)setMachTimestamp:(double)arg1 ;
-(void)setStateChangeType:(unsigned long long)arg1 ;
-(id)debugDescription;
@end
