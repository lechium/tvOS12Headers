/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:03:32 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TISweepSource : NSObject {

	NSMutableDictionary* debugValues;
	int stepCount;

}

@property (nonatomic,readonly) NSMutableDictionary * debugValues; 
@property (assign,nonatomic) int stepCount; 
+(id)sharedInstance;
-(BOOL)finished;
-(int)stepCount;
-(NSMutableDictionary *)debugValues;
-(void)addValue:(id)arg1 withMin:(float)arg2 withMax:(float)arg3 ;
-(void)addValue:(id)arg1 withValue:(float)arg2 ;
-(id)sweepStateHeader;
-(id)sweepStateValues;
-(void)advanceSweep;
-(void)setStepCount:(int)arg1 ;
@end

