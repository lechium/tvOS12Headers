/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:05:24 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMapTable, NSObject;

@interface SignpostIntervalBuilder : NSObject {

	BOOL _buildAnimationCompositeIntervalTimelines;
	BOOL _compositeIntervalIsInFlight;
	NSMutableDictionary* _systemwideDictionary;
	NSMutableDictionary* _processwideDictionary;
	NSMutableDictionary* _threadwideDictionary;
	NSMapTable* _outstandingAnimationStarts;
	unsigned long long _totalCompositeIntervalCount;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * systemwideDictionary;                //@synthesize systemwideDictionary=_systemwideDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * processwideDictionary;               //@synthesize processwideDictionary=_processwideDictionary - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * threadwideDictionary;                //@synthesize threadwideDictionary=_threadwideDictionary - In the implementation block
@property (nonatomic,retain) NSMapTable * outstandingAnimationStarts;                     //@synthesize outstandingAnimationStarts=_outstandingAnimationStarts - In the implementation block
@property (assign,nonatomic) unsigned long long totalCompositeIntervalCount;              //@synthesize totalCompositeIntervalCount=_totalCompositeIntervalCount - In the implementation block
@property (assign,nonatomic) BOOL compositeIntervalIsInFlight;                            //@synthesize compositeIntervalIsInFlight=_compositeIntervalIsInFlight - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> syncQueue;                    //@synthesize syncQueue=_syncQueue - In the implementation block
@property (assign,nonatomic) BOOL buildAnimationCompositeIntervalTimelines;               //@synthesize buildAnimationCompositeIntervalTimelines=_buildAnimationCompositeIntervalTimelines - In the implementation block
+(BOOL)_filterPassesRequiredSCForFramerate:(id)arg1 ;
+(id)_framerateCalculationWhitelist;
-(void)_cleanupState;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(BOOL)eventIsCompositeLoopEvent:(id)arg1 ;
-(BOOL)isCompositeLoopSubsystem:(id)arg1 category:(id)arg2 ;
-(id)processEndEvent:(id)arg1 isAnimation:(BOOL*)arg2 ;
-(BOOL)processBeginEvent:(id)arg1 ;
-(BOOL)buildAnimationCompositeIntervalTimelines;
-(void)setBuildAnimationCompositeIntervalTimelines:(BOOL)arg1 ;
-(id)doneProcessing;
-(NSMutableDictionary *)systemwideDictionary;
-(NSMutableDictionary *)processwideDictionary;
-(NSMutableDictionary *)threadwideDictionary;
-(id)_matchingEventForEvent:(id)arg1 removeIfFound:(BOOL)arg2 ;
-(BOOL)_trackBegin:(id)arg1 ;
-(NSMapTable *)outstandingAnimationStarts;
-(void)setOutstandingAnimationStarts:(NSMapTable *)arg1 ;
-(BOOL)compositeIntervalIsInFlight;
-(unsigned long long)totalCompositeIntervalCount;
-(void)setCompositeIntervalIsInFlight:(BOOL)arg1 ;
-(void)setTotalCompositeIntervalCount:(unsigned long long)arg1 ;
-(void)_processCompositeInterval:(id)arg1 ;
-(id)matchingEventForEvent:(id)arg1 removeIfFound:(BOOL)arg2 ;
-(id)init;
@end

