/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:34 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSString;

@interface NRServerRequestReporter : NSObject {

	BOOL _submitted;
	NSString* _requestType;
	mach_timebase_info _timebaseInfo;
	double _startTime;

}

@property (nonatomic,retain) NSString * requestType;                       //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) mach_timebase_info timebaseInfo;              //@synthesize timebaseInfo=_timebaseInfo - In the implementation block
@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL submitted;                               //@synthesize submitted=_submitted - In the implementation block
-(NSString *)requestType;
-(void)setRequestType:(NSString *)arg1 ;
-(id)initWithRequestType:(id)arg1 ;
-(double)abs_to_seconds:(unsigned long long)arg1 ;
-(mach_timebase_info)timebaseInfo;
-(unsigned long long)abs_to_nanos:(unsigned long long)arg1 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 andDuration:(double)arg2 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 ;
-(void)requestTimedOut;
-(void)setTimebaseInfo:(mach_timebase_info)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)submitted;
-(void)dealloc;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
@end
