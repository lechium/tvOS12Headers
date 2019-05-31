/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 11:01:07 AM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16K45)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentAnalyzerQueue : NSObject {

	double _firstPingSinceReset;
	double _lastPingSinceReset;
	NSMutableSet* _momentListIdsToProcess;
	double _minimumInterval;
	double _maximumInterval;

}

@property (assign,nonatomic) double minimumInterval;                //@synthesize minimumInterval=_minimumInterval - In the implementation block
@property (assign,nonatomic) double maximumInterval;                //@synthesize maximumInterval=_maximumInterval - In the implementation block
@property (nonatomic,readonly) BOOL hasWork; 
@property (nonatomic,readonly) BOOL shouldProcessWork; 
-(BOOL)hasWork;
-(void)enqueueMomentListIds:(id)arg1 ;
-(BOOL)shouldProcessWork;
-(id)dequeueMomentListIdsForProcessing;
-(void)setMinimumInterval:(double)arg1 ;
-(void)setMaximumInterval:(double)arg1 ;
-(double)minimumInterval;
-(double)maximumInterval;
-(id)init;
-(void)dealloc;
@end

