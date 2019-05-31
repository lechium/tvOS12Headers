/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:06:30 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFActivityBitmap : NSObject {

	unsigned long long _startTime;
	unsigned long long _part1;
	unsigned long long _part2;

}

@property (assign) unsigned long long startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long part1;                  //@synthesize part1=_part1 - In the implementation block
@property (assign) unsigned long long part2;                  //@synthesize part2=_part2 - In the implementation block
-(long long)compareStartTime:(id)arg1 ;
-(unsigned long long)part1;
-(unsigned long long)part2;
-(id)initWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part2:(unsigned long long)arg3 ;
-(void)setPart1:(unsigned long long)arg1 ;
-(void)setPart2:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)startTime;
-(void)setStartTime:(unsigned long long)arg1 ;
@end
